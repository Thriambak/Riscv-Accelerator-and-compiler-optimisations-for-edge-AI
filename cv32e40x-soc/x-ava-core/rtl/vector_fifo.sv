////////////////////////////////////////////////////////////////////////////////
// vector_fifo.sv — Command FIFO for CPU-Accelerator Decoupling
//
// Sits between the CV32E40P APU interface and the AVA vector_decoder.
// Allows the CPU to issue vector instructions without stalling for the full
// execution latency of each instruction.
//
// Design:
//   - Fire-and-forget instructions (loads, stores, arithmetic) are buffered
//     in a 4-deep FIFO. The CPU gets apu_gnt immediately and apu_rvalid
//     one cycle later, so it can proceed to its next scalar work.
//   - Result-producing instructions (vsetvli, vmv.x.s, vdot, vperf) must
//     drain the FIFO first, then are processed directly by the decoder.
//     The CPU is stalled until the result is available.
//
// Author: AVA Hardware-Software Co-Design
////////////////////////////////////////////////////////////////////////////////

import accelerator_pkg::*;

module vector_fifo #(
    parameter DEPTH = 4
)(
    input  logic        clk,
    input  logic        n_reset,

    // ---- CPU-side APU interface (upstream) ----
    input  logic              cpu_apu_req_i,
    input  logic [2:0][31:0]  cpu_apu_operands_i,
    input  logic [5:0]        cpu_apu_op_i,
    input  logic [14:0]       cpu_apu_flags_i,
    output logic              cpu_apu_gnt_o,
    output logic              cpu_apu_rvalid_o,
    output logic              cpu_core_halt_o,

    // ---- Decoder-side APU interface (downstream) ----
    output logic              dec_apu_req_o,
    output logic [2:0][31:0]  dec_apu_operands_o,
    output logic [5:0]        dec_apu_op_o,
    output logic [14:0]       dec_apu_flags_o,
    input  logic              dec_apu_gnt_i,
    input  logic              dec_apu_rvalid_i,
    input  logic              dec_core_halt_i
);

    ////////////////////////////////////////////////////////////////////////////
    // INSTRUCTION CLASSIFICATION
    // Determine if an incoming instruction produces a scalar result that the
    // CPU needs (and therefore cannot be fire-and-forget).
    ////////////////////////////////////////////////////////////////////////////
    wire [6:0] instr_opcode = cpu_apu_operands_i[0][6:0];
    wire [2:0] instr_funct3 = cpu_apu_operands_i[0][14:12];
    wire [5:0] instr_funct6 = cpu_apu_operands_i[0][31:26];

    wire is_vsetvli = (instr_opcode == V_MAJOR_OP_V) && (instr_funct3 == V_OPCFG);
    wire is_vmvxs   = (instr_opcode == V_MAJOR_OP_V) && (instr_funct6 == 6'b010000);
    wire is_vdot    = (instr_opcode == V_MAJOR_OP_V) && (instr_funct6 == 6'b111100);
    wire is_vperf   = (instr_opcode == V_MAJOR_OP_V) && (instr_funct6 == 6'b111101);

    wire is_result_instr = is_vsetvli | is_vmvxs | is_vdot | is_vperf;

    ////////////////////////////////////////////////////////////////////////////
    // FIFO STORAGE
    // Each entry stores the complete instruction context needed by the decoder.
    // Entry width: 3x32 + 6 + 15 = 117 bits
    ////////////////////////////////////////////////////////////////////////////
    localparam ENTRY_W = 96 + 6 + 15;  // 117 bits

    logic [ENTRY_W-1:0] fifo_mem [DEPTH];
    logic [1:0] wr_ptr, rd_ptr;
    logic [2:0] count;  // 0..DEPTH

    wire fifo_empty = (count == 3'd0);
    wire fifo_full  = (count == DEPTH[2:0]);

    // Pack/unpack helpers
    wire [ENTRY_W-1:0] fifo_write_data = {
        cpu_apu_operands_i[2], cpu_apu_operands_i[1], cpu_apu_operands_i[0],
        cpu_apu_op_i, cpu_apu_flags_i
    };

    wire [31:0] fifo_head_op2   = fifo_mem[rd_ptr][116:85];
    wire [31:0] fifo_head_op1   = fifo_mem[rd_ptr][84:53];
    wire [31:0] fifo_head_op0   = fifo_mem[rd_ptr][52:21];
    wire [5:0]  fifo_head_op    = fifo_mem[rd_ptr][20:15];
    wire [14:0] fifo_head_flags = fifo_mem[rd_ptr][14:0];

    ////////////////////////////////////////////////////////////////////////////
    // STATE MACHINE
    ////////////////////////////////////////////////////////////////////////////
    typedef enum logic [1:0] {
        S_IDLE,         // Normal: accept fire-and-forget, feed decoder from FIFO
        S_DRAIN,        // Draining FIFO before a result-producing instruction
        S_BYPASS        // Result instruction forwarded directly to decoder
    } state_t;

    state_t state, next_state;

    // Pending rvalid: fire-and-forget instructions owe the CPU one rvalid each.
    // We issue one rvalid per cycle.
    logic [2:0] pending_rvalid;

    // Track if decoder is busy (processing an instruction from FIFO)
    logic dec_busy;

    ////////////////////////////////////////////////////////////////////////////
    // FIFO ACTIVE CONTROL
    // Set to 0 to make the FIFO a pure pass-through (for debugging).
    // Set to 1 to enable full FIFO functionality.
    ////////////////////////////////////////////////////////////////////////////
    localparam FIFO_ENABLED = 1;  // Wiring validated in pass-through; FIFO active

    generate
    if (FIFO_ENABLED == 0) begin : gen_passthrough
        //----------------------------------------------------------------------
        // PASS-THROUGH MODE: FIFO is transparent, all signals forwarded directly
        // This verifies the wiring is correct without any FIFO logic.
        //----------------------------------------------------------------------
        assign dec_apu_req_o      = cpu_apu_req_i;
        assign dec_apu_operands_o = cpu_apu_operands_i;
        assign dec_apu_op_o       = cpu_apu_op_i;
        assign dec_apu_flags_o    = cpu_apu_flags_i;
        assign cpu_apu_gnt_o      = dec_apu_gnt_i;
        assign cpu_apu_rvalid_o   = dec_apu_rvalid_i;
        assign cpu_core_halt_o    = dec_core_halt_i;

        // Suppress unused variable warnings
        // (FIFO storage is not used in pass-through mode)
        always_ff @(posedge clk) begin
            if (~n_reset) begin
                // synthesis translate_off
                // synthesis translate_on
            end
        end

    end else begin : gen_fifo
        //----------------------------------------------------------------------
        // FULL FIFO MODE: Decoupled CPU-Accelerator interface
        //----------------------------------------------------------------------

        ////////////////////////////////////////////////////////////////////////
        // DECODER BUSY TRACKING
        ////////////////////////////////////////////////////////////////////////
        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset)
                dec_busy <= 1'b0;
            else if (dec_apu_req_o && dec_apu_gnt_i)
                dec_busy <= 1'b1;
            else if (dec_apu_rvalid_i)
                dec_busy <= 1'b0;

        ////////////////////////////////////////////////////////////////////////
        // STATE MACHINE TRANSITIONS
        ////////////////////////////////////////////////////////////////////////
        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset)
                state <= S_IDLE;
            else
                state <= next_state;

        always_comb begin
            next_state = state;
            case (state)
                S_IDLE: begin
                    if (cpu_apu_req_i && is_result_instr) begin
                        if (fifo_empty && !dec_busy)
                            next_state = S_BYPASS;
                        else
                            next_state = S_DRAIN;
                    end
                end
                S_DRAIN: begin
                    if (fifo_empty && !dec_busy)
                        next_state = S_BYPASS;
                end
                S_BYPASS: begin
                    if (dec_apu_rvalid_i)
                        next_state = S_IDLE;
                end
            endcase
        end

        ////////////////////////////////////////////////////////////////////////
        // FIFO WRITE LOGIC
        ////////////////////////////////////////////////////////////////////////
        wire fifo_write_en = cpu_apu_req_i && !is_result_instr && !fifo_full
                             && (state == S_IDLE);

        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset) begin
                wr_ptr <= 2'd0;
            end else if (fifo_write_en) begin
                fifo_mem[wr_ptr] <= fifo_write_data;
                wr_ptr <= wr_ptr + 2'd1;
            end

        ////////////////////////////////////////////////////////////////////////
        // FIFO READ LOGIC
        ////////////////////////////////////////////////////////////////////////
        wire fifo_read_en = !fifo_empty && !dec_busy && (state != S_BYPASS);

        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset)
                rd_ptr <= 2'd0;
            else if (fifo_read_en && dec_apu_gnt_i)
                rd_ptr <= rd_ptr + 2'd1;

        ////////////////////////////////////////////////////////////////////////
        // FIFO COUNT
        ////////////////////////////////////////////////////////////////////////
        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset)
                count <= 3'd0;
            else begin
                case ({fifo_write_en, fifo_read_en && dec_apu_gnt_i})
                    2'b10:   count <= count + 3'd1;
                    2'b01:   count <= count - 3'd1;
                    default: count <= count;
                endcase
            end

        ////////////////////////////////////////////////////////////////////////
        // PENDING RVALID COUNTER
        ////////////////////////////////////////////////////////////////////////
        wire rvalid_issue = (pending_rvalid > 0);

        always_ff @(posedge clk, negedge n_reset)
            if (~n_reset)
                pending_rvalid <= 3'd0;
            else begin
                case ({fifo_write_en, rvalid_issue})
                    2'b10:   pending_rvalid <= pending_rvalid + 3'd1;
                    2'b01:   pending_rvalid <= pending_rvalid - 3'd1;
                    default: pending_rvalid <= pending_rvalid;
                endcase
            end

        ////////////////////////////////////////////////////////////////////////
        // CPU-SIDE OUTPUT SIGNALS
        ////////////////////////////////////////////////////////////////////////
        always_comb begin
            cpu_apu_gnt_o = 1'b0;
            case (state)
                S_IDLE: begin
                    if (cpu_apu_req_i) begin
                        if (!is_result_instr && !fifo_full)
                            cpu_apu_gnt_o = 1'b1;
                        else if (is_result_instr && fifo_empty && !dec_busy)
                            cpu_apu_gnt_o = dec_apu_gnt_i;
                    end
                end
                S_BYPASS:
                    cpu_apu_gnt_o = dec_apu_gnt_i;
                default:
                    cpu_apu_gnt_o = 1'b0;
            endcase
        end

        always_comb begin
            if (state == S_BYPASS && dec_apu_rvalid_i)
                cpu_apu_rvalid_o = 1'b1;
            else
                cpu_apu_rvalid_o = rvalid_issue;
        end

        always_comb begin
            case (state)
                S_IDLE:
                    cpu_core_halt_o = (cpu_apu_req_i && is_result_instr &&
                                       (dec_busy || !fifo_empty)) ? 1'b1 :
                                      (cpu_apu_req_i && !is_result_instr &&
                                       fifo_full) ? 1'b1 : 1'b0;
                S_DRAIN:
                    cpu_core_halt_o = 1'b1;
                S_BYPASS:
                    cpu_core_halt_o = dec_core_halt_i;
                default:
                    cpu_core_halt_o = 1'b0;
            endcase
        end

        ////////////////////////////////////////////////////////////////////////
        // DECODER-SIDE OUTPUT SIGNALS
        ////////////////////////////////////////////////////////////////////////
        always_comb begin
            dec_apu_req_o = 1'b0;
            dec_apu_operands_o = '{default: '0};
            dec_apu_op_o = '0;
            dec_apu_flags_o = '0;

            if (state == S_BYPASS || (state == S_IDLE && cpu_apu_req_i &&
                                       is_result_instr && fifo_empty && !dec_busy)) begin
                dec_apu_req_o      = cpu_apu_req_i;
                dec_apu_operands_o = cpu_apu_operands_i;
                dec_apu_op_o       = cpu_apu_op_i;
                dec_apu_flags_o    = cpu_apu_flags_i;
            end else if (fifo_read_en) begin
                dec_apu_req_o         = 1'b1;
                dec_apu_operands_o[0] = fifo_head_op0;
                dec_apu_operands_o[1] = fifo_head_op1;
                dec_apu_operands_o[2] = fifo_head_op2;
                dec_apu_op_o          = fifo_head_op;
                dec_apu_flags_o       = fifo_head_flags;
            end
        end

    end  // gen_fifo
    endgenerate

endmodule
