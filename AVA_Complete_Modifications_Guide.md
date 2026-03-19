# AVA Project: Complete Modifications Guide

This document explains **every single change** that reduced cycles from 854M to 83M, what makes this project unique compared to the original AVA accelerator, and how each piece of code connects to the overall workflow. Every code example is taken directly from the project source files.

---

## Overview: What Did You Add vs. The Original AVA?

The original AVA accelerator (by Matthew Johns' dissertation) provided a basic RISC-V vector coprocessor with:
- Standard widening MAC (`vwmacc.vv`): widens INT8 → INT32, but processes only **1 element per PE per cycle**
- Basic vector load/store via VLSU
- A vector register file (32 × 128-bit)
- A command FIFO for CPU decoupling

### What YOU added (the unique contributions):

| # | Modification | Where (File) | Type | Impact |
|---|---|---|---|---|
| 1 | **Packed Dot Product (`vpdot.vv`)** | `pe_32b.sv` | RTL Hardware | 4× MAC throughput per PE |
| 2 | **Hardware Zero-Skipping** | `arith_stage.sv` | RTL Hardware | Eliminates cycles on sparse data |
| 3 | **Hardware ReLU** | `pe_32b.sv` | RTL Hardware | Eliminates post-processing instructions |
| 4 | **Hardware Requantization** | `pe_32b.sv` | RTL Hardware | Eliminates scalar multiply-shift loops |
| 5 | **Hardware Performance Counters (`vperf`)** | `vector_ops.h` + RTL | RTL + Software | Enables profiling from C++ |
| 6 | **Precomputed Filter Sums** | `conv.h`, `depthwise_conv.h` | Software | Eliminates redundant inner-loop additions |
| 7 | **Hoisted `vsetvli`** | `conv.h`, `depthwise_conv.h` | Software | Removes config instruction from hot loop |
| 8 | **Custom Inline Assembly Library** | `vector_ops.h` | Software | Bridges C++ to custom hardware |
| 9 | **Vectorized Requantization** | `conv.h` | Software | Processes 4 channels at once, not 1 |
| 10 | **Kernel Profiling Framework** | `kernel_profiling.h` | Software | Per-layer cycle measurement |

---

## Modification 1: Packed Dot Product (`vpdot.vv`)

**File:** `cv32e40x-soc/x-ava-core/rtl/pe_32b.sv` (lines 114–146)

### What the original had:
The original AVA used `vwmacc.vv` (Widening Multiply-Accumulate). It takes one INT8 element, widens it to INT32, multiplies, and accumulates. That's **1 MAC per PE per cycle**, or 4 MACs total across the 4 PEs.

### What you added:
A new packed dot product that chops each 32-bit PE lane into **four separate 8-bit multipliers**, computing 4 MACs per PE per cycle — **16 MACs total**:

```systemverilog
// From pe_32b.sv, lines 140-146
PE_ARITH_PACKED_DOT:
begin
    // Packed INT8 dot product with accumulation:
    // result = c + a[7:0]*b[7:0] + a[15:8]*b[15:8]
    //            + a[23:16]*b[23:16] + a[31:24]*b[31:24]
    macc = 1'b1;
    arith_result = add_out;
end

// The actual multiplication logic (lines 140-146):
end else if (op == PE_ARITH_PACKED_DOT) begin
    mult_wide = 66'(  ($signed(a[ 7: 0]) * $signed(b[ 7: 0]))
                    + ($signed(a[15: 8]) * $signed(b[15: 8]))
                    + ($signed(a[23:16]) * $signed(b[23:16]))
                    + ($signed(a[31:24]) * $signed(b[31:24])) );
end
```

### How it connects to the workflow:
The C++ kernel in `conv.h` calls `AVA_VPDOT_VV(V8, V0, V4)`. This macro (from `vector_ops.h`) emits a `.word` instruction with `funct6 = 48` (FUNCT6_VPDOT). The CPU sends this over APU → the decoder routes it to the PEs → each PE runs the packed dot logic above.

```c
// From vector_ops.h, line 99
#define AVA_VPDOT_VV(vd, vs1, vs2) \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VPDOT, vs2, vs1, vd)))
```

**Cycle impact:** Instead of needing 4 cycles to process 16 INT8 multiplications, `vpdot` does it in 1 cycle. This is the single largest contributor to the speedup.

---

## Modification 2: Hardware Zero-Skipping

**File:** `cv32e40x-soc/x-ava-core/rtl/arith_stage.sv` (lines 241–270)

### What the original had:
Nothing. Every operand was multiplied regardless of value.

### What you added:
Physical logic gates that check if either operand entering a PE is zero. If so, the multiplication is flagged as "skipped":

```systemverilog
// From arith_stage.sv, lines 246-262
logic is_mul_op;
assign is_mul_op = (op == PE_ARITH_MUL) || (op == PE_ARITH_MULADD)
                 || (op == PE_ARITH_DOT) || (op == PE_ARITH_MULADD_OFF)
                 || (op == PE_ARITH_PACKED_DOT);

// Check BOTH A (activation) and B (weight) operands
assign zero_skip_mask = {
    is_mul_op & ((pe3_b_data == '0) | (vs2_data[127:96] == '0)),
    is_mul_op & ((pe2_b_data == '0) | (vs2_data[95:64]  == '0)),
    is_mul_op & ((pe1_b_data == '0) | (vs2_data[63:32]  == '0)),
    is_mul_op & ((pe0_b_data == '0) | (vs2_data[31:0]   == '0))
};

// If ALL 4 PEs see zero, skip the entire cycle
assign all_zero_cycle = is_mul_op & (zero_skip_mask == 4'b1111);

// Force outputs to zero for skipped PEs
assign pe0_final = zero_skip_mask[0] ? 32'd0 : pe0_out;
assign pe1_final = zero_skip_mask[1] ? 32'd0 : pe1_out;
assign pe2_final = zero_skip_mask[2] ? 32'd0 : pe2_out;
assign pe3_final = zero_skip_mask[3] ? 32'd0 : pe3_out;
```

### How it connects:
Neural networks produce many zeros after ReLU activation (roughly 30-50% of activations are zero). Zero-skipping means those cycles are essentially free — the multiplier output is forced to 0 without actually computing.

**Cycle impact:** Saves cycles proportional to model sparsity. The `vperf` counter (`perf_skipped_ops`) tracks exactly how many operations were skipped.

---

## Modification 3: Hardware ReLU

**File:** `cv32e40x-soc/x-ava-core/rtl/pe_32b.sv` (lines 285–291, 325–326)

### What the original had:
ReLU was done in software — the CPU ran `if (x < 0) x = 0;` for every single output element after the convolution loop.

### What you added:
A single combinational line in the PE:

```systemverilog
// From pe_32b.sv, lines 285-291
logic [31:0] relu_result;
always_comb begin
    relu_result = arith_result[31] ? 32'd0 : arith_result[31:0];
end

// Selected via output_mode (line 325-326):
PE_OP_MODE_RELU:
    out = relu_result;
```

### How it connects:
The `fused MAC + ReLU` instruction (`vmaccrelu.vv`, funct6=50) tells the decoder to set `output_mode = PE_OP_MODE_RELU`. The PE computes the MAC and applies ReLU in the same pipeline stage — no extra instruction needed.

---

## Modification 4: Hardware Requantization

**File:** `cv32e40x-soc/x-ava-core/rtl/pe_32b.sv` (lines 293–304, 347–348)

### What the original had:
Requantization was done entirely in software using `MultiplyByQuantizedMultiplier()` — a complex C++ function involving 64-bit fixed-point math, rounding, and clamping.

### What you added:
A hardware path that multiplies by a scale factor, arithmetic-shifts right, and saturates to INT8:

```systemverilog
// From pe_32b.sv, lines 293-304
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

// Selected via (line 347-348):
PE_OP_MODE_REQUANT:
    out = requant_result;
```

### How it connects:
In `conv.h` (lines 237-241), after computing the dot product accumulator, we use `AVA_VSMUL_VV` + `AVA_VSRA_VV` to do vectorized requantization on 4 channels simultaneously instead of calling the slow scalar `MultiplyByQuantizedMultiplier()` one channel at a time.

---

## Modification 5: Hardware Performance Counters (`vperf`)

**File:** `vector_ops.h` (lines 170–217)

### What the original had:
No way to measure what's happening inside the accelerator.

### What you added:
A custom `vperf` instruction that reads internal hardware counters:

```c
// From vector_ops.h, lines 213-217
#define AVA_VPERF_VEC_INSNS(result_var)       AVA_VPERF_READ(result_var, 0)
#define AVA_VPERF_VLSU_STALLS(result_var)     AVA_VPERF_READ(result_var, 1)
#define AVA_VPERF_COMPUTE_CYCLES(result_var)  AVA_VPERF_READ(result_var, 2)
#define AVA_VPERF_SKIPPED_OPS(result_var)     AVA_VPERF_READ(result_var, 3)
#define AVA_VPERF_COMPACTED_CYCLES(result_var) AVA_VPERF_READ(result_var, 4)
```

This lets you measure, from C++, exactly how many vector instructions ran, how many VLSU stalls occurred, and how many zero-skip events happened — giving you hard data for the performance report.

---

## Modification 6: Precomputed Filter Sums

**File:** `conv.h` (lines 73–89)

### What the original had:
Filter sums were computed inside the innermost loop (line 201-203 in the STOCK_AVA path):
```c
// STOCK_AVA path — computed inside inner loop every time!
for (int i = 0; i < remaining; ++i) {
    filter_sum += wt_ptr[i];
}
```

### What you added:
Computed once before any loops begin:

```c
// From conv.h, lines 73-89 — MODIFIED_AVA path
const int fh_fw = filter_height * filter_width;
int32_t* filter_sum_table =
    (int32_t*)__builtin_alloca(output_depth * fh_fw * sizeof(int32_t));
for (int ch = 0; ch < output_depth; ++ch) {
    for (int fy = 0; fy < filter_height; ++fy) {
        for (int fx = 0; fx < filter_width; ++fx) {
            const int8_t* wt = &filter_data[Offset(filter_shape, ch, fy, fx, 0)];
            int32_t s = 0;
            for (int d = 0; d < input_depth; ++d) s += wt[d];
            filter_sum_table[ch * fh_fw + fy * filter_width + fx] = s;
        }
    }
}
```

Then inside the inner loop, it's a single table lookup (line 152-155):
```c
acc += vpdot_sum +
       (input_offset *
        filter_sum_table[out_channel * fh_fw +
                         filter_y * filter_width + filter_x]);
```

**Cycle impact:** Eliminates `O(input_depth)` additions from the innermost loop, saving millions of scalar add instructions across all 14 conv layers.

---

## Modification 7: Hoisted `vsetvli`

**File:** `conv.h` (line 130)

### What the original had (STOCK_AVA path):
```c
// Called INSIDE the while loop (line 182):
while (rem >= 4) {
    uint32_t vl;
    AVA_VSETVLI(vl, rem, 0);  // <-- extra instruction every iteration!
    AVA_VLE8_V(V0, in_v);
    ...
}
```

### What you changed (MODIFIED_AVA path):
```c
// Called ONCE before the loop (line 130):
AVA_VSETVLI_XX(10);         // configure once: e32, m1
AVA_VMV_VI_ZERO(V8);        // clear accumulator once
int b_rem = blocks;
while (b_rem > 0) {         // no vsetvli inside!
    AVA_VLE32_V(V0, in_v);
    AVA_VLE32_V(V4, wt_v);
    AVA_VPDOT_VV(V8, V0, V4);
    ...
}
```

**Cycle impact:** Removes 1 instruction per inner loop iteration. Across millions of iterations, this saves significant cycles.

---

## Modification 8: The Custom Instruction Library (`vector_ops.h`)

**File:** `vector_ops.h` (385 lines)

### What the original had:
No structured way to emit custom instructions from C++.

### What you built:
A complete macro library that:
1. Defines **instruction encoding helpers** (lines 31-43) that construct 32-bit OP-V machine words using bit manipulation:
```c
#define _AVA_OPMVV(funct6, vs2, vs1, vd) \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((vs1) << 15) | \
   (2 << 12) | ((vd) << 7) | 0x57)
```

2. Defines **every custom instruction** as a C macro wrapping `asm volatile(".word ...")`:
```c
#define AVA_VPDOT_VV(vd, vs1, vs2) \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VPDOT, vs2, vs1, vd)))
```

3. Includes standard RVV instructions (`vadd`, `vsub`, `vsmul`, `vsra`, `vle32`, `vse32`) — all encoded as raw `.word` because the GCC `-march=rv32imc` flag doesn't recognize vector mnemonics.

This library is the **bridge** between your C++ software and the RTL hardware.

---

## Modification 9: Vectorized Requantization

**File:** `conv.h` (lines 224–259)

### What the original had:
Scalar per-element requantization:
```c
c_acc = MultiplyByQuantizedMultiplier(
    c_acc, output_multiplier[out_ch], output_shift[out_ch]);
```
This function internally does 64-bit fixed-point math — extremely slow on a 32-bit CPU.

### What you added:
Process 4 output channels simultaneously using vector instructions:
```c
// From conv.h, lines 224-259 — MODIFIED_AVA path
if (count == 4) {
    AVA_VSETVLI_XX(10);                          // e32, m1
    AVA_VLE32_V(V8, acc_buffer);                  // load 4 accumulators
    if (bias_data) {
        AVA_VLE32_V(V4, &bias_data[start_ch]);    // load 4 biases
        AVA_VADD_VV(V8, V8, V4);                  // add biases
    }
    AVA_VLE32_V(V4, &output_multiplier[start_ch]);// load 4 multipliers
    AVA_VSMUL_VV(V8, V8, V4);                    // saturating frac multiply
    AVA_VLE32_V(V4, &neg_shifts[start_ch]);       // load 4 shift amounts
    AVA_VSRA_VV(V8, V8, V4);                     // arithmetic right shift
    // ... add offset, store result
}
```

**Cycle impact:** Instead of 4 sequential calls to `MultiplyByQuantizedMultiplier()` (each involving multiple scalar instructions), we execute 4 vector instructions that process all 4 channels at once.

---

## Modification 10: Dot Product Reduction Tree

**File:** `cv32e40x-soc/x-ava-core/rtl/arith_stage.sv` (lines 127–160)

### What the original had:
A ripple-based reduction (PE0 → PE1 → PE2 → PE3) that took multiple cycles.

### What you added:
A parallel adder tree that reduces all 4 PE outputs in **one cycle**:

```systemverilog
// From arith_stage.sv, lines 138-143
// Stage 1: Pair-wise addition
always_comb begin
    dot_sum_01  = pe0_out + pe1_out;   // PE0 + PE1
    dot_sum_23  = pe2_out + pe3_out;   // PE2 + PE3
    dot_sum_all = dot_sum_01 + dot_sum_23; // Final sum
end

// Stage 2: Multi-cycle accumulator
always_ff @(posedge clk, negedge n_reset) begin
    if (~n_reset)
        dot_accumulator <= '0;
    else if (op == PE_ARITH_DOT) begin
        if (cycle_count == 2'd0)
            dot_accumulator <= dot_sum_all;
        else
            dot_accumulator <= dot_accumulator + dot_sum_all;
    end
end
```

---

## How It All Connects: The End-to-End Flow

1. **Software** (`conv.h`): C++ kernel precomputes filter sums, hoists `vsetvli`, enters the inner loop.
2. **Software** (`vector_ops.h`): `AVA_VPDOT_VV(V8, V0, V4)` macro emits a `.word 0x...` instruction into the binary.
3. **CPU** fetches this 32-bit word from SRAM and sends it over the APU to AVA.
4. **FIFO** (`vector_fifo.sv`): Buffers the instruction, grants the CPU immediately.
5. **Decoder** (`vector_decoder.sv`): Sees `funct6 = 48` (PACKED_DOT), routes to PEs with `PE_ARITH_PACKED_DOT`.
6. **Register File** (`vector_registers.sv`): Outputs vs1 (weights) and vs2 (activations) to the 4 PEs.
7. **PEs** (`pe_32b.sv`): Each PE does 4 × INT8 MACs. Zero-skipping checks fire in parallel.
8. **Reduction Tree** (`arith_stage.sv`): Sums all 4 PE outputs into one 32-bit value.
9. **Result** → Register File → VLSU → SRAM → next layer's input tensor.
10. Repeat 28 times → Classification output.

**Result: 854M cycles → 83M cycles = 10.3× speedup.**
