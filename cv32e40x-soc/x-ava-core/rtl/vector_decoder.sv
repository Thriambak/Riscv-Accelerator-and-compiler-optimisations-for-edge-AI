// `include "defs.sv"
import accelerator_pkg::*;

module vector_decoder (
    output logic apu_rvalid,
    output logic apu_gnt,
    output logic [31:0] scalar_operand1,
    output logic [31:0] scalar_operand2,
    output logic [10:0] immediate_operand,
    output logic [4:0] vs1_addr,
    output logic [4:0] vs2_addr,
    output logic [4:0] vd_addr,
    output logic csr_write,
    output logic preserve_vl,
    output logic set_vl_max,
    output logic [1:0] elements_to_write,
    output logic [3:0] cycle_count,
    output logic vec_reg_write,
    output vreg_wb_src_t vd_data_src,
    output vreg_addr_src_t vs3_addr_src,
    output pe_arith_op_t pe_op,
    output pe_saturate_mode_t saturate_mode,
    output pe_output_mode_t output_mode,
    output pe_operand_t operand_select,
    output logic [1:0] pe_mul_us,
    output logic [1:0] widening,
    output apu_result_src_t apu_result_select,
    output logic unsigned_immediate,
    output logic wide_vs1,
    output logic mask_enable,
    output logic sparse_meta_write,  // N:M Sparsity: asserted when vspmeta loads metadata
    input wire clk,
    input wire n_reset,
    input wire apu_req,
    input wire [31:0] apu_operands [2:0],
    input wire [5:0] apu_op,
    input wire [14:0] apu_flags_i,
    input wire [4:0] vl,
    input wire [1:0] vsew,
    input wire [1:0] vlmul,    // LMUL register grouping (0=m1, 1=m2, 2=m4, 3=m8)
    output logic vlsu_en_o,
    output logic vlsu_load_o,
    output logic vlsu_store_o,
    output logic vlsu_strided_o,
    input logic vlsu_ready_i,
    input logic vlsu_done_i,
    output logic core_halt_o,
    input logic all_zero_cycle      // From arith_stage: all PEs have zero B operand
);

enum {WAIT, EXEC, VALID, FUSED_COMPUTE} state, next_state;

logic [3:0] max_cycle_count;
logic multi_cycle_instr;
logic fix_vd_addr;
logic fused_load_compute;  // 2-phase instruction: load then compute in one dispatch

// Registers to store values from APU interface during instruction execution
logic [31:0] reg_apu_operands [2:0];
logic [5:0] reg_apu_op;
logic [14:0] reg_apu_flags_i;

// Assign variables for individual parts of instructions for readability
logic [2:0] funct3;
logic [6:0] major_opcode;
logic [5:0] funct6;
logic [4:0] source1;
logic [4:0] source2;
logic [4:0] destination;
logic [2:0] mop; // Vector Addressing Mode
assign funct3 = reg_apu_operands[0][14:12];
assign major_opcode = reg_apu_operands[0][6:0];
assign funct6 = reg_apu_operands[0][31:26];
assign source1 = reg_apu_operands[0][19:15];
assign source2 = reg_apu_operands[0][24:20];
assign destination = reg_apu_operands[0][11:7];
assign mop = funct6[2:0];

assign scalar_operand1 = reg_apu_operands[1];
assign scalar_operand2 = reg_apu_operands[2];

always_ff @(posedge clk, negedge n_reset)
    if(~n_reset)
    begin
        state <= WAIT;
        reg_apu_operands <= '{3{'0}};
        reg_apu_op <= '0;
        reg_apu_flags_i <= '0;
    end
    else
    begin
        state <= next_state;

        // In wait state, can load data from APU interface ready for the next
        // instruction. Only do this when it's valid, otherwise will screw any
        // invalid instruction checking code
        if ((state == WAIT) & apu_req)
        begin
            reg_apu_operands[0] <= apu_operands[0];
            reg_apu_operands[1] <= apu_operands[1];
            reg_apu_operands[2] <= apu_operands[2];
            reg_apu_op <= apu_op;
            reg_apu_flags_i <= apu_flags_i;
        end
    end

logic core_halt_ctrl;

// core_halt_o is a direct combinatorial assign so that it drops to 0
// in the VALID state on the same cycle that apu_rvalid rises.
// The VALID state exists precisely to separate "halt released" from
// "result captured" — do NOT re-register this signal without also
// re-implementing the VALID state handler below.
assign core_halt_o = core_halt_ctrl;

always_comb
begin
    apu_rvalid = 1'b0;
    apu_gnt = 1'b0;
    next_state = state;
    core_halt_ctrl = 1'b0;

    case (state)
        WAIT:
        begin
            apu_gnt = 1'b1;
            if (apu_req)
                next_state = EXEC;
            else
                next_state = WAIT;
        end
        EXEC:
        begin
            core_halt_ctrl = 1'b1;

            if (vlsu_load_o | vlsu_store_o) begin
                if(vlsu_done_i) begin
                    if (fused_load_compute) begin
                        // Phase 1 done: load complete, transition to compute phase
                        next_state = FUSED_COMPUTE;
                    end else begin
                        // FIX (Bug 1): was "apu_rvalid=1; next_state=WAIT" here.
                        // Asserting apu_rvalid while core_halt_ctrl=1 means the CPU
                        // is halted on the exact cycle it must capture the result.
                        // Route through VALID so halt drops before rvalid rises.
                        next_state = VALID;
                    end
                end
            end else if (cycle_count == max_cycle_count) begin
                // FIX (Bug 1): same race — removed direct apu_rvalid=1 here.
                next_state = VALID;
            end
        end

        // FIX (Bug 1): VALID state was declared in the enum but never implemented.
        // This state fires for exactly one cycle. core_halt_ctrl is at its default
        // of 0 (CPU is live), and apu_rvalid=1 is asserted cleanly. The CPU can
        // capture the result without being simultaneously halted.
        VALID:
        begin
            // core_halt_ctrl stays at default 0 — CPU is running
            apu_rvalid = 1'b1;
            next_state = WAIT;
        end

        FUSED_COMPUTE:
        begin
            // Phase 2: compute (MAC) using data loaded in phase 1
            core_halt_ctrl = 1'b1;
            if (cycle_count == max_cycle_count) begin
                // FIX (Bug 1): same fix applied here for the fused path.
                next_state = VALID;
            end
        end
    endcase
end

// VECTOR REGISTER ADDRESS GENERATION
always_ff @(posedge clk, negedge n_reset)
    if (~n_reset)
    begin
        cycle_count <= '0;
    end
    else
    begin
        // FIX (Bug 1): Added state==VALID to the reset condition so that
        // cycle_count is cleared before the next instruction enters EXEC.
        // Without this, a stale count from the previous instruction would
        // cause the new instruction to start mid-count.
        if (state == WAIT || state == VALID || ((vlsu_load_o | vlsu_store_o) && !fused_load_compute))
            cycle_count <= '0;
        else if (state == EXEC && fused_load_compute && vlsu_done_i)
            cycle_count <= '0;  // Reset for compute phase entry
        else if (state == FUSED_COMPUTE || (state == EXEC && !(vlsu_load_o | vlsu_store_o)))
            cycle_count <= cycle_count + 1'b1;
    end



