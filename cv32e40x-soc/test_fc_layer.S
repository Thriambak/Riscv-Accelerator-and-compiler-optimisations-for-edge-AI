# AI Fully-Connected Layer Benchmark: Scalar vs VMACC
#
# Implements a REAL neural network primitive:
#   4 neurons, each with 16 inputs (INT8 quantized)
#   output[n] = ReLU( sum_{i=0}^{15}( weight[n][i] * input[i] ) + bias[n] )
#
# This is exactly what happens inside every FC/Dense layer in:
#   - MobileNet classifier head
#   - TinyBERT final projection
#   - Any MLP
#
# ============ PART A: SCALAR BASELINE ============
# Pure scalar loop: load byte, multiply byte, accumulate, repeat × 16 × 4
#
# ============ PART B: VECTOR VMACC ============
# For each neuron:
#   1. vle8.v loads 16 weights at once
#   2. vmacc.vv does 4 MACs per cycle (4 PEs), finishes 16 in 4 cycles
#   3. vredsum reduces to scalar
#
# Expected speedup: ~4-6x (16 scalar iterations → 4 vector cycles per neuron)

#include "perf.h"

    .text
    .global main
main:
    ########################################################################
    # PART A: SCALAR FULLY-CONNECTED LAYER
    ########################################################################
    START_PERF_COUNT(t0)

    # Compute 4 output neurons, each = dot(weights_row, input) + bias
    la      s0, weights         # s0 = weight matrix base (4 rows × 16 cols)
    la      s1, input_vec       # s1 = input vector (16 elements)
    la      s2, scalar_output   # s2 = output buffer
    li      s3, 4               # s3 = number of neurons (outer loop)

scalar_neuron_loop:
    # Compute one neuron: accum = sum(weight[i] * input[i])
    li      t1, 16              # t1 = inner loop count (16 inputs)
    mv      t5, s1              # t5 = input pointer (reset each neuron)
    li      t4, 0               # t4 = accumulator = 0

scalar_mac_loop:
    lb      t2, 0(s0)           # t2 = weight[i]
    lb      t3, 0(t5)           # t3 = input[i]
    mul     t6, t2, t3          # t6 = weight[i] * input[i]
    add     t4, t4, t6          # accum += product

    addi    s0, s0, 1           # next weight
    addi    t5, t5, 1           # next input
    addi    t1, t1, -1          # decrement counter
    bnez    t1, scalar_mac_loop

    # Apply ReLU: output = max(0, accum)
    bge     t4, zero, scalar_store
    li      t4, 0
scalar_store:
    sb      t4, 0(s2)           # store output byte
    addi    s2, s2, 1           # next output
    addi    s3, s3, -1
    bnez    s3, scalar_neuron_loop

    END_PERF_COUNT(t0)

    # Save scalar cycle count
    la      t0, perf_start
    lw      a5, 0(t0)           # a5 = scalar start
    la      t0, perf_end
    lw      a6, 0(t0)           # a6 = scalar end
    sub     a7, a6, a5          # a7 = scalar elapsed cycles
    la      t0, scalar_cycles
    sw      a7, 0(t0)

    ########################################################################
    # PART B: VECTOR VMACC FULLY-CONNECTED LAYER
    ########################################################################
    START_PERF_COUNT(t0)

    la      s0, weights         # s0 = weight matrix base
    la      s1, input_vec       # s1 = input vector base
    la      s2, vector_output   # s2 = output buffer
    li      s3, 4               # s3 = number of neurons

    # Configure: 16 × 8-bit elements
    li      a3, 16
    vsetvli t0, a3, e8

    # Load input vector ONCE (reused for all neurons)
    vle8.v  v1, (s1)            # v1 = input[0..15]  -- stays loaded!

vector_neuron_loop:
    # Load weight row for this neuron
    vle8.v  v2, (s0)            # v2 = weights[neuron][0..15]

    # Initialize accumulator to zero
    vmv.v.i v3, 0               # v3 = [0, 0, ..., 0]

    # Fused multiply-accumulate: v3[i] += v2[i] * v1[i]
    # One instruction does what the scalar inner loop does in 16 iterations!
    #
    # Encoding: funct6=101101, vm=1, vs2=v2(00010), vs1=v1(00001),
    #           funct3=010(OPMVV), vd=v3(00011), opcode=1010111
    .word   0xB620A1D7          # vmacc.vv v3, v1, v2

    # Reduce: sum all 16 products into a single scalar
    # vredsum.vs v4, v3, v0  (v0 should be 0 for clean reduction)
    # v4[0] = v3[0] + v3[1] + ... + v3[15] + v0[0]
    vmv.v.i v4, 0               # v4 = 0 (initial accumulator for reduction)
    vredsum.vs v4, v3, v4       # v4[0] = sum(v3)

    # Extract scalar result
    vmv.x.s t4, v4              # t4 = v4[0] = dot product result

    # Apply ReLU: max(0, result)
    bge     t4, zero, vector_store
    li      t4, 0
vector_store:
    sb      t4, 0(s2)           # store output byte

    addi    s0, s0, 16          # next weight row
    addi    s2, s2, 1           # next output
    addi    s3, s3, -1
    bnez    s3, vector_neuron_loop

    END_PERF_COUNT(t0)

    # Save vector cycle count
    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, vector_cycles
    sw      a7, 0(t0)

    # Done
    jr      x0


    ########################################################################
    # DATA SECTION
    ########################################################################
    .data
    .align 4
    .global input_vec
    .global weights

# 16 input activations (simulating a quantized hidden layer output)
input_vec:
    .byte 1, 3, 2, 4, 1, 5, 3, 2, 4, 1, 3, 2, 5, 1, 4, 2

# Weight matrix: 4 neurons × 16 weights each (row-major)
# Neuron 0: all 1s → dot = sum(inputs) = 1+3+2+4+1+5+3+2+4+1+3+2+5+1+4+2 = 43
# Neuron 1: alternating 1,-1 → dot = 1-3+2-4+1-5+3-2+4-1+3-2+5-1+4-2 = 3
# Neuron 2: first 8 = 2, last 8 = 0 → dot = 2*(1+3+2+4+1+5+3+2) = 2*21 = 42
# Neuron 3: all -1s → dot = -43 → ReLU → 0
weights:
    .byte  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1
    .byte  1, -1,  1, -1,  1, -1,  1, -1,  1, -1,  1, -1,  1, -1,  1, -1
    .byte  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0
    .byte -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1

    # Output buffers
    .align 4
    .global scalar_output, vector_output
scalar_output:
    .byte 0, 0, 0, 0
    .align 4
vector_output:
    .byte 0, 0, 0, 0

    # Performance data dump region
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global scalar_cycles, vector_cycles
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
scalar_cycles:
    .word 0x0                   # Cycles for scalar FC layer
vector_cycles:
    .word 0x0                   # Cycles for vector FC layer
scalar_output_dump:
    .word 0x0                   # Copy of scalar results (for easy viewing)
vector_output_dump:
    .word 0x0                   # Copy of vector results (for easy viewing)
vdata_end:

    .align 4
vref_start:
    .word 0x0
vref_end:
