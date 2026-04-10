# INT4 Packed Dot Product Benchmark
# Tests the throughput of packed 4-bit scalar unpacking and dot product vs hardware INT4 SIMD.
# 16 bytes contain 32 4-bit nibbles per vector.

#include "perf.h"

    .text
    .global main
main:
    # 1. SCALAR KERNEL (CPU Baseline)
    # ------------------------------------------
    START_PERF_COUNT(t0)

    la      a0, vec_a
    la      a1, vec_b
    li      a2, 16           # Number of bytes (32 nibbles)
    li      t6, 0            # accumulator

scalar_loop:
    lb      t1, 0(a0)        # load byte A
    lb      t2, 0(a1)        # load byte B
    
    # lower nibble
    slli    t3, t1, 28
    srai    t3, t3, 28       # sign extend low A
    slli    t4, t2, 28
    srai    t4, t4, 28       # sign extend low B
    mul     t5, t3, t4
    add     t6, t6, t5       # accumulate

    # upper nibble
    srai    t3, t1, 4        # sign extend high A
    srai    t4, t2, 4        # sign extend high B
    mul     t5, t3, t4
    add     t6, t6, t5       # accumulate

    addi    a0, a0, 1
    addi    a1, a1, 1
    addi    a2, a2, -1
    bnez    a2, scalar_loop

    END_PERF_COUNT(t0)

    # Calculate scalar cycles (perf_end - perf_start)
    la      t1, perf_start
    lw      t2, 0(t1)
    la      t1, perf_end
    lw      t3, 0(t1)
    sub     t4, t3, t2       # t4 = scalar cycles

    la      t1, scalar_cycles
    sw      t4, 0(t1)

    # 2. VECTOR KERNEL (AVA INT4 Packed SIMD)
    # ------------------------------------------
    START_PERF_COUNT(t0)

    # Configure vector unit: 16 x 8-bit elements
    li      a3, 16
    vsetvli t0, a3, e8

    la      a0, vec_a
    la      a1, vec_b
    la      a2, accum_init
    vle8.v  v1, (a0)
    vle8.v  v2, (a1)
    vle8.v  v3, (a2)    # Clear v3 (accumulator) with zeros

    # vpdot4 v3, v1, v2
    # funct6=110101 vm=1 vs2=v2(00010) vs1=v1(00001) funct3=010(OPMVV) vd=v3(00011)
    # 1101_01_1_00010_00001_010_00011_1010111 -> 0xD620A1D7
    .word   0xD620A1D7

    END_PERF_COUNT(t0)

    # Calculate vector cycles (perf_end - perf_start)
    la      t1, perf_start
    lw      t2, 0(t1)
    la      t1, perf_end
    lw      t3, 0(t1)
    sub     t4, t3, t2       # t4 = vector cycles

    la      t1, vector_cycles
    sw      t4, 0(t1)

    jr      x0


    .data
    .align 4
    .global vec_a
    .global vec_b
vec_a:
    .byte 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00
vec_b:
    .byte 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00

accum_init:
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global scalar_cycles, vector_cycles

vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
scalar_cycles:
    .word 0x0
vector_cycles:
    .word 0x0
vdata_end:

    .align 4
    .global vref_start, vref_end
vref_start:
    .word 0x0
vref_end:
