# Max Pooling Benchmark: Scalar vs Vector (vredmax)
# Computes: output[i] = max(input[i*stride .. i*stride+pool_size-1])
#
# Setup: input[16], pool_size=4, stride=4 → output[4]
# This is the core operation in MaxPool layers (CNN downsampling)

#include "perf.h"

    .text
    .global main
main:
    ########################################################################
    # PART A: SCALAR MAX POOLING
    ########################################################################
    START_PERF_COUNT(t0)

    la      s0, pool_input
    la      s1, scalar_output
    li      s3, 4               # 4 output windows

scalar_pool_outer:
    lb      t4, 0(s0)           # max = input[0] of window
    li      t1, 3               # remaining 3 elements
    addi    s0, s0, 1

scalar_pool_inner:
    lb      t2, 0(s0)
    bge     t4, t2, scalar_skip # if max >= current, skip
    mv      t4, t2              # new max
scalar_skip:
    addi    s0, s0, 1
    addi    t1, t1, -1
    bnez    t1, scalar_pool_inner

    sb      t4, 0(s1)
    addi    s1, s1, 1
    addi    s3, s3, -1
    bnez    s3, scalar_pool_outer

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, scalar_cycles
    sw      a7, 0(t0)

    ########################################################################
    # PART B: VECTOR MAX POOLING (vredmax)
    # Load 4 elements per window, use vredmax to find max, extract scalar
    ########################################################################
    START_PERF_COUNT(t0)

    li      a3, 4
    vsetvli t0, a3, e8

    la      s0, pool_input
    la      s1, vector_output
    li      s3, 4               # 4 windows

vector_pool_loop:
    vle8.v  v1, (s0)            # load 4 elements of this window

    # Load reduction identity (-128 = minimum INT8) from memory
    # vmv.v.i cannot encode -128 (5-bit signed imm range: -16 to +15)
    la      t5, min_int8
    vle8.v  v2, (t5)            # v2[0] = -128 (identity for max)

    # vredmax.vs v3, v1, v2 → v3[0] = max(v1[0..3], v2[0])
    vredmax.vs v3, v1, v2
    vmv.x.s t4, v3              # t4 = max value

    sb      t4, 0(s1)
    addi    s0, s0, 4           # next window (stride=4)
    addi    s1, s1, 1
    addi    s3, s3, -1
    bnez    s3, vector_pool_loop

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, vector_cycles
    sw      a7, 0(t0)

    jr      x0


    .data
    .align 4
    .global pool_input

# MIN INT8 identity element for max reduction (-128 = 0x80)
min_int8:
    .byte 0x80, 0x80, 0x80, 0x80

    .align 4

# 16 input values, 4 windows of size 4
# Window 0: [3, 7, 1, 5]  → max = 7
# Window 1: [2, 8, 4, 6]  → max = 8
# Window 2: [9, 1, 3, 2]  → max = 9
# Window 3: [4, 5, 10, 1] → max = 10
pool_input:
    .byte 3, 7, 1, 5,  2, 8, 4, 6,  9, 1, 3, 2,  4, 5, 10, 1

    .align 4
    .global scalar_output, vector_output
scalar_output:
    .byte 0, 0, 0, 0           # Expected: [7, 8, 9, 10]
    .align 4
vector_output:
    .byte 0, 0, 0, 0           # Expected: [7, 8, 9, 10]

    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global scalar_cycles, vector_cycles
vdata_start:
perf_start:
    .word 0
perf_end:
    .word 0
scalar_cycles:
    .word 0
vector_cycles:
    .word 0
vdata_end:

    .align 4
vref_start:
    .word 0
vref_end:
