# Activation Functions Benchmark
# Tests 3 new hardware activation functions for AI inference
#
# Input vector (signed INT8, 4 elements): [-8, -1, 3, 10]
# (VLEN=32, LMUL=1 → max VL=4 for 8-bit elements)
#
# Expected results:
#   vabs:            [8, 1, 3, 10]
#   vlrelu(shift=2): [-2, -1, 3, 10]    (alpha=0.25: -8/4=-2, -1/4->-1 floor)
#   vclamp(upper=6): [0, 0, 3, 6]       (ReLU6: negatives->0, 10->6)

#include "perf.h"

    .text
    .global main
main:
    START_PERF_COUNT(t0)

    # Configure: 4 x 8-bit elements
    li      a3, 4
    vsetvli t0, a3, e8

    # Load input vector
    la      a2, input_data
    vle8.v  v2, (a2)            # v2 = [-8, -1, 3, 10]

    ####################################################################
    # TEST 1: vabs v3, v2  ->  vd[i] = |vs2[i]|
    .word   0xE02001D7          # vabs v3, v2
    la      a4, result_abs
    vse8.v  v3, (a4)

    ####################################################################
    # TEST 2: vlrelu v3, v2, a0  ->  vd[i] = vs2[i]>=0 ? vs2[i] : vs2[i]>>>a0
    li      a0, 2               # shift=2, slope alpha = 1/4 = 0.25
    .word   0xE62541D7          # vlrelu v3, v2, a0
    la      a4, result_lrelu
    vse8.v  v3, (a4)

    ####################################################################
    # TEST 3: vclamp v3, v2, a1  ->  vd[i] = min(max(0, vs2[i]), a1)
    li      a1, 6               # upper bound = 6 (ReLU6!)
    .word   0xEA25C1D7          # vclamp v3, v2, a1
    la      a4, result_clamp
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)
    jr      x0


    .data
    .align 4
    .global input_data

# Signed 8-bit: [-8, -1, 3, 10] = [0xF8, 0xFF, 0x03, 0x0A]
input_data:
    .byte 0xF8, 0xFF, 0x03, 0x0A

    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global result_abs, result_lrelu, result_clamp
vdata_start:
perf_start:
    .word 0
perf_end:
    .word 0
result_abs:                     # Expected: 0x0A030108
    .word 0
result_lrelu:                   # Expected: 0x0A03FFFE
    .word 0
result_clamp:                   # Expected: 0x06030000
    .word 0
vdata_end:

    .align 4
vref_start:
    .word 0
vref_end:
