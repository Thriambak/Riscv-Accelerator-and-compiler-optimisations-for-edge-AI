// Module instance to contain the PEs and supporting logic such as input/output
// selection logic. This is just to tidy up the top-level a bit.

import accelerator_pkg::*;

module arith_stage (
    output logic [127:0] arith_output,
    output logic [127:0] replicated_scalar, // Want this output for vmv.v.i
    output logic [31:0]  dot_product_result, // Accumulated dot product result
    output logic [3:0]   zero_skip_mask,     // Which PEs were zero-skipped this cycle
    output logic         all_zero_cycle,     // All 4 PEs zero B → decoder can skip cycle
    input wire clk,
    input wire n_reset,
    input wire [127:0] vs1_data,
    input wire [127:0] vs2_data,
    input wire [127:0] vs3_data,
    input wire [31:0] scalar_operand,
    input wire [4:0] imm_operand,
    input wire [1:0] elements_to_write,
    input wire [3:0] cycle_count,
    input pe_arith_op_t op,
    input pe_saturate_mode_t saturate_mode,
    input pe_output_mode_t output_mode,
    input pe_operand_t operand_select,
    input wire [1:0] widening,
    input wire [1:0] mul_us,
    input wire unsigned_immediate,
    input wire wide_vs1,
    input wire [4:0] vl,
    input wire [1:0] vsew,
    input wire [31:0] sparse_metadata  // N:M sparsity metadata from accelerator_top
);

logic [31:0] reduction_intermediate_reg;

// logic [127:0] replicated_scalar;

wire [31:0] pe0_out;
wire [31:0] pe1_out;
wire [31:0] pe2_out;
wire [31:0] pe3_out;

logic [31:0] pe0_b_data;
logic [31:0] pe1_b_data;
logic [31:0] pe2_b_data;
logic [31:0] pe3_b_data;

logic [31:0] scalar_to_replicate;

pe_32b pe0 (
    .out(pe0_out),
    .clk(clk),
    .a(vs2_data[31:0]),
    .b(pe0_b_data),
    .c(vs3_data[31:0]),
    .op(op),
    .vsew(vsew),
    .widening(widening),
    .mul_us(mul_us),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .wide_b(wide_vs1),
    .act_param(scalar_operand)
);

pe_32b pe1 (
    .out(pe1_out),
    .clk(clk),
    .a(vs2_data[63:32]),
    .b(pe1_b_data),
    .c(vs3_data[63:32]),
    .op(op),
    .vsew(vsew),
    .widening(widening),
    .mul_us(mul_us),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .wide_b(wide_vs1),
    .act_param(scalar_operand)
);

pe_32b pe2 (
    .out(pe2_out),
    .clk(clk),
    .a(vs2_data[95:64]),
    .b(pe2_b_data),
    .c(vs3_data[95:64]),
    .op(op),
    .vsew(vsew),
    .widening(widening),
    .mul_us(mul_us),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .wide_b(wide_vs1),
    .act_param(scalar_operand)
);

pe_32b pe3 (
    .out(pe3_out),
    .clk(clk),
    .a(vs2_data[127:96]),
    .b(pe3_b_data),
    .c(vs3_data[127:96]),
    .op(op),
    .vsew(vsew),
    .widening(widening),
    .mul_us(mul_us),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .wide_b(wide_vs1),
    .act_param(scalar_operand)
);

scalar_replicate scalar_rep0 (
    .replicated_out(replicated_scalar),
    .scalar_in(scalar_to_replicate),
    .vsew(vsew),
    .us(1'b0)
);

// Update the intermediate register used for reduction operations every cycle
always_ff @(posedge clk, negedge n_reset)
    if (~n_reset)
        reduction_intermediate_reg <= '0;
    else
        reduction_intermediate_reg <= pe3_out;

////////////////////////////////////////////////////////////////////////////////
// DOT PRODUCT REDUCTION TREE + ACCUMULATOR
////////////////////////////////////////////////////////////////////////////////
// Stage 1: Pair-wise addition of 4 PE multiply outputs
logic [31:0] dot_sum_01;  // PE0 + PE1
logic [31:0] dot_sum_23;  // PE2 + PE3
// Stage 2: Final sum of all 4 products this cycle
logic [31:0] dot_sum_all;
// Accumulated value across multi-cycle instructions
logic [31:0] dot_accumulator;

// Adder tree (combinational — produces result in same cycle as PEs)
always_comb begin
    dot_sum_01  = pe0_out + pe1_out;
    dot_sum_23  = pe2_out + pe3_out;
    dot_sum_all = dot_sum_01 + dot_sum_23;
end

// Accumulator: adds current cycle's partial sum to running total
always_ff @(posedge clk, negedge n_reset) begin
    if (~n_reset)
        dot_accumulator <= '0;
    else if (op == PE_ARITH_DOT) begin
        if (cycle_count == 2'd0)
            dot_accumulator <= dot_sum_all;  // First cycle: start fresh
        else
            dot_accumulator <= dot_accumulator + dot_sum_all;  // Accumulate
    end
end

// Output: for single-cycle, use direct sum; for multi-cycle, use accumulated
assign dot_product_result = (cycle_count == 2'd0)
                          ? dot_sum_all
                          : dot_accumulator + dot_sum_all;

////////////////////////////////////////////////////////////////////////////////
// PE INPUT OPERAND SELECTION
////////////////////////////////////////////////////////////////////////////////
always_comb
begin
    scalar_to_replicate = scalar_operand;

    case (operand_select)
        PE_OPERAND_VS1:
        begin
            pe0_b_data = vs1_data[31:0];
            pe1_b_data = vs1_data[63:32];
            pe2_b_data = vs1_data[95:64];
            pe3_b_data = vs1_data[127:96];
        end
        PE_OPERAND_SCALAR:
        begin
            pe0_b_data = replicated_scalar[31:0];
            pe1_b_data = replicated_scalar[63:32];
            pe2_b_data = replicated_scalar[95:64];
            pe3_b_data = replicated_scalar[127:96];
        end
        PE_OPERAND_IMMEDIATE:
        begin
            if (unsigned_immediate)
            begin
                pe0_b_data = {'0, imm_operand[4:0]};
                pe1_b_data = {'0, imm_operand[4:0]};
                pe2_b_data = {'0, imm_operand[4:0]};
                pe3_b_data = {'0, imm_operand[4:0]};
            end
            else
            begin
                pe0_b_data = {{27{imm_operand[4]}}, imm_operand[4:0]};
                pe1_b_data = {{27{imm_operand[4]}}, imm_operand[4:0]};
                pe2_b_data = {{27{imm_operand[4]}}, imm_operand[4:0]};
                pe3_b_data = {{27{imm_operand[4]}}, imm_operand[4:0]};
            end
            // This line handles a special case - the scalar replicate logic is
            // used for vmv.v.i instructions but the PE is not used. In this
            // case the immediate operand needs to be replicated and returned.
            scalar_to_replicate = {{27{imm_operand[4]}}, imm_operand[4:0]};
        end
        PE_OPERAND_RIPPLE:
        begin
            // For first cycle of reduction operation want to look at vs1[0].
            // For later cycles need the intermediate value from last cycle.
            if (cycle_count == 2'd0)
                pe0_b_data = vs1_data[31:0];
            else
                pe0_b_data = reduction_intermediate_reg;
            pe1_b_data = pe0_out;
            pe2_b_data = pe1_out;
            pe3_b_data = pe2_out;
        end
        PE_OPERAND_ZERO:
        begin
            // Force B=0 for activation pass-through instructions
            // (scalar_operand carries the activation parameter via act_param)
            pe0_b_data = 32'd0;
            pe1_b_data = 32'd0;
            pe2_b_data = 32'd0;
            pe3_b_data = 32'd0;
        end
        PE_OPERAND_SLIDE:
        begin
            // vslide1down: each PE's B carries the carry-in byte for the slide
            // PE0 gets byte0 of PE1's vs2 word (element 4 slides into position 3)
            // PE1 gets byte0 of PE2's vs2 word (element 8 slides into position 7)
            // PE2 gets byte0 of PE3's vs2 word (element 12 slides into position 11)
            // PE3 gets scalar_operand (new element inserted at end)
            pe0_b_data = {24'd0, vs2_data[39:32]};   // byte0 of next 32-bit word
            pe1_b_data = {24'd0, vs2_data[71:64]};
            pe2_b_data = {24'd0, vs2_data[103:96]};
            pe3_b_data = {24'd0, scalar_operand[7:0]}; // scalar for last element
        end
        PE_OPERAND_SPARSE:
        begin
            ////////////////////////////////////////////////////////////
            // N:M STRUCTURED SPARSITY COMPACTION
            // The sparse_metadata register holds 4-bit masks per 4-element
            // group. For the current cycle_count, we extract the relevant
            // 4-bit mask and pack the non-zero vs1 elements into
            // consecutive PE lanes (PE0, PE1, ...). PEs beyond the
            // non-zero count get 0, effectively skipping computation.
            //
            // vs2 data is compacted in the SAME order so that
            // element-wise pairings are preserved.
            ////////////////////////////////////////////////////////////
            // Extract 4-bit mask for this cycle's element group
            // cycle_count=0 → bits[3:0], cycle_count=1 → bits[7:4], etc.
            automatic logic [3:0] sp_mask;
            sp_mask = sparse_metadata[cycle_count*4 +: 4];

            // Default: zero all PE inputs
            pe0_b_data = 32'd0;
            pe1_b_data = 32'd0;
            pe2_b_data = 32'd0;
            pe3_b_data = 32'd0;

            // Compact non-zero elements into consecutive PE lanes
            // This is a priority encoder: scan mask bits 0→3,
            // each set bit feeds the next available PE lane
            if (sp_mask[0]) begin
                // Lane 0 is non-zero
                case ({sp_mask[3], sp_mask[2], sp_mask[1]})
                    // Other non-zero lanes determine PE1, PE2, PE3
                    default: pe0_b_data = vs1_data[31:0];
                endcase
                pe0_b_data = vs1_data[31:0];
            end
            if (sp_mask[1]) begin
                if (sp_mask[0])
                    pe1_b_data = vs1_data[63:32];  // Second non-zero → PE1
                else
                    pe0_b_data = vs1_data[63:32];  // First non-zero → PE0
            end
            if (sp_mask[2]) begin
                case ({sp_mask[1], sp_mask[0]})
                    2'b11: pe2_b_data = vs1_data[95:64];  // Third non-zero → PE2
                    2'b10: pe1_b_data = vs1_data[95:64];  // Second → PE1
                    2'b01: pe1_b_data = vs1_data[95:64];  // Second → PE1
                    2'b00: pe0_b_data = vs1_data[95:64];  // First → PE0
                endcase
            end
            if (sp_mask[3]) begin
                case ({sp_mask[2], sp_mask[1], sp_mask[0]})
                    3'b111: pe3_b_data = vs1_data[127:96]; // Fourth → PE3
                    3'b110: pe2_b_data = vs1_data[127:96]; // Third → PE2
                    3'b101: pe2_b_data = vs1_data[127:96]; // Third → PE2
                    3'b100: pe1_b_data = vs1_data[127:96]; // Second → PE1
                    3'b011: pe2_b_data = vs1_data[127:96]; // Third → PE2
                    3'b010: pe1_b_data = vs1_data[127:96]; // Second → PE1
                    3'b001: pe1_b_data = vs1_data[127:96]; // Second → PE1
                    3'b000: pe0_b_data = vs1_data[127:96]; // First → PE0
                endcase
            end
        end
    endcase
end

////////////////////////////////////////////////////////////////////////////////
// ZERO-SKIPPING LOGIC
// When a PE's B operand is zero and we're doing multiply/dot, the output is
// guaranteed to be zero. We detect this and can report it for profiling.
////////////////////////////////////////////////////////////////////////////////
logic is_mul_op;
assign is_mul_op = (op == PE_ARITH_MUL) || (op == PE_ARITH_MULADD) || (op == PE_ARITH_DOT)
                 || (op == PE_ARITH_MULADD_OFF) || (op == PE_ARITH_PACKED_DOT);

// Activation sparsity: check BOTH A (vs2, activation) and B (vs1/scalar, weight) operands
// If EITHER operand is zero, the multiply result is zero → safe to skip
assign zero_skip_mask = {
    is_mul_op & ((pe3_b_data == '0) | (vs2_data[127:96] == '0)),
    is_mul_op & ((pe2_b_data == '0) | (vs2_data[95:64]  == '0)),
    is_mul_op & ((pe1_b_data == '0) | (vs2_data[63:32]  == '0)),
    is_mul_op & ((pe0_b_data == '0) | (vs2_data[31:0]   == '0))
};

// CYCLE-LEVEL COMPACTION: if ALL 4 PEs have zero operands on a multiply,
// the decoder can skip this cycle entirely (no useful output produced).
// This converts zero-skipping from power saving to actual cycle saving.
assign all_zero_cycle = is_mul_op & (zero_skip_mask == 4'b1111);

// For the output: if zero-skipped on multiply ops, force PE output to 0
// (The PE still computes but this allows future gating optimizations)
logic [31:0] pe0_final, pe1_final, pe2_final, pe3_final;
assign pe0_final = zero_skip_mask[0] ? 32'd0 : pe0_out;
assign pe1_final = zero_skip_mask[1] ? 32'd0 : pe1_out;
assign pe2_final = zero_skip_mask[2] ? 32'd0 : pe2_out;
assign pe3_final = zero_skip_mask[3] ? 32'd0 : pe3_out;

////////////////////////////////////////////////////////////////////////////////
// PE OUTPUT SELECTION
////////////////////////////////////////////////////////////////////////////////
always_comb
begin
    // For reduction operations the output comes from a single PE (the last in
    // the chain), but which PE is last depends on VL.
    if (operand_select == PE_OPERAND_RIPPLE)
        case (vl[1:0])
            2'd0:
                arith_output = {'0, pe3_final};
            2'd1:
                arith_output = {'0, pe0_final};
            2'd2:
                arith_output = {'0, pe1_final};
            2'd3:
                arith_output = {'0, pe2_final};
            default:
                arith_output = {'0, pe3_final};
        endcase
    else
        arith_output = {pe3_final, pe2_final, pe1_final, pe0_final};
end


endmodule
