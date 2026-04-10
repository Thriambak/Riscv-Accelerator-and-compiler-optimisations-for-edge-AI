# Sigmoid and Tanh LUT Benchmark
# Tests the throughput of nonlinear activations using the hardware LUTs
# vs scalar CPU approximations.

#include "perf.h"

    .text
    .global main
main:
    # Configure vector unit: 16 x 8-bit elements
    li      a3, 16
    vsetvli t0, a3, e8

    # Load input data
    la      a0, input_data
    vle8.v  v2, (a0)            # v2 = input_data

    # ==========================================
    # SCALAR KERNEL (CPU Baseline Approximation)
    # ==========================================
    START_PERF_COUNT(t0)

    la      a0, input_data
    la      a1, result_scalar
    li      a2, 16           # Number of elements

scalar_loop:
    lb      t1, 0(a0)
    # Dummy sigmoid approximation taking ~12 cycles
    srai    t2, t1, 2
    addi    t2, t2, 128
    # Saturation
    li      t3, 255
    blt     t2, t3, 1f
    mv      t2, t3
1:  bgez    t2, 2f
    li      t2, 0
2:  
    sb      t2, 0(a1)
    addi    a0, a0, 1
    addi    a1, a1, 1
    addi    a2, a2, -1
    bnez    a2, scalar_loop

    END_PERF_COUNT(t0)

    # Calculate scalar cycles
    la      t1, perf_start
    lw      t2, 0(t1)
    la      t1, perf_end
    lw      t3, 0(t1)
    sub     t4, t3, t2       # t4 = scalar cycles

    la      t1, scalar_cycles
    sw      t4, 0(t1)

    # ==========================================
    # VECTOR KERNEL (AVA + LUTs)
    # ==========================================
    START_PERF_COUNT(t0)

    # vsigmoid v3, v2
    # funct6=100010 vm=1 rs1=00000 width=000 vd=v3(3) opcode=0000111(0x07)
    # 1000_10_1_00000_00010_000_00011_1010111 -> 0x8A0101D7
    .word   0x8A0101D7
    
    # vtanh v4, v2
    # funct6=100011 vm=1 rs1=00000 width=000 vd=v4(4) opcode=0000111(0x07)
    # 1000_11_1_00000_00010_000_00100_1010111 -> 0x8E010257
    .word   0x8E010257

    # Store results (demonstrates usage)
    la      a1, result_sigmoid
    vse8.v  v3, (a1)
    
    END_PERF_COUNT(t0)

    # Calculate vector cycles
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
input_data:
    .byte -128, -64, -32, -16, -8, -4, 0, 4, 8, 16, 32, 64, 127, 0, 0, 0

    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global scalar_cycles, vector_cycles
    .global result_scalar, result_sigmoid, result_tanh

vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
scalar_cycles:
    .word 0x0
vector_cycles:
    .word 0x0
result_scalar:
    .space 16
result_sigmoid:
    .space 16
result_tanh:
    .space 16
vdata_end:

    .align 4
    .global vref_start, vref_end
vref_start:
    .word 0x0
vref_end:
