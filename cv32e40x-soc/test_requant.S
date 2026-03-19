# Requantization Benchmark: vrequant instruction
# Tests TFLite-style requantization: vd[i] = clamp((vs2[i] * scale) >> shift, -128, 127)
#
# Uses 8-bit elements (LMUL=1, VL=4) since the AVA LSU supports vle8.v
# The requantization converts accumulated values back to quantized range
#
# Test setup:
#   vs2 = [120, -100, 50, -30]  (signed INT8, simulating small accumulators)
#   scale = 3  (multiplier)
#   shift = 2  (right-shift by 2, i.e. divide by 4)
#   packed rs1 = (2 << 16) | 3 = 0x00020003 = 131075
#
#   Expected: clamp((value * 3) >> 2, -128, 127)
#     120 * 3 = 360  >> 2 = 90    → clamped: 90
#    -100 * 3 = -300 >> 2 = -75   → clamped: -75
#      50 * 3 = 150  >> 2 = 37    → clamped: 37
#     -30 * 3 = -90  >> 2 = -23   → clamped: -23
#
#   Final (signed bytes): [90, -75, 37, -23]
#   Hex: [0x5A, 0xB5, 0x25, 0xE9]
#   As little-endian word: 0xE925B55A

#include "perf.h"

    .text
    .global main
main:
    ########################################################################
    # PART A: SCALAR REQUANTIZATION (baseline)
    ########################################################################
    START_PERF_COUNT(t0)

    la      s0, accum_data
    la      s1, scalar_output
    li      s2, 4               # 4 elements
    li      s3, 3               # scale
    li      s4, 2               # shift

scalar_loop:
    lb      t1, 0(s0)           # load signed 8-bit accumulator
    mul     t2, t1, s3          # accum * scale
    sra     t2, t2, s4          # >> shift (arithmetic)
    # Saturate to [-128, 127]
    li      t3, 127
    bge     t2, t3, sat_upper
    li      t3, -128
    blt     t2, t3, sat_lower
    j       sat_done
sat_upper:
    li      t2, 127
    j       sat_done
sat_lower:
    li      t2, -128
sat_done:
    sb      t2, 0(s1)
    addi    s0, s0, 1
    addi    s1, s1, 1
    addi    s2, s2, -1
    bnez    s2, scalar_loop

    END_PERF_COUNT(t0)

    # Save scalar cycles
    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, scalar_cycles
    sw      a7, 0(t0)

    ########################################################################
    # PART B: VECTOR REQUANTIZATION (vrequant)
    ########################################################################
    START_PERF_COUNT(t0)

    # Configure: 4 x 8-bit elements
    li      a3, 4
    vsetvli t0, a3, e8

    # Load 8-bit accumulators
    la      a2, accum_data
    vle8.v  v2, (a2)            # v2 = [120, -100, 50, -30]

    # Pack config: shift=2 in bits[20:16], scale=3 in bits[15:0]
    # (2 << 16) | 3 = 131075
    li      a0, 131075

    # vrequant v3, v2, a0
    # funct6=111111, vm=1, vs2=v2(00010), rs1=a0(01010), funct3=110(OPMVX), vd=v3(00011)
    .word   0xFE2561D7          # vrequant v3, v2, a0

    la      a4, vector_output
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)

    # Save vector cycles
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
    .global accum_data

# Signed 8-bit: [120, -100, 50, -30] = [0x78, 0x9C, 0x32, 0xE2]
accum_data:
    .byte 0x78, 0x9C, 0x32, 0xE2

    .align 4
    .global scalar_output, vector_output
scalar_output:
    .byte 0, 0, 0, 0
    .align 4
vector_output:
    .byte 0, 0, 0, 0

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
result_scalar:
    .word 0                     # Expected: 0xE925B55A
result_vector:
    .word 0                     # Expected: 0xE925B55A (same)
vdata_end:

    .align 4
vref_start:
    .word 0
vref_end:
