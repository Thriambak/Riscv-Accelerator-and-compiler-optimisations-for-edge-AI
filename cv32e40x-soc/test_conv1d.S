# 1D Convolution Benchmark: Scalar vs Vector (VMACC)
# Computes: output[i] = sum_{k=0}^{K-1}( input[i+k] * kernel[k] )
#
# Setup: input[8], kernel[3], output[6]  (valid convolution, no padding)
# This is the core operation in Conv1D layers (audio, time-series AI)
#
# Scalar: triple-nested byte loads + multiply + accumulate
# Vector: vle8.v loads + vmacc does 4 MACs per cycle

#include "perf.h"

    .text
    .global main
main:
    ########################################################################
    # PART A: SCALAR 1D CONVOLUTION
    ########################################################################
    START_PERF_COUNT(t0)

    la      s0, input_data      # input base
    la      s1, kernel_data     # kernel base
    la      s2, scalar_output   # output base
    li      s3, 4               # output_len = input_len - kernel_len + 1 = 8-3+1 = 6
                                # But VL=4, so we do 4 outputs

scalar_conv_outer:
    mv      t5, s1              # reset kernel pointer
    li      t4, 0               # accumulator = 0
    li      t1, 3               # kernel_len = 3

scalar_conv_inner:
    lb      t2, 0(s0)           # input[i+k]
    lb      t3, 0(t5)           # kernel[k]
    mul     t6, t2, t3
    add     t4, t4, t6          # accum += input[i+k] * kernel[k]
    addi    s0, s0, 1           # next input element
    addi    t5, t5, 1           # next kernel element
    addi    t1, t1, -1
    bnez    t1, scalar_conv_inner

    # Apply ReLU
    bge     t4, zero, scalar_relu_done
    li      t4, 0
scalar_relu_done:
    sb      t4, 0(s2)
    addi    s2, s2, 1

    # Reset input pointer: input advances by 1 per output (stride=1)
    # s0 was advanced by 3 (kernel_len), subtract 2 to get net advance of 1
    addi    s0, s0, -2

    addi    s3, s3, -1
    bnez    s3, scalar_conv_outer

    END_PERF_COUNT(t0)

    la      t0, perf_start
    lw      a5, 0(t0)
    la      t0, perf_end
    lw      a6, 0(t0)
    sub     a7, a6, a5
    la      t0, scalar_cycles
    sw      a7, 0(t0)

    ########################################################################
    # PART B: VECTOR 1D CONVOLUTION (using vmacc)
    # Strategy: For each kernel tap k, load shifted input window, vmacc with kernel[k]
    ########################################################################
    START_PERF_COUNT(t0)

    li      a3, 4
    vsetvli t0, a3, e8

    # Initialize accumulator to 0
    vmv.v.i v4, 0               # v4 = output accumulator [0,0,0,0]

    # Kernel tap 0: input[0..3] * kernel[0]
    la      a2, input_data
    vle8.v  v1, (a2)            # v1 = [input[0], input[1], input[2], input[3]]
    la      a3, kernel_data
    lb      a0, 0(a3)           # a0 = kernel[0]
    # vmacc.vx v4, a0, v1  → v4[i] += v1[i] * a0
    # funct6=101101, vm=1, vs2=v1(00001), rs1=a0(01010), funct3=110(OPMVX), vd=v4(00100)
    # 101101_1_00001_01010_110_00100_1010111
    .word   0xB60D6257          # vmacc.vx v4, a0, v1

    # Kernel tap 1: input[1..4] * kernel[1]
    addi    a2, a2, 1
    vle8.v  v1, (a2)            # v1 = [input[1], input[2], input[3], input[4]]
    lb      a0, 1(a3)           # a0 = kernel[1]
    .word   0xB60D6257          # vmacc.vx v4, a0, v1

    # Kernel tap 2: input[2..5] * kernel[2]
    addi    a2, a2, 1
    vle8.v  v1, (a2)            # v1 = [input[2], input[3], input[4], input[5]]
    lb      a0, 2(a3)           # a0 = kernel[2]
    .word   0xB60D6257          # vmacc.vx v4, a0, v1

    # Apply ReLU to accumulated results
    # vrelu v4, v4: funct6=111110, vm=1, vs2=v4(00100), imm=00000, funct3=000, vd=v4(00100)
    # 111110_1_00100_00000_000_00100_1010111
    .word   0xFC200257          # vrelu v4, v4

    # Store result
    la      a4, vector_output
    vse8.v  v4, (a4)

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
    .global input_data, kernel_data

# Input: 8 values (signed INT8) - simulating a feature map
input_data:
    .byte 3, 1, 4, 1, 5, 9, 2, 6

# Kernel: 3 taps (signed INT8) - simulating a 1D convolution filter
kernel_data:
    .byte 1, 2, 1

    # Expected conv1d (valid, stride=1):
    # out[0] = 3*1 + 1*2 + 4*1 = 9
    # out[1] = 1*1 + 4*2 + 1*1 = 10
    # out[2] = 4*1 + 1*2 + 5*1 = 11
    # out[3] = 1*1 + 5*2 + 9*1 = 20
    # After ReLU: [9, 10, 11, 20] (all positive, unchanged)

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
    .word 0                     # Scalar conv1d cycles
vector_cycles:
    .word 0                     # Vector conv1d cycles
result_scalar:
    .word 0                     # Expected: 0x140B0A09
result_vector:
    .word 0                     # Expected: 0x140B0A09
vdata_end:

    .align 4
vref_start:
    .word 0
vref_end:
