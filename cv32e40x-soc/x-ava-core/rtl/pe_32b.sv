// NOTE (Matthew Johns) - there is similarity between parts of this code and the
// proc_unit.sv module made by me in my third-year project. This is because the
// functionality is similar and therefore I'm using what I learnt previously.

// `include "defs.sv"
import accelerator_pkg::*;

module pe_32b (
    output logic [31:0] out,
    // output logic flag_saturated // TODO: add this flag for CSRs
    input wire clk,
    input wire [31:0] a,
    input wire [31:0] b,
    input wire [31:0] c,
    input pe_arith_op_t op,
    input wire [1:0] vsew,
    input wire [1:0] widening, // 2'd1 for widening, 2'd2 for quad widening
    input wire [1:0] mul_us, // Specifies each multiplier input as signed or unsigned
    input pe_saturate_mode_t saturate_mode,
    input pe_output_mode_t output_mode,
    input wire wide_b,
    input wire [31:0] act_param  // Activation/requant parameter (full scalar for packed configs)
);

// Usually input "a" is vs2, input "b" is vs1 and "c" is vs3/vd. (This is for
// most standard arithmetic operations)

logic signed [32:0] mult_a;
logic signed [32:0] mult_b;
logic signed [65:0] mult_wide;
logic signed [32:0] selected_mult_out;

logic [32:0] add_out;
logic [32:0] add_a;
logic [32:0] add_b;
logic [32:0] addend;

// Intermediate before saturation/ReLU
// Has to be 33 bits to give at least one bit for saturation
logic [32:0] arith_result;

logic macc;
logic subtract;

// Instantiate sign extension module for inputs a, b and c
wire [31:0] sign_ext_a;
wire [31:0] sign_ext_b;
wire [31:0] sign_ext_c;
vw_sign_ext se0 (
    .sign_ext_a(sign_ext_a),
    .sign_ext_b(sign_ext_b),
    .sign_ext_c(sign_ext_c),
    .a(a),
    .b(b),
    .c(c),
    .widening(widening),
    .vsew(vsew),
    .wide_b(wide_b)
);

////////////////////////////////////////////////////////////////////////////////
// ARITHMETIC STAGE
////////////////////////////////////////////////////////////////////////////////
always_comb
begin
    subtract = 1'b0;
    macc = 1'b0;
    arith_result = '0;

    case (op)
        // 4'h0: // Add
        PE_ARITH_ADD:
            arith_result = add_out;
        // 4'h1: // Sub
        PE_ARITH_SUB:
        begin
            arith_result = add_out;
            subtract = 1'b1;
        end
        // 4'h2: // Left-shift
        PE_ARITH_LSHIFT:
            arith_result = {1'b0, (a << b)};
        // 4'h3: // Multiply
        PE_ARITH_MUL:
            arith_result = selected_mult_out;
        // 4'h4: // Multiply-add
        PE_ARITH_MULADD:
        begin
            macc = 1'b1;
            arith_result = add_out;
        end
        // 4'h5: // XOR
        PE_ARITH_XOR:
            arith_result = {1'b0, (a ^ b)};
        // 4'h6: // Right-shift
        PE_ARITH_RSHIFT_LOG:
            arith_result = {1'b0, (a >> b)};
        // 4'h7: // Right-shift (arithmetic)
        PE_ARITH_RSHIFT_AR:
            arith_result = {1'b0, (a >>> b)};
        // 4'h8: // OR
        PE_ARITH_OR:
            arith_result = {1'b0, (a | b)};
        // 4'h9: // AND
        PE_ARITH_AND:
            arith_result = {1'b0, (a & b)};
        PE_ARITH_DOT:
            arith_result = selected_mult_out;  // Same as MUL; reduction is external
        PE_ARITH_MULADD_OFF:
        begin
            macc = 1'b1;
            arith_result = add_out;
        end
        PE_ARITH_PACKED_DOT:
        begin
            // Packed INT8 dot product with accumulation:
            // result = c + a[7:0]*b[7:0] + a[15:8]*b[15:8] + a[23:16]*b[23:16] + a[31:24]*b[31:24]
            // Each byte lane is sign-extended to 17 bits, multiplied, then summed
            macc = 1'b1;
            arith_result = add_out;
        end
        PE_ARITH_SLIDE1DN:
            // Slide down by 1 byte: shift A right by 8 bits, insert B[7:0] at top
            // vd = {carry_in_byte, a[31:8]}
            arith_result = {1'b0, b[7:0], a[31:8]};
    endcase
end

always_comb
begin
    // Multiplier needs to be able to be toggled between signed/unsigned for the
    // individual operands (depending on instructions). Can do this by adding an
    // extra bit to the inputs and sign-extending them for signed operations.
    // Then take the correct number of bits from the bottom.
    if (op == PE_ARITH_MULADD_OFF) begin
        // Offset MAC: add zero-point offsets before multiply
        mult_a = {1'b0, sign_ext_a + {{24{act_param[7]}}, act_param[7:0]}};
        mult_b = {1'b0, sign_ext_b + {{24{act_param[15]}}, act_param[15:8]}};
        mult_wide = mult_a * mult_b;
    end else if (op == PE_ARITH_PACKED_DOT) begin
        // Packed INT8 SIMD dot product: 4 pairwise signed INT8 multiplies, summed
        // Each product is 16-bit signed; sum of 4 fits in 18 bits; stored in lower 32 of mult_wide
        mult_wide = 66'(  ($signed(a[ 7: 0]) * $signed(b[ 7: 0]))
                        + ($signed(a[15: 8]) * $signed(b[15: 8]))
                        + ($signed(a[23:16]) * $signed(b[23:16]))
                        + ($signed(a[31:24]) * $signed(b[31:24])) );
        mult_a = '0;
        mult_b = '0;
    end else begin
        if (mul_us[1])
            mult_a = {1'b0, a};
        else
            mult_a = {sign_ext_a[31], sign_ext_a};
        if (mul_us[0])
            mult_b = {1'b0, b};
        else
            mult_b = {sign_ext_b[31], sign_ext_b};
        mult_wide = mult_a * mult_b;
    end

    // Select adder inputs
    if (macc)
    begin
        add_a = {1'b0, mult_wide[31:0]};
        add_b = {1'b0, c};
    end
    else
    begin
        // Need to sign extend for saturated ops as another bit is gained to be
        // used for saturation.
        // This means instructions are fixed as signed. Would have to split up
        // if wanted to toggle signed/unsigned.
        // For some operations (such as regular addition) sign extension isn't
        // needed. But it doesn't do any harm and simplifies the logic.
        add_a = {sign_ext_a[31], sign_ext_a};
        add_b = {sign_ext_b[31], sign_ext_b};
    end

    if (subtract)
        addend = ~add_b + 1'b1;
    else
        addend = add_b;
    add_out = add_a + addend;

end

// Select multiplier output. V spec requires fractional saturating multiplies to
// take the upper bits for saturation instead of lower bits. Should be able to
// toggle this as we might need to saturate it and keep lower bits later on
always_comb
begin
    if (saturate_mode == PE_SAT_UPPER)
        case (vsew)
            2'd0: // 8b
                selected_mult_out = {{24{1'b0}}, mult_wide[8:0]};
            2'd1: // 16b
                selected_mult_out = {{16{1'b0}}, mult_wide[16:0]};
            2'd2: // 32b
                selected_mult_out = mult_wide[32:0];
            default:
                selected_mult_out = mult_wide[32:0];
        endcase
    else
        selected_mult_out = mult_wide[32:0];
end

////////////////////////////////////////////////////////////////////////////////
// SATURATE STAGE
////////////////////////////////////////////////////////////////////////////////
logic [31:0] sat_result;
// Instantiate the saturation blocks. One for each element width. Output is
// selected from one of them at a time.
wire [7:0] sat8_result;
sat_unit #(
    .W_IN(33),
    .W_OUT(8)
) sat8
(
    .a_in(arith_result),
    .a_out(sat8_result)
);
wire [15:0] sat16_result;
sat_unit #(
    .W_IN(33),
    .W_OUT(16)
) sat16
(
    .a_in(arith_result),
    .a_out(sat16_result)
);
wire [31:0] sat32_result;
sat_unit #(
    .W_IN(33),
    .W_OUT(32)
) sat32
(
    .a_in(arith_result),
    .a_out(sat32_result)
);

always_comb
begin
    sat_result = arith_result[31:0];
    // For widening, need to saturate to next larger element size
    if (widening[0])
        case (vsew)
            2'd0: // 8b -> 16b
                sat_result = {'0, sat16_result};
            2'd1: // 16b -> 32b
                sat_result = sat32_result;
        endcase
    // Quad widening should always use 32b
    else if (widening[1])
        sat_result = sat32_result;
    // For non-widening, use vsew
    else
        case (vsew)
            2'd0: // 8b
                sat_result = {'0, sat8_result};
            2'd1: // 16b
                sat_result = {'0, sat16_result};
            2'd2: // 32b
                sat_result = sat32_result;
        endcase
end

////////////////////////////////////////////////////////////////////////////////
// OUTPUT MODE SELECT
////////////////////////////////////////////////////////////////////////////////

// 2-stage pipeline register: captures arithmetic results for synthesis retiming.
// In a real implementation, synthesis tools can use this register to split the
// critical path between multiply and output stages for higher Fmax.
// The functional output uses the combinational path for correct timing with
// the decoder's write-enable logic.

logic [32:0] arith_result_pipe;
logic [31:0] sat_result_pipe;

always_ff @(posedge clk) begin
    arith_result_pipe <= arith_result;
    sat_result_pipe   <= sat_result;
end

// ReLU helper: clamp negative values to zero
// Each PE handles one element sign-extended to 32 bits, so bit 31 is always
// the sign bit regardless of vsew (the sign extension in vw_sign_ext handles this)
logic [31:0] relu_result;
always_comb begin
    relu_result = arith_result[31] ? 32'd0 : arith_result[31:0];
end

// Requantization helper: pre-computed to avoid latch inference in output mode case
logic signed [65:0] requant_shifted;
logic [31:0] requant_result;
always_comb begin
    requant_shifted = $signed(mult_wide) >>> act_param[20:16];
    if (requant_shifted > 66'sd127)
        requant_result = 32'd127;
    else if (requant_shifted < -66'sd128)
        requant_result = -32'sd128;
    else
        requant_result = requant_shifted[31:0];
end

always_comb
begin
    out = arith_result[31:0];
    case (output_mode)
        PE_OP_MODE_RESULT:
            if (saturate_mode == PE_SAT_NONE)
                out = arith_result[31:0];
            else
                out = sat_result;
        PE_OP_MODE_PASS_MAX:
            if (arith_result[32])
                out = b;
            else
                out = a;
        PE_OP_MODE_PASS_MIN:
            if (arith_result[32])
                out = a;
            else
                out = b;
        PE_OP_MODE_RELU:
            out = relu_result;
        PE_OP_MODE_CLAMP:
            // ReLU6 / Clamp: min(max(0, x), upper_bound)
            if (arith_result[31])
                out = 32'd0;
            else if (arith_result[31:0] > {24'd0, act_param})
                out = {24'd0, act_param};
            else
                out = arith_result[31:0];
        PE_OP_MODE_LEAKY_RELU:
            // Leaky ReLU: x >= 0 ? x : x >>> shift  (arithmetic right-shift preserves sign)
            if (arith_result[31])
                out = $signed(arith_result[31:0]) >>> act_param[4:0];
            else
                out = arith_result[31:0];
        PE_OP_MODE_ABS:
            // Absolute value: |x|
            if (arith_result[31])
                out = -arith_result[31:0];
            else
                out = arith_result[31:0];
        PE_OP_MODE_REQUANT:
            out = requant_result;
    endcase
end

endmodule