// LMUL Alignment Check (RVV Spec §3.4.2)
// When LMUL > 1, the base register number must be a multiple of LMUL.
// vlmul encoding: 0=m1 (no constraint), 1=m2 (even), 2=m4 (mult of 4), 3=m8 (mult of 8)
// synthesis translate_off
always_ff @(posedge clk) begin
    if (state == EXEC && major_opcode == V_MAJOR_OP_V && funct3 != V_OPCFG) begin
        case (vlmul)
            2'd1: begin // LMUL=2: registers must be even
                if (source1[0] != 1'b0 || source2[0] != 1'b0 || destination[0] != 1'b0)
                    $warning("LMUL=2 alignment violation: vs1=%0d vs2=%0d vd=%0d", source1, source2, destination);
            end
            2'd2: begin // LMUL=4: registers must be multiple of 4
                if (source1[1:0] != 2'b00 || source2[1:0] != 2'b00 || destination[1:0] != 2'b00)
                    $warning("LMUL=4 alignment violation: vs1=%0d vs2=%0d vd=%0d", source1, source2, destination);
            end
            2'd3: begin // LMUL=8: registers must be multiple of 8
                if (source1[2:0] != 3'b000 || source2[2:0] != 3'b000 || destination[2:0] != 3'b000)
                    $warning("LMUL=8 alignment violation: vs1=%0d vs2=%0d vd=%0d", source1, source2, destination);
            end
            default: ; // LMUL=1: no alignment constraint
        endcase
    end
end
// synthesis translate_on

logic [5:0] vl_zero_indexed;

always_comb
begin
    // Subtract 1 because if VL=4/8/16/32/64 it will want another cycle otherwise
    // Number of loads dependant on SEW (For contiguous 8-bit values)
    vl_zero_indexed = {1'b0, vl} - 1'b1;
    // Elements can be handled 4 at a time so divide VL by 4, or force 0
    // With LMUL support: VL can be up to 64 (LMUL=m4 @ SEW=8), max_cycle_count up to 15
    max_cycle_count = multi_cycle_instr ? vl_zero_indexed[5:2] : 4'd0;

    case (vsew)
        2'd0: // 8b
        begin
            vs1_addr = source1 + cycle_count;
            vs2_addr = source2 + cycle_count;
            if (fix_vd_addr)
                vd_addr = destination;
            else
            begin
                if(widening[0])
                    vd_addr = destination + {cycle_count, 1'b0};
                else
                    vd_addr = destination + cycle_count;
            end
        end
        2'd1: // 16b
        begin
            vs1_addr = source1 + {cycle_count, 1'b0};
            vs2_addr = source2 + {cycle_count, 1'b0};
            if (fix_vd_addr)
                vd_addr = destination;
            else
                vd_addr = destination + {cycle_count, 1'b0};
        end
        default:
        begin
            vs1_addr = source1 + cycle_count;
            vs2_addr = source2 + cycle_count;
            if (fix_vd_addr)
                vd_addr = destination;
            else
                vd_addr = destination + cycle_count;
        end
    endcase

    if (funct3 == V_OPCFG)
        immediate_operand = reg_apu_operands[0][30:20];
    else
            immediate_operand = {'0, reg_apu_operands[0][19:15]};
end

always_comb
begin
    elements_to_write = 2'd0;

    if (multi_cycle_instr)
    begin
        if (cycle_count == max_cycle_count)
            if (operand_select == PE_OPERAND_RIPPLE)
                elements_to_write = 2'd1;
            else
                elements_to_write = vl[1:0];
        else
            elements_to_write = 2'd0;
    end
end

////////////////////////////////////////////////////////////////////////////////
// ACCELERATOR CONTROL SIGNALS

// FIX (Bug 2): Helper signal to identify operations that accumulate into vd.
// For these ops, if B==0 the result is still C (the accumulator), not 0.
// Suppressing the writeback on all_zero_cycle would silently destroy C.
// Only pure-multiply ops (where 0*anything=0 output) are safe to compact.
logic is_accumulating;

always_comb
begin
    // Assign defaults for when not executing
    csr_write = 1'b0;
    preserve_vl = 1'b0;
    set_vl_max = 1'b0;
    vec_reg_write = 1'b0;
    vd_data_src = VREG_WB_SRC_ARITH;
    vs3_addr_src = VS3_ADDR_SRC_DECODE;
    pe_op = PE_ARITH_ADD;
    operand_select = PE_OPERAND_VS1;
    saturate_mode = PE_SAT_NONE;
    output_mode = PE_OP_MODE_RESULT;
    pe_mul_us = 2'b00;
    widening = 2'b00;
    apu_result_select = APU_RESULT_SRC_VL;
    multi_cycle_instr = 1'b0;
    unsigned_immediate = 1'b0;
    wide_vs1 = 1'b0;

    vlsu_en_o = 1'b0;
    vlsu_load_o = 1'b0;
    vlsu_store_o = 1'b0;
    vlsu_strided_o = 1'b0;

    // Used to control decoder module itself
    fix_vd_addr = 1'b0;

    // Mask control: check vm bit (bit 25 of instruction)
    // In RVV spec, vm=0 means masking is ENABLED, vm=1 means unmasked
    mask_enable = 1'b0;
    fused_load_compute = 1'b0;

    // FIX (Bug 2): Default is_accumulating to 0; set per-instruction below.
    is_accumulating = 1'b0;
    sparse_meta_write = 1'b0;  // N:M Sparsity: default off

    // Control signals during instruction execution
    if (state == EXEC || state == FUSED_COMPUTE)
    begin
        if (state == FUSED_COMPUTE)
        begin
            // Phase 2 of fused instruction: decode as MAC
            pe_op = PE_ARITH_MULADD;
            operand_select = PE_OPERAND_VS1;
            vec_reg_write = 1'b1;
            multi_cycle_instr = 1'b1;
            is_accumulating = 1'b1;  // FIX (Bug 2): fused MAC accumulates into vd
        end
        else if (major_opcode == V_MAJOR_LOAD_FP)
        begin
            // 3'b111 is for 128-bit vector loads in older RVV specs.
            // 3'b000, 3'b101, 3'b110 are for 8, 16, 32-bit element vector loads.
            if(funct3 == 3'b111 || funct3 == 3'b000 || funct3 == 3'b101 || funct3 == 3'b110) begin
                vd_data_src = VREG_WB_SRC_MEMORY;
                vlsu_en_o = 1'b1;
                vlsu_load_o = 1'b1;
                if(mop == 3'b010) vlsu_strided_o = 1'b1;
            end else $error("Unimplemented LOAD_FP instruction (funct3=%b)", funct3);
        end
        else if (major_opcode == V_MAJOR_STORE_FP)
        begin
            // 3'b111 is for 128-bit vector stores in older RVV specs.
            // 3'b000, 3'b101, 3'b110 are for 8, 16, 32-bit element vector stores.
            if(funct3 == 3'b111 || funct3 == 3'b000 || funct3 == 3'b101 || funct3 == 3'b110) begin
                vs3_addr_src = VS3_ADDR_SRC_VLSU;
                fix_vd_addr = 1'b1;
                vlsu_en_o = 1'b1;
                vlsu_store_o = 1'b1;
            end else $error("Unimplemented STORE_FP instruction (funct3=%b)", funct3);
        end
        else if (major_opcode == V_MAJOR_OP_V)
        begin
            // Consider vsetvli instructions separately (different format)
            if (funct3 == V_OPCFG)
            begin
                csr_write = 1'b1;
                apu_result_select = APU_RESULT_SRC_VL;
                if (source1 == '0)
                begin
                    if (destination == '0)
                        preserve_vl = 1'b1;
                    else
                        set_vl_max = 1'b1;
                end
            end
            else
            begin
                // Look for all other OP-V instructions
                case (funct6)

                    // vadd, vredsum
                    6'b000000:
                    begin
                        pe_op = PE_ARITH_ADD;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        // vadd.vv
                        if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        // vadd.vx
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                        else if (funct3 == V_OPMVV) // vredsum
                        begin
                            operand_select = PE_OPERAND_RIPPLE;
                            fix_vd_addr = 1'b1;
                        end
                    end

                    // vsub
                    6'b000010:
                    begin
                        pe_op = PE_ARITH_SUB;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vmin
                    6'b000101:
                    begin
                        pe_op = PE_ARITH_SUB;
                        output_mode = PE_OP_MODE_PASS_MIN;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        // Supports vmin.vv and vmin.vx
                        if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vmax, vredmax
                    6'b000111:
                    begin
                        pe_op = PE_ARITH_SUB;
                        vec_reg_write = 1'b1;
                        output_mode = PE_OP_MODE_PASS_MAX;
                        multi_cycle_instr = 1'b1;
                        // vredmax
                        if (funct3 == V_OPMVV)
                        begin
                            fix_vd_addr = 1'b1;
                            operand_select = PE_OPERAND_RIPPLE;
                        end
                        // Supports vmax.vv and vmax.vx
                        else if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vand
                    6'b001001:
                    begin
                        pe_op = PE_ARITH_AND;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vor
                    6'b001010:
                    begin
                        pe_op = PE_ARITH_OR;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vxor
                    6'b001011:
                    begin
                        pe_op = PE_ARITH_XOR;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vslide1down.vx - Slide elements down by 1, insert scalar at end
                    // vd[i] = vs2[i+1] for i < VL-1, vd[VL-1] = rs1
                    // Encoding: funct6=001110, funct3=OPMVX(110) — matches RVV standard
                    6'b001110:
                    begin
                        pe_op = PE_ARITH_SLIDE1DN;
                        operand_select = PE_OPERAND_SLIDE;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // VWXUNARY0 (vmv.x.s)
                    6'b010000:
                    begin
                        apu_result_select = APU_RESULT_SRC_VS2_0;
                    end

                    // vmv.v
                    6'b010111:
                    begin
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        vd_data_src = VREG_WB_SRC_SCALAR;
                        // vmv.v.i
                        if (funct3 == V_OPIVI)
                            operand_select = PE_OPERAND_IMMEDIATE;
                        // vmv.v.x
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vsadd
                    6'b100001:
                    begin
                        pe_op = PE_ARITH_ADD;
                        saturate_mode = PE_SAT;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vsll/vmul
                    6'b100101:
                    begin
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        if (funct3 == V_OPIVV)
                        begin
                            pe_op = PE_ARITH_LSHIFT;
                            operand_select = PE_OPERAND_VS1;
                        end
                        else if (funct3 == V_OPIVX)
                        begin
                            pe_op = PE_ARITH_LSHIFT;
                            operand_select = PE_OPERAND_SCALAR;
                        end
                        else if (funct3 == V_OPIVI)
                        begin
                            pe_op = PE_ARITH_LSHIFT;
                            operand_select = PE_OPERAND_IMMEDIATE;
                        end
                        else if (funct3 == V_OPMVV)
                        begin
                            pe_op = PE_ARITH_MUL;
                            operand_select = PE_OPERAND_VS1;
                        end

                    end

                    // vsmul
                    6'b100111:
                    begin
                        pe_op = PE_ARITH_MUL;
                        saturate_mode = PE_SAT_UPPER;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vsrl
                    6'b101000:
                    begin
                        pe_op = PE_ARITH_RSHIFT_LOG;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                        else if (funct3 == V_OPIVI)
                        begin
                            unsigned_immediate = 1'b1;
                            operand_select = PE_OPERAND_IMMEDIATE;
                        end
                    end

                    // vsra
                    6'b101001:
                    begin
                        pe_op = PE_ARITH_RSHIFT_AR;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        if (funct3 == V_OPIVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPIVX)
                            operand_select = PE_OPERAND_SCALAR;
                        else if (funct3 == V_OPIVI)
                        begin
                            unsigned_immediate = 1'b1;
                            operand_select = PE_OPERAND_IMMEDIATE;
                        end
                    end

                    // vmacc - Fused multiply-accumulate: vd[i] += vs1[i] * vs2[i]
                    // Encoding: funct6=101101, funct3=OPMVV(010) or OPMVX(110)
                    6'b101101:
                    begin
                        pe_op = PE_ARITH_MULADD;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;  // FIX (Bug 2)
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vwmacc - Widening fused multiply-accumulate
                    // Encoding: funct6=101110, funct3=OPMVV(010) or OPMVX(110)
                    6'b101110:
                    begin
                        pe_op = PE_ARITH_MULADD;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        widening = 2'b01;
                        is_accumulating = 1'b1;  // FIX (Bug 2)
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vmaccoff - Offset fused multiply-accumulate
                    // Encoding: funct6=101111, funct3=OPMVX(110)
                    6'b101111:
                    begin
                        pe_op = PE_ARITH_MULADD_OFF;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        operand_select = PE_OPERAND_VS1;
                        is_accumulating = 1'b1;  // FIX (Bug 2)
                    end

                    // vmaccrelu - Fused MAC + ReLU
                    // Encoding: funct6=110010, funct3=OPMVV(010) or OPMVX(110)
                    6'b110010:
                    begin
                        pe_op = PE_ARITH_MULADD;
                        output_mode = PE_OP_MODE_RELU;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;  // FIX (Bug 2)
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vmaccclamp - Fused MAC + Clamp
                    // Encoding: funct6=110011, funct3=OPMVV(010) or OPMVX(110)
                    6'b110011:
                    begin
                        pe_op = PE_ARITH_MULADD;
                        output_mode = PE_OP_MODE_CLAMP;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;  // FIX (Bug 2)
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vlemacc - Fused load + MAC
                    // Phase 1 (EXEC): loads data via VLSU into vs2 register
                    // Phase 2 (FUSED_COMPUTE): vd[i] += loaded_vs2[i] * vs1[i]
                    // Encoding: funct6=110100, funct3=OPMVV(010) or OPMVX(110)
                    6'b110100:
                    begin
                        // During EXEC: load phase
                        vd_data_src = VREG_WB_SRC_MEMORY;
                        vlsu_en_o = 1'b1;
                        vlsu_load_o = 1'b1;
                        fused_load_compute = 1'b1;
                        multi_cycle_instr = 1'b1;
                        // is_accumulating set in FUSED_COMPUTE branch above
                    end

                    // vwredsum
                    6'b110001:
                    begin
                        pe_op = PE_ARITH_ADD;
                        operand_select = PE_OPERAND_RIPPLE;
                        vec_reg_write = 1'b1;
                        fix_vd_addr = 1'b1;
                        multi_cycle_instr = 1'b1;
                        widening = 2'b01;
                        wide_vs1 = 1'b1;
                    end

                    // vwmul
                    6'b111011:
                    begin
                        pe_op = PE_ARITH_MUL;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        widening = 2'b01;
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vpdot - Packed INT8 SIMD dot product with accumulation
                    // vd[i] += sum of 4 pairwise INT8 products from vs2[i] and vs1[i] byte lanes
                    // Encoding: funct6=110000, funct3=OPMVV(010) or OPMVX(110)
                    6'b110000:
                    begin
                        pe_op = PE_ARITH_PACKED_DOT;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;  // FIX (Bug 2): vpdot is C + dot(A,B)
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vpdot4 - Packed INT4 SIMD dot product with accumulation
                    // vd[i] += sum of 8 pairwise INT4 products from vs2[i] and vs1[i] nibbles
                    // Encoding: funct6=110101, funct3=OPMVV(010) or OPMVX(110)
                    6'b110101:
                    begin
                        pe_op = PE_ARITH_PACKED_DOT4;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;
                        if (funct3 == V_OPMVV)
                            operand_select = PE_OPERAND_VS1;
                        else if (funct3 == V_OPMVX)
                            operand_select = PE_OPERAND_SCALAR;
                    end

                    // vdot - Custom dot product instruction
                    // Encoding: funct6=111100, funct3=010 (OPMVV)
                    6'b111100:
                    begin
                        pe_op = PE_ARITH_DOT;
                        operand_select = PE_OPERAND_VS1;
                        multi_cycle_instr = 1'b1;
                        apu_result_select = APU_RESULT_SRC_DOT;
                        vec_reg_write = 1'b0;
                    end

                    // vperf - Read AVA performance counter
                    6'b111101:
                    begin
                        apu_result_select = APU_RESULT_SRC_PERF;
                    end

                    // vsigmoid - Apply Sigmoid activation: vd[i] = sigmoid(vs2[i])
                    // Encoding: funct6=100010, funct3=000 (OPIVV)
                    6'b100010:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_SIGMOID;
                        operand_select = PE_OPERAND_ZERO;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vtanh - Apply Tanh activation: vd[i] = tanh(vs2[i])
                    // Encoding: funct6=100011, funct3=000 (OPIVV)
                    6'b100011:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_TANH;
                        operand_select = PE_OPERAND_ZERO;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vabs - Absolute value: vd[i] = |vs2[i]|
                    // Encoding: funct6=111000, funct3=000 (OPIVV)
                    6'b111000:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_ABS;
                        operand_select = PE_OPERAND_ZERO;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vlrelu - Leaky ReLU
                    // Encoding: funct6=111001, funct3=100 (OPIVX)
                    6'b111001:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_LEAKY_RELU;
                        operand_select = PE_OPERAND_ZERO;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vclamp - ReLU6/Clamp: vd[i] = min(max(0, vs2[i]), rs1)
                    // Encoding: funct6=111010, funct3=100 (OPIVX)
                    6'b111010:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_CLAMP;
                        operand_select = PE_OPERAND_ZERO;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vrelu - Apply ReLU activation: vd[i] = max(0, vs2[i])
                    // Encoding: funct6=111110, funct3=000 (OPIVV)
                    6'b111110:
                    begin
                        pe_op = PE_ARITH_ADD;
                        output_mode = PE_OP_MODE_RELU;
                        operand_select = PE_OPERAND_IMMEDIATE;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    // vrequant - TFLite requantization
                    // Encoding: funct6=111111, funct3=110 (OPMVX)
                    6'b111111:
                    begin
                        pe_op = PE_ARITH_MUL;
                        output_mode = PE_OP_MODE_REQUANT;
                        operand_select = PE_OPERAND_SCALAR;
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                    end

                    ////////////////////////////////////////////////////////////
                    // N:M STRUCTURED SPARSITY INSTRUCTIONS
                    ////////////////////////////////////////////////////////////

                    // vspmeta - Load sparse metadata from scalar register
                    // Software executes: vspmeta x0, rs1, x0
                    // This loads the 4-bit-per-group metadata into the
                    // sparse_metadata_reg in accelerator_top.
                    // Encoding: funct6=100100, funct3=OPMVX(110)
                    6'b100100:
                    begin
                        sparse_meta_write = 1'b1;
                        // No PE operation — just loads the metadata register
                        // Completes in 1 cycle (no multi_cycle)
                    end

                    // vspdot.vv - Sparse packed dot product
                    // Uses the compaction network to route only non-zero
                    // vs1 elements to PEs. vd accumulates the partial sums.
                    // Encoding: funct6=100110, funct3=OPMVV(010)
                    6'b100110:
                    begin
                        pe_op = PE_ARITH_PACKED_DOT;
                        operand_select = PE_OPERAND_SPARSE;  // Routes through compaction MUX
                        vec_reg_write = 1'b1;
                        multi_cycle_instr = 1'b1;
                        is_accumulating = 1'b1;
                    end

                    default:
                        $error("Unsupported vector instruction");

                endcase
            end
        end
        else
            $error("Unrecognised major opcode: %h", major_opcode);
    end

    ////////////////////////////////////////////////////////////////////////////
    // SPARSITY COMPACTION: suppress writes on all-zero cycles
    //
    // FIX (Bug 2): The original code suppressed vec_reg_write whenever
    // all_zero_cycle was true, for ALL instruction types. This is incorrect
    // for accumulating operations (vmacc, vpdot, vmaccoff, etc.) because
    // when B==0 the PE computes C + 0 = C, and C (the accumulator) must still
    // be written back to vd. Suppressing the write silently discards C.
    //
    // The safe rule is: only compact when the output is provably zero, which
    // is only true for pure-multiply operations where result = A*B and B==0.
    // For any op that reads-then-writes vd (accumulates), compaction is wrong.
    ////////////////////////////////////////////////////////////////////////////
    if (all_zero_cycle && vec_reg_write &&
        (operand_select != PE_OPERAND_RIPPLE) &&
        !is_accumulating)   // FIX (Bug 2): guard added
        vec_reg_write = 1'b0;
end

endmodule