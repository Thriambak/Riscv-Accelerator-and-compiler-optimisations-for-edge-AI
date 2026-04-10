# Memory Bandwidth Benchmark (DROM Coalescing & OBI Pipelining)
# Tests the throughput of memory transfers using vector loads/stores
# vs scalar loads/stores.
#
# The AVA hardware uses EARTH DROM to coalesce contiguous byte loads
# into 32-bit burst transactions over OBI, and overlaps next requests.

#include "perf.h"

    .text
    .global main
main:
    # ==========================================
    # SCALAR KERNEL (CPU Baseline)
    # ==========================================
    START_PERF_COUNT(t0)

    la      a0, input_data
    la      a1, output_data
    li      a2, 1024         # Number of bytes

scalar_loop:
    lb      t1, 0(a0)
    sb      t1, 0(a1)
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

    # ==========================================
    # VECTOR KERNEL (AVA + DROM)
    # ==========================================
    START_PERF_COUNT(t0)

    # Configure vector unit: 16 x 8-bit elements
    li      a3, 16
    vsetvli t0, a3, e8

    la      a0, input_data
    la      a1, output_data
    li      a2, 1024         # Number of bytes
    li      a3, 16           # Stride

vector_loop:
    # vle8.v v2, (a0)
    # funct6=000000 vm=1 rs1=a0(10) width=000 vd=v2(2) opcode=0000111
    # 0000_00_1_00000_01010_000_00010_0000111 
    # = 0x02050107
    .word   0x02050107

    # vse8.v v2, (a1)
    # funct6=000000 vm=1 rs1=a1(11) width=000 vs3=v2(2) opcode=0100111
    # 0000_00_1_00000_01011_000_00010_0100111
    # = 0x02058127
    .word   0x02058127

    add     a0, a0, a3
    add     a1, a1, a3
    sub     a2, a2, a3
    bnez    a2, vector_loop

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
    .global input_data
    .global output_data

input_data:
    .rept 1024
    .byte 42
    .endr

output_data:
    .rept 1024
    .byte 0
    .endr

    # Performance counter storage for run_all_benchmarks.sh
    .align 4
    .global vdata_start
    .global vdata_end
    .global perf_start
    .global perf_end
    .global scalar_cycles
    .global vector_cycles

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
    .global vref_start
    .global vref_end
vref_start:
    .word 0x0
vref_end:
