# VWMACC (Widening Fused Multiply-Accumulate) Benchmark
# Tests the vwmacc.vv instruction: vd[i] += vs2[i] * vs1[i] (widening)
# INT8 inputs, widening accumulation for safe INT8→INT32 accumulation.
#
# === Test: vwmacc.vv ===
#   v1 (vs1) = [1, 2, 3, 4]       -- multiplier A
#   v2 (vs2) = [5, 6, 7, 8]       -- multiplier B
#   v3 (vd)  = [10, 20, 30, 40]   -- initial accumulator
#   After vwmacc.vv v3, v1, v2:
#     v3[i] = vs2[i] * vs1[i] + vd[i]
#     v3 = [5*1+10, 6*2+20, 7*3+30, 8*4+40] = [15, 32, 51, 72]
#
# Encoding: funct6=101110, vm=1, funct3=010(OPMVV), opcode=1010111(OP-V)

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Configure vector unit: 4 x 8-bit elements
    li      a3, 4
    vsetvli t0, a3, e8

    # 3. Load operands from memory
    la      a0, vec_a
    la      a1, vec_b
    la      a2, accum_init
    vle8.v  v1, (a0)            # v1 = [1, 2, 3, 4]
    vle8.v  v2, (a1)            # v2 = [5, 6, 7, 8]
    vle8.v  v3, (a2)            # v3 = [10, 20, 30, 40]  (accumulator)

    # 4. vwmacc.vv v3, v1, v2:  v3[i] += v2[i] * v1[i]
    #    Encoding: funct6=101110, vm=1, vs2=v2(00010), vs1=v1(00001),
    #              funct3=010(OPMVV), vd=v3(00011), opcode=1010111
    #    = 101110_1_00010_00001_010_00011_1010111 = 0xBA20A1D7
    .word   0xBA20A1D7          # vwmacc.vv v3, v1, v2  → expect [15, 32, 51, 72]

    # Store result
    la      a4, result1
    vse8.v  v3, (a4)

    # 5. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    .align 4
    .global vec_a
    .global vec_b
    .global accum_init

vec_a:
    .byte 1, 2, 3, 4                # vs1: multiplier A

vec_b:
    .byte 5, 6, 7, 8                # vs2: multiplier B

accum_init:
    .byte 10, 20, 30, 40            # vd: initial accumulator values

    # === Verification region ===
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global result1
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
result1:
    .word 0x0                        # Expected: 0x4833200F  (72,51,32,15 in little-endian)
vdata_end:

    .align 4
vref_start:
    .word 0x0
vref_end:
