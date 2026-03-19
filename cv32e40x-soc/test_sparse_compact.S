# Sparsity Compaction Benchmark: Demonstrates Cycle Savings
# Tests the new operand compaction feature where all-zero PE cycles
# result in suppressed writes (no useless zeros written back to vd).
#
# Three vector multiply tests with different sparsity levels:
# 1. Dense (0% sparse):   all 16 weights non-zero → 4 PE cycles, 0 compacted
# 2. 75% sparse:          3 of 4 register chunks all-zero → 1 useful cycle, 3 compacted
# 3. 100% sparse:         all zero weights → 0 useful cycles, 4 compacted
#
# PLUS a scalar baseline for comparison.
#
# Data layout is deliberately chunk-aligned (4 bytes per chunk at SEW=8):
#   Chunk 0: bytes [0:3], Chunk 1: bytes [4:7], Chunk 2: bytes [8:11], Chunk 3: bytes [12:15]
#
# The perf counter (vperf rs1=4) reports compacted cycles.

#include "perf.h"

    .text
    .global main
main:
    ########################################################################
    # PART A: SCALAR MULTIPLY (baseline)
    # Byte-by-byte multiply: 16 iterations
    ########################################################################
    START_PERF_COUNT(t0)

    la      s0, dense_a
    la      s1, sparse_75_b         # Use 75% sparse for scalar baseline
    la      s2, scalar_result
    li      s3, 16                  # 16 elements

scalar_loop:
    lb      t1, 0(s0)
    lb      t2, 0(s1)
    mul     t3, t1, t2
    sb      t3, 0(s2)
    addi    s0, s0, 1
    addi    s1, s1, 1
    addi    s2, s2, 1
    addi    s3, s3, -1
    bnez    s3, scalar_loop

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, scalar_cycles
    sw      a7, 0(t0)

    ########################################################################
    # PART B: VECTOR MULTIPLY — DENSE (0% sparsity)
    # All 16 weights non-zero → 4 PE cycles, 0 compacted
    ########################################################################
    START_PERF_COUNT(t0)

    li      a3, 16
    vsetvli t0, a3, e8

    la      a0, dense_a
    la      a1, dense_b
    vle8.v  v1, (a0)
    vle8.v  v2, (a1)
    vmul.vv v3, v2, v1

    la      a4, dense_result
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, dense_cycles
    sw      a7, 0(t0)

    # Read compacted cycles counter after dense test
    # vperf with rs1=4 → returns perf_compacted_cycles
    # funct6=111101, vm=1, vs2=00000, rs1=00100(x4), funct3=110(OPMVX), vd=00000(x0)
    li      a0, 4
    .word   0xF4026057              # vperf x0, x4 → x10 gets compacted_cycles
    la      t0, dense_compacted
    sw      a0, 0(t0)

    ########################################################################
    # PART C: VECTOR MULTIPLY — 75% SPARSE
    # Sparse B: only chunk 1 (bytes 4-7) is non-zero
    # Chunks 0,2,3 are all zero → 3 compacted cycles, 1 useful cycle
    ########################################################################
    START_PERF_COUNT(t0)

    li      a3, 16
    vsetvli t0, a3, e8

    la      a0, dense_a
    la      a1, sparse_75_b
    vle8.v  v1, (a0)
    vle8.v  v2, (a1)
    vmul.vv v3, v2, v1

    la      a4, sparse_75_result
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, sparse_75_cycles
    sw      a7, 0(t0)

    # Read compacted cycles counter after sparse test
    li      a0, 4
    .word   0xF4026057              # vperf x0, x4
    la      t0, sparse_75_compacted
    sw      a0, 0(t0)

    ########################################################################
    # PART D: VECTOR MULTIPLY — 100% SPARSE
    # All weights zero → 4 compacted cycles, 0 useful cycles
    ########################################################################
    START_PERF_COUNT(t0)

    li      a3, 16
    vsetvli t0, a3, e8

    la      a0, dense_a
    la      a1, zero_b
    vle8.v  v1, (a0)
    vle8.v  v2, (a1)
    vmul.vv v3, v2, v1

    la      a4, zero_result
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, zero_cycles
    sw      a7, 0(t0)

    # Read compacted cycles counter after 100% sparse test
    li      a0, 4
    .word   0xF4026057              # vperf x0, x4
    la      t0, zero_compacted
    sw      a0, 0(t0)

    jr      x0


    .data
    .align 4
    .global dense_a, dense_b, sparse_75_b, zero_b

# Input A: dense vector (all non-zero)
dense_a:
    .byte 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16

# Input B: fully dense (0% sparsity)
dense_b:
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2

# Input B: 75% sparse — only chunk 1 (bytes 4-7) non-zero
# Chunk-aligned: [0,0,0,0 | 3,3,3,3 | 0,0,0,0 | 0,0,0,0]
sparse_75_b:
    .byte 0, 0, 0, 0,  3, 3, 3, 3,  0, 0, 0, 0,  0, 0, 0, 0

# Input B: 100% sparse (all zeros)
zero_b:
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

    # Output buffers
    .align 4
    .global scalar_result, dense_result, sparse_75_result, zero_result
scalar_result:
    .byte 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    .align 4
dense_result:
    .byte 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    .align 4
sparse_75_result:
    .byte 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    .align 4
zero_result:
    .byte 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

    # Performance data dump region
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global scalar_cycles, dense_cycles, sparse_75_cycles, zero_cycles
    .global dense_compacted, sparse_75_compacted, zero_compacted
vdata_start:
perf_start:
    .word 0
perf_end:
    .word 0
scalar_cycles:
    .word 0                     # Scalar multiply cycles (baseline)
dense_cycles:
    .word 0                     # Vector dense multiply cycles
sparse_75_cycles:
    .word 0                     # Vector 75% sparse multiply cycles
zero_cycles:
    .word 0                     # Vector 100% sparse multiply cycles
dense_compacted:
    .word 0                     # Compacted cycles counter after dense test
sparse_75_compacted:
    .word 0                     # Compacted cycles counter after 75% sparse
zero_compacted:
    .word 0                     # Compacted cycles counter after 100% sparse
vdata_end:

    .align 4
vref_start:
    .word 0
vref_end:
