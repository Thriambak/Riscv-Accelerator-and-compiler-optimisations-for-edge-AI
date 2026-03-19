module cv32e40x_wrapper #(
        parameter int unsigned     MEM_W = 32
    )(
        input  logic               clk_i,
        input  logic               rst_ni,

        output logic               mem_req_o,
        output logic [31:0]        mem_addr_o,
        output logic               mem_we_o,
        output logic [MEM_W/8-1:0] mem_be_o,
        output logic [MEM_W  -1:0] mem_wdata_o,
        input  logic               mem_rvalid_i,
        input  logic               mem_err_i,
        input  logic [MEM_W  -1:0] mem_rdata_i
    );

    logic             imem_req;
    logic             imem_gnt;
    logic [31:0]      imem_addr;
    logic             imem_rvalid;
    logic [MEM_W-1:0] imem_rdata;
    logic             imem_err;

    logic               dmem_req;
    logic               dmem_gnt;
    logic [31:0]        dmem_addr;
    logic               dmem_we;
    logic [MEM_W/8-1:0] dmem_be;
    logic [MEM_W  -1:0] dmem_wdata;
    logic               dmem_rvalid;
    logic [MEM_W  -1:0] dmem_rdata;
    logic               dmem_err;

    // AVA accelerator memory port
    logic               amem_req;
    logic               amem_gnt;
    logic [31:0]        amem_addr;
    logic               amem_we;
    logic [3:0]         amem_be;
    logic [31:0]        amem_wdata;
    logic               amem_rvalid;
    logic [31:0]        amem_rdata;

    // eXtension Interface
    if_xif #(
        .X_NUM_RS    ( 2  ),
        .X_MEM_WIDTH ( 32 ),
        .X_RFR_WIDTH ( 32 ),
        .X_RFW_WIDTH ( 32 ),
        .X_MISA      ( '0 )
    ) ext_if();

    cv32e40x_core #(
        .X_EXT(1)
    ) core (
        .clk_i               ( clk_i        ),
        .rst_ni              ( rst_ni       ),
        .scan_cg_en_i        ( 1'b0         ),
        .boot_addr_i         ( 32'h00000080 ),
        .mtvec_addr_i        ( 32'h00000000 ),
        .dm_halt_addr_i      ( '0           ),
        .hart_id_i           ( '0           ),
        .dm_exception_addr_i ( '0           ),
        .nmi_addr_i          ( '0           ),
        .instr_req_o         ( imem_req     ),
        .instr_gnt_i         ( imem_gnt     ),
        .instr_rvalid_i      ( imem_rvalid  ),
        .instr_addr_o        ( imem_addr    ),
        .instr_memtype_o     (              ),
        .instr_prot_o        (              ),
        .instr_rdata_i       ( imem_rdata   ),
        .instr_err_i         ( imem_err     ),
        .data_req_o          ( dmem_req     ),
        .data_gnt_i          ( dmem_gnt     ),
        .data_rvalid_i       ( dmem_rvalid  ),
        .data_we_o           ( dmem_we      ),
        .data_be_o           ( dmem_be      ),
        .data_addr_o         ( dmem_addr    ),
        .data_memtype_o      (              ),
        .data_prot_o         (              ),
        .data_wdata_o        ( dmem_wdata   ),
        .data_rdata_i        ( dmem_rdata   ),
        .data_err_i          ( dmem_err     ),
        .data_atop_o         (              ),
        .data_exokay_i       ( 1'b0         ),
        .xif_compressed_if   ( ext_if       ),
        .xif_issue_if        ( ext_if       ),
        .xif_commit_if       ( ext_if       ),
        .xif_mem_if          ( ext_if       ),
        .xif_mem_result_if   ( ext_if       ),
        .xif_result_if       ( ext_if       ),
        .irq_i               ( '0           ),
        .fencei_flush_req_o  (              ),
        .fencei_flush_ack_i  ( 1'b0         ),
        .debug_req_i         ( 1'b0         ),
        .debug_havereset_o   (              ),
        .debug_running_o     (              ),
        .debug_halted_o      (              ),
        .fetch_enable_i      ( 1'b1         ),
        .core_sleep_o        (              )
    );

    xava ext (
        .clk_i          ( clk_i  ),
        .rst_ni         ( rst_ni ),
        .xif_compressed ( ext_if ),
        .xif_issue      ( ext_if ),
        .xif_commit     ( ext_if ),
        .xif_mem        ( ext_if ),
        .xif_mem_result ( ext_if ),
        .xif_result     ( ext_if ),
        // Direct memory port for AVA VLSU
        .amem_req_o     ( amem_req   ),
        .amem_gnt_i     ( amem_gnt   ),
        .amem_addr_o    ( amem_addr  ),
        .amem_we_o      ( amem_we    ),
        .amem_be_o      ( amem_be    ),
        .amem_wdata_o   ( amem_wdata ),
        .amem_rvalid_i  ( amem_rvalid),
        .amem_rdata_i   ( amem_rdata )
    );


    ///////////////////////////////////////////////////////////////////////////
    // 3-way Memory arbiter: imem < dmem < amem (accel has highest priority)
    // Priority: amem > dmem > imem

    always_comb begin
        mem_req_o   = imem_req | dmem_req | amem_req;
        mem_addr_o  = imem_addr;
        mem_we_o    = 1'b0;
        mem_be_o    = dmem_be;
        mem_wdata_o = dmem_wdata;
        if (amem_req) begin
            mem_we_o    = amem_we;
            mem_addr_o  = amem_addr;
            mem_be_o    = amem_be;
            mem_wdata_o = amem_wdata;
        end else if (dmem_req) begin
            mem_we_o   = dmem_we;
            mem_addr_o = dmem_addr;
        end
    end
    // Add backpressure to grants: only grant if there's space in the response tracker.
    wire can_grant = (req_count < 256);

    assign imem_gnt = can_grant & imem_req & ~dmem_req & ~amem_req;
    assign dmem_gnt = can_grant &             dmem_req & ~amem_req;
    assign amem_gnt = can_grant &                         amem_req;

    // Shift-register tracking which master owns each outstanding request.
    // req_sources encoding: 2'b00 = imem, 2'b01 = dmem, 2'b10 = amem
    logic [1:0]  req_sources  [256];
    logic [31:0] imem_req_addr[256];
    logic [8:0]  req_count;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (~rst_ni) begin
            req_count <= '0;
        end else begin

            if (mem_rvalid_i && (imem_gnt | dmem_gnt | amem_gnt)) begin
                // ---------------------------------------------------------------
                // SIMULTANEOUS dequeue (rvalid) AND enqueue (new grant).
                //
                // The original code had both a shift-loop AND an index write
                // targeting req_sources[req_count-1] in the same always_ff block.
                // Because SystemVerilog non-blocking assignments resolve last-write-
                // wins, the index write clobbered req_sources[0] whenever
                // req_count==1, permanently misclassifying future rvalids and
                // causing the VLSU to wait forever for amem_rvalid.
                //
                // The fix: treat simultaneous rvalid+grant as a single atomic
                // "shift-and-replace-tail" operation. The count stays the same
                // (one out, one in), and the two writes target DIFFERENT indices
                // (shift writes [0..30], new-grant write targets [req_count-1]
                // which after the shift is still the correct tail slot).
                // ---------------------------------------------------------------
                for (int i = 0; i < 255; i++) begin
                    req_sources  [i] <= req_sources  [i+1];
                    imem_req_addr[i] <= imem_req_addr[i+1];
                end
                // Record new grant at the tail slot (count unchanged: -1+1 = 0)
                if (amem_gnt)
                    req_sources[req_count-1] <= 2'b10;
                else if (dmem_gnt)
                    req_sources[req_count-1] <= 2'b01;
                else
                    req_sources[req_count-1] <= 2'b00;
                imem_req_addr[req_count-1] <= mem_addr_o;
                // req_count is unchanged (one consumed, one added)

            end else if (mem_rvalid_i) begin
                // ---------------------------------------------------------------
                // PURE DEQUEUE: a response came back but no new grant this cycle.
                // Shift the queue down and decrement the count.
                // ---------------------------------------------------------------
                for (int i = 0; i < 255; i++) begin
                    req_sources  [i] <= req_sources  [i+1];
                    imem_req_addr[i] <= imem_req_addr[i+1];
                end
                req_count <= req_count - 1;

            end else if (imem_gnt | dmem_gnt | amem_gnt) begin
                // ---------------------------------------------------------------
                // PURE ENQUEUE: a grant went out but no response arrived yet.
                // Append to the tail and increment the count.
                // ---------------------------------------------------------------
                if (amem_gnt)
                    req_sources[req_count] <= 2'b10;
                else if (dmem_gnt)
                    req_sources[req_count] <= 2'b01;
                else
                    req_sources[req_count] <= 2'b00;
                imem_req_addr[req_count] <= mem_addr_o;
                req_count <= req_count + 1;
            end

        end
    end

    assign imem_rvalid  = mem_rvalid_i & (req_sources[0] == 2'b00);
    assign dmem_rvalid  = mem_rvalid_i & (req_sources[0] == 2'b01);
    assign amem_rvalid  = mem_rvalid_i & (req_sources[0] == 2'b10);
    assign imem_err     = mem_err_i;
    assign dmem_err     = mem_err_i;
    assign imem_rdata   = mem_rdata_i[(imem_req_addr[0][$clog2(MEM_W/8)-1:0] & {{$clog2(MEM_W/32){1'b1}}, 2'b00})*8 +: 32];
    assign dmem_rdata   = mem_rdata_i;
    assign amem_rdata   = mem_rdata_i;

endmodule


module dummy_extension (
        input logic              clk_i,
        input logic              rst_ni,

        if_xif.coproc_compressed xif_compressed,
        if_xif.coproc_issue      xif_issue,
        if_xif.coproc_commit     xif_commit,
        if_xif.coproc_mem        xif_mem,
        if_xif.coproc_mem_result xif_mem_result,
        if_xif.coproc_result     xif_result
    );

    assign xif_compressed.compressed_ready = '0;
    assign xif_compressed.compressed_resp  = '0;
    assign xif_issue.issue_ready           = '1;
    assign xif_issue.issue_resp.accept     = '1;
    assign xif_issue.issue_resp.writeback  = '1;
    assign xif_issue.issue_resp.float      = '0;
    assign xif_issue.issue_resp.dualwrite  = '0;
    assign xif_issue.issue_resp.dualread   = '0;
    assign xif_issue.issue_resp.loadstore  = '0;
    assign xif_issue.issue_resp.exc        = '1;
    assign xif_mem.mem_valid               = '0;
    assign xif_mem.mem_req                 = '0;
    assign xif_result.result_valid         = xif_result.result_ready;
    assign xif_result.result               = '0;

endmodule

////////////////////////////////////////////////////////////////////
//AVA CORE
module xava(
    input logic              clk_i,
    input logic              rst_ni,
    if_xif.coproc_compressed xif_compressed,
    if_xif.coproc_issue      xif_issue,
    if_xif.coproc_commit     xif_commit,
    if_xif.coproc_mem        xif_mem,
    if_xif.coproc_mem_result xif_mem_result,
    if_xif.coproc_result     xif_result,
    // Direct memory port for AVA's VLSU (bypasses XIF mem)
    output logic             amem_req_o,
    input  logic             amem_gnt_i,
    output logic [31:0]      amem_addr_o,
    output logic             amem_we_o,
    output logic [3:0]       amem_be_o,
    output logic [31:0]      amem_wdata_o,
    input  logic             amem_rvalid_i,
    input  logic [31:0]      amem_rdata_i
    );

    wire  [31:0] apu_result;
    wire  [4:0]  apu_flags_o;
    wire          apu_gnt;
    wire         apu_rvalid;

    wire         apu_req;
    wire  [2:0][31:0] apu_operands_i;
    wire  [5:0]  apu_op;
    wire  [14:0] apu_flags_i;
    wire         core_halt_o;


    accelerator_top acctop0(
        .apu_result     (apu_result),
        .apu_flags_o    (apu_flag_o),
        .apu_gnt        (apu_gnt),
        .apu_rvalid     (apu_rvalid),
        .clk            (clk_i),
        .n_reset        (rst_ni),
        .apu_req        (apu_req),
        .apu_operands_i (apu_operands_i),
        .apu_op         (apu_op),
        .apu_flags_i    (apu_flags_i),

        .data_req_o     (amem_req_o),
        .data_gnt_i     (amem_gnt_i),
        .data_rvalid_i  (amem_rvalid_i),
        .data_we_o      (amem_we_o),
        .data_be_o      (amem_be_o),
        .data_addr_o    (amem_addr_o),
        .data_wdata_o   (amem_wdata_o),
        .data_rdata_i   (amem_rdata_i),

        .core_halt_o    (core_halt_o)
    );

    assign xif_compressed.compressed_ready = '0;
    assign xif_compressed.compressed_resp  = '0;

    assign apu_req = xif_issue.issue_valid;
    assign apu_operands_i [0] = xif_issue.issue_req.instr;
    assign apu_operands_i [1] = xif_issue.issue_req.rs[0];
    assign apu_operands_i [2] = xif_issue.issue_req.rs[1];
    assign xif_issue.issue_ready = apu_gnt;

    wire [6:0] issue_opcode = xif_issue.issue_req.instr[6:0];
    wire [2:0] issue_funct3 = xif_issue.issue_req.instr[14:12];
    wire [5:0] issue_funct6 = xif_issue.issue_req.instr[31:26];
    wire [4:0] issue_rd     = xif_issue.issue_req.instr[11:7];
    wire is_vector_op = (issue_opcode == 7'b0000111)
                      | (issue_opcode == 7'b0100111)
                      | (issue_opcode == 7'b1010111);

    wire is_vsetvli = (issue_opcode == 7'b1010111) && (issue_funct3 == 3'b111);
    wire is_vmvxs   = (issue_opcode == 7'b1010111) && (issue_funct3 == 3'b010)
                      && (issue_funct6 == 6'b010000);
    wire is_vperf   = (issue_opcode == 7'b1010111) && (issue_funct3 == 3'b110)
                      && (issue_funct6 == 6'b111101);
    wire needs_writeback = is_vsetvli | is_vmvxs | is_vperf;

    assign xif_issue.issue_resp.accept    = is_vector_op;
    assign xif_issue.issue_resp.writeback = needs_writeback;
    assign xif_issue.issue_resp.float     = 1'b0;
    assign xif_issue.issue_resp.dualwrite = 1'b0;
    assign xif_issue.issue_resp.dualread  = 1'b0;
    assign xif_issue.issue_resp.loadstore = 1'b0;
    assign xif_issue.issue_resp.exc       = 1'b0;

    assign xif_mem.mem_valid = 1'b0;
    assign xif_mem.mem_req   = '0;

    logic result_valid_q;
    logic [31:0] result_data_q;
    logic [3:0]  result_id_q;
    logic [3:0]  issue_id_q;
    logic        wb_pending_q;
    logic [4:0]  wb_rd_q;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            issue_id_q  <= '0;
            wb_pending_q <= 1'b0;
            wb_rd_q      <= '0;
        end else if (xif_issue.issue_valid && xif_issue.issue_ready && is_vector_op) begin
            issue_id_q   <= xif_issue.issue_req.id;
            wb_pending_q <= needs_writeback;
            wb_rd_q      <= issue_rd;
        end
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            result_valid_q <= 1'b0;
            result_data_q  <= '0;
            result_id_q    <= '0;
        end else if (result_valid_q && xif_result.result_ready) begin
            result_valid_q <= apu_rvalid;
            result_data_q  <= apu_result;
            result_id_q    <= issue_id_q;
        end else if (apu_rvalid && !result_valid_q) begin
            result_valid_q <= 1'b1;
            result_data_q  <= apu_result;
            result_id_q    <= issue_id_q;
        end
    end

    assign xif_result.result_valid   = result_valid_q;
    assign xif_result.result.id      = result_id_q;
    assign xif_result.result.data    = result_data_q;
    assign xif_result.result.rd      = wb_rd_q;
    assign xif_result.result.we      = wb_pending_q;
    assign xif_result.result.float   = '0;
    assign xif_result.result.exc     = '0;
    assign xif_result.result.exccode = '0;

endmodule