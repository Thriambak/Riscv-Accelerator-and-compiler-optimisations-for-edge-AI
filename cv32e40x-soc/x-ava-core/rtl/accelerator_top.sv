// `include "defs.sv"
import accelerator_pkg::*;

module accelerator_top (
    output logic  [31:0] apu_result,
    output logic  [4:0]  apu_flags_o,
    output logic         apu_gnt,
    output logic         apu_rvalid,
    input  wire         clk,
    input  wire         n_reset,
    input  wire         apu_req,
    input  wire  [2:0][31:0] apu_operands_i,
    input  wire  [5:0]  apu_op,
    input  wire  [14:0] apu_flags_i,
    output wire         data_req_o,
    input  wire         data_gnt_i,
    input  wire         data_rvalid_i,
    output wire         data_we_o,
    output wire  [3:0]  data_be_o,
    output wire  [31:0] data_addr_o,
    output wire  [31:0] data_wdata_o,
    input  wire  [31:0] data_rdata_i,
    output wire         core_halt_o
);

////////////////////////////////////////////////////////////////////////////////
// OUTPUT VARIABLE DECLARATIONS
////////////////////////////////////////////////////////////////////////////////

// CSR OUTPUTS
wire [4:0] vl;
wire [1:0] vsew;
wire [1:0] vlmul;

// DECODER OUTPUTS
wire [31:0] scalar_operand1;
wire [31:0] scalar_operand2;
wire [10:0] immediate_operand;
wire [4:0] vs1_addr;
wire [4:0] vs2_addr;
logic [4:0] vd_addr;
wire csr_write;
wire preserve_vl;
wire set_vl_max;
wire [1:0] elements_to_write;
wire [3:0] cycle_count;
wire vec_reg_write;
vreg_wb_src_t vd_data_src;
vreg_addr_src_t vs3_addr_src;
pe_arith_op_t pe_op;
pe_saturate_mode_t saturate_mode;
pe_output_mode_t output_mode;
pe_operand_t operand_select;
wire [1:0] pe_mul_us;
wire [1:0] widening;
apu_result_src_t apu_result_select;
wire unsigned_immediate;
wire wide_vs1;
wire mask_enable;
wire sparse_meta_write;  // N:M Sparsity: decoder asserts when vspmeta instruction loads metadata

// VLSU OUTPUTS
wire [127:0] vlsu_wdata;
logic vec_reg_write_lsu;
logic vlsu_done;
logic [4:0] vl_next_comb;

logic vlsu_en;
logic vlsu_load;
logic vlsu_store;
logic vlsu_strided;
logic vlsu_ready;

// VECTOR REGISTERS OUTPUTS
wire [127:0] vs1_data;
wire [127:0] vs2_data;
wire [127:0] vs3_data;

// ARITHMETIC STAGE OUTPUTS
wire [127:0] arith_output;
wire [127:0] replicated_scalar;
wire [31:0] dot_product_result;
wire [3:0]  zero_skip_mask;
wire        all_zero_cycle;        // Sparsity compaction: all PEs had zero B operand

////////////////////////////////////////////////////////////////////////////////
// N:M STRUCTURED SPARSITY — Metadata Register
// Software loads a 32-bit metadata word via `vspmeta` instruction.
// Each 4 bits encode which elements in a group of 4 are non-zero.
// The arith_stage uses this to compact non-zero elements into fewer PE lanes.
////////////////////////////////////////////////////////////////////////////////
logic [31:0] sparse_metadata_reg;
always_ff @(posedge clk, negedge n_reset) begin
    if (~n_reset)
        sparse_metadata_reg <= '0;
    else if (sparse_meta_write)
        sparse_metadata_reg <= scalar_operand1;
end

////////////////////////////////////////////////////////////////////////////////
// MODULE INSTANTIATION
////////////////////////////////////////////////////////////////////////////////

wire [31:0] apu_operands [2:0];
assign apu_operands[0] = apu_operands_i[0];
assign apu_operands[1] = apu_operands_i[1];
assign apu_operands[2] = apu_operands_i[2];

////////////////////////////////////////
// COMMAND FIFO — CPU-Accelerator Decoupling
// Intermediate wires between FIFO and decoder
logic        fifo_dec_apu_req;
logic [2:0][31:0] fifo_dec_apu_operands;
logic [5:0]  fifo_dec_apu_op;
logic [14:0] fifo_dec_apu_flags;
logic        fifo_dec_apu_gnt;
logic        fifo_dec_apu_rvalid;
logic        fifo_dec_core_halt;

// Unpack FIFO decoder-side operands for the decoder (unpacked array)
wire [31:0] fifo_dec_apu_operands_unpacked [2:0];
assign fifo_dec_apu_operands_unpacked[0] = fifo_dec_apu_operands[0];
assign fifo_dec_apu_operands_unpacked[1] = fifo_dec_apu_operands[1];
assign fifo_dec_apu_operands_unpacked[2] = fifo_dec_apu_operands[2];

vector_fifo #(.DEPTH(4)) cmd_fifo (
    .clk(clk),
    .n_reset(n_reset),
    // CPU side
    .cpu_apu_req_i(apu_req),
    .cpu_apu_operands_i(apu_operands_i),
    .cpu_apu_op_i(apu_op),
    .cpu_apu_flags_i(apu_flags_i),
    .cpu_apu_gnt_o(apu_gnt),
    .cpu_apu_rvalid_o(apu_rvalid),
    .cpu_core_halt_o(core_halt_o),
    // Decoder side
    .dec_apu_req_o(fifo_dec_apu_req),
    .dec_apu_operands_o(fifo_dec_apu_operands),
    .dec_apu_op_o(fifo_dec_apu_op),
    .dec_apu_flags_o(fifo_dec_apu_flags),
    .dec_apu_gnt_i(fifo_dec_apu_gnt),
    .dec_apu_rvalid_i(fifo_dec_apu_rvalid),
    .dec_core_halt_i(fifo_dec_core_halt)
);

////////////////////////////////////////
// CSRs
vector_csrs vcsrs0 (
    .vl(vl),
    .vsew(vsew),
    .vlmul(vlmul),
    .vl_next_comb(vl_next_comb),
    .clk(clk),
    .n_reset(n_reset),
    .avl_in(scalar_operand1),
    .vtype_in(immediate_operand[4:0]),
    .write(csr_write),
    .saturate_flag(1'b0),
    .preserve_vl(preserve_vl),
    .set_vl_max(set_vl_max)
);

////////////////////////////////////////
// DECODER
vector_decoder vdec0 (
    .apu_rvalid(fifo_dec_apu_rvalid),     // → FIFO (not CPU directly)
    .apu_gnt(fifo_dec_apu_gnt),           // → FIFO (not CPU directly)
    .scalar_operand1(scalar_operand1),
    .scalar_operand2(scalar_operand2),
    .immediate_operand(immediate_operand),
    .vs1_addr(vs1_addr),
    .vs2_addr(vs2_addr),
    .vd_addr(vd_addr),
    .csr_write(csr_write),
    .preserve_vl(preserve_vl),
    .set_vl_max(set_vl_max),
    .elements_to_write(elements_to_write),
    .cycle_count(cycle_count),
    .vec_reg_write(vec_reg_write),
    .vd_data_src(vd_data_src),
    .vs3_addr_src(vs3_addr_src),
    .pe_op(pe_op),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .operand_select(operand_select),
    .pe_mul_us(pe_mul_us),
    .widening(widening),
    .apu_result_select(apu_result_select),
    .unsigned_immediate(unsigned_immediate),
    .wide_vs1(wide_vs1),
    .mask_enable(mask_enable),
    .sparse_meta_write(sparse_meta_write),
    .clk(clk),
    .n_reset(n_reset),
    .apu_req(fifo_dec_apu_req),                    // ← from FIFO
    .apu_operands(fifo_dec_apu_operands_unpacked), // ← from FIFO
    .apu_op(fifo_dec_apu_op),                      // ← from FIFO
    .apu_flags_i(fifo_dec_apu_flags),              // ← from FIFO
    .vl(vl),
    .vsew(vsew),
    .vlmul(vlmul),
    .vlsu_en_o(vlsu_en),
    .vlsu_load_o(vlsu_load),
    .vlsu_store_o(vlsu_store),
    .vlsu_strided_o(vlsu_strided),
    .vlsu_ready_i(vlsu_ready),
    .vlsu_done_i(vlsu_done),
    .core_halt_o(fifo_dec_core_halt),              // → FIFO (not CPU directly)
    .all_zero_cycle(all_zero_cycle)
);

////////////////////////////////////////
// VECTOR REGISTERS
logic [127:0] vd_data;
logic [4:0] vs3_addr, vs3_addr_vlsu;
always_comb begin
    case (vd_data_src)
        VREG_WB_SRC_MEMORY:
            vd_data = vlsu_wdata;
        VREG_WB_SRC_ARITH:
            vd_data = arith_output;
        VREG_WB_SRC_SCALAR:
            vd_data = replicated_scalar;
        default:
            vd_data = '0;
    endcase

    case (vs3_addr_src)
        VS3_ADDR_SRC_DECODE:
            vs3_addr = vd_addr;
        VS3_ADDR_SRC_VLSU:
            vs3_addr = vs3_addr_vlsu;
        default:
            vs3_addr = '0;
    endcase
end


vector_registers vreg0 (
    .vs1_data(vs1_data),
    .vs2_data(vs2_data),
    .vs3_data(vs3_data),
    .v0_mask(),              // Mask register output (connected for future use)
    .vd_data(vd_data),
    .vs1_addr(vs1_addr),
    .vs2_addr(vs2_addr),
    .vd_addr(vs3_addr),
    .vsew(vsew),
    .vlmul(vlmul),
    .elements_to_write(elements_to_write),
    .clk(clk),
    .n_reset(n_reset),
    .write(vec_reg_write | vec_reg_write_lsu ),
    .mask_enable(mask_enable),
    .widening_op(widening[0]),
    .wide_vs1(wide_vs1),
    .load_operation(vlsu_load)
);

////////////////////////////////////////
// PEs CONTAINED IN ARITHMETIC STAGE WRAPPER
arith_stage arith_stage0 (
    .arith_output(arith_output),
    .replicated_scalar(replicated_scalar),
    .dot_product_result(dot_product_result),
    .zero_skip_mask(zero_skip_mask),
    .all_zero_cycle(all_zero_cycle),
    .clk(clk),
    .n_reset(n_reset),
    .vs1_data(vs1_data),
    .vs2_data(vs2_data),
    .vs3_data(vs3_data),
    .scalar_operand(scalar_operand1),
    .imm_operand(immediate_operand[4:0]),
    .elements_to_write(elements_to_write),
    .cycle_count(cycle_count),
    .op(pe_op),
    .saturate_mode(saturate_mode),
    .output_mode(output_mode),
    .operand_select(operand_select),
    .widening(widening),
    .mul_us(pe_mul_us),
    .unsigned_immediate(unsigned_immediate),
    .wide_vs1(wide_vs1),
    .vl(vl),
    .vsew(vsew),
    .sparse_metadata(sparse_metadata_reg)
);

////////////////////////////////////////
// VLSU
vector_lsu vlsu0 (
    .clk(clk),
    .n_reset(n_reset),

    .vl_i(vl),
    .vsew_i(vsew),
    .vlmul_i(vlmul),

    .vlsu_en_i(vlsu_en),
    .vlsu_load_i(vlsu_load),
    .vlsu_store_i(vlsu_store),
    .vlsu_strided_i(vlsu_strided),
    .vlsu_ready_o(vlsu_ready),
    .vlsu_done_o(vlsu_done),

    .data_req_o(data_req_o),
    .data_gnt_i(data_gnt_i),
    .data_rvalid_i(data_rvalid_i),
    .data_addr_o(data_addr_o),
    .data_we_o(data_we_o),
    .data_be_o(data_be_o),
    .data_rdata_i(data_rdata_i),
    .data_wdata_o(data_wdata_o),

    .cycle_count_i(cycle_count),

    .op0_data_i(scalar_operand1),
    .op1_data_i(scalar_operand2),

    .vs_wdata_o(vlsu_wdata),
    .vs_rdata_i(vs3_data),
    .vr_addr_i(vd_addr),
    .vs3_addr_o(vs3_addr_vlsu),
    .vr_we_o(vec_reg_write_lsu)
);

////////////////////////////////////////////////////////////////////////////////
// RESULT SELECTION - what value to return to CPU
////////////////////////////////////////////////////////////////////////////////
logic [31:0] reg_apu_result;
assign apu_flags_o = '0;
assign apu_result = reg_apu_result;

////////////////////////////////////////////////////////////////////////////////
// PERFORMANCE COUNTERS
////////////////////////////////////////////////////////////////////////////////
logic [31:0] perf_vec_instr_count;   // Total vector instructions completed
logic [31:0] perf_vlsu_stall_count;  // Cycles VLSU waiting for memory
logic [31:0] perf_compute_cycles;    // Cycles PEs are active (decoder in EXEC)
logic [31:0] perf_skipped_ops;       // Zero-skipped PE operations
logic [31:0] perf_compacted_cycles;  // Cycles fully skipped by compaction
logic [31:0] perf_sparse_cycles;     // Cycles saved by N:M sparse compaction

always_ff @(posedge clk, negedge n_reset) begin
    if (~n_reset) begin
        perf_vec_instr_count  <= '0;
        perf_vlsu_stall_count <= '0;
        perf_compute_cycles   <= '0;
        perf_skipped_ops      <= '0;
        perf_compacted_cycles <= '0;
        perf_sparse_cycles    <= '0;
    end else begin
        // Count completed vector instructions
        if (apu_rvalid)
            perf_vec_instr_count <= perf_vec_instr_count + 1;
        // Count VLSU stall cycles (request pending, no valid response)
        if (data_req_o && !data_rvalid_i)
            perf_vlsu_stall_count <= perf_vlsu_stall_count + 1;
        // Count active PE compute cycles (in EXEC state, not doing mem ops)
        if (core_halt_o && !vlsu_en)
            perf_compute_cycles <= perf_compute_cycles + 1;
        // Count zero-skipped operations (each bit = 1 skipped PE)
        perf_skipped_ops <= perf_skipped_ops + {28'd0, zero_skip_mask[3], zero_skip_mask[2], zero_skip_mask[1], zero_skip_mask[0]};
        // Count fully-compacted cycles (all 4 PEs had zero B)
        if (all_zero_cycle && core_halt_o && !vlsu_en)
            perf_compacted_cycles <= perf_compacted_cycles + 1;
        // Count cycles where sparse compaction was active
        if (operand_select == PE_OPERAND_SPARSE && core_halt_o && !vlsu_en)
            perf_sparse_cycles <= perf_sparse_cycles + 1;
    end
end

// Updated VL is arriving two cycles too late
always_comb begin
	 reg_apu_result = '0;
    case (apu_result_select)
        APU_RESULT_SRC_VL:
            reg_apu_result = {'0, vl_next_comb};
        APU_RESULT_SRC_VS2_0:
            case (vsew)
                2'd0: // 8b
                    reg_apu_result = { {24{vs2_data[7]}}, vs2_data[7:0] };
                2'd1: // 16b
                    reg_apu_result = { {16{vs2_data[15]}}, vs2_data[15:0] };
                2'd2:// 32b
                    reg_apu_result = vs2_data[31:0];
            endcase
        APU_RESULT_SRC_DOT:
            reg_apu_result = dot_product_result;
        APU_RESULT_SRC_PERF:
            case (scalar_operand1[2:0])  // rs1 value selects which counter
                3'd0: reg_apu_result = perf_vec_instr_count;
                3'd1: reg_apu_result = perf_vlsu_stall_count;
                3'd2: reg_apu_result = perf_compute_cycles;
                3'd3: reg_apu_result = perf_skipped_ops;
                3'd4: reg_apu_result = perf_compacted_cycles;
                3'd5: reg_apu_result = perf_sparse_cycles;
            endcase
    endcase
end


endmodule
