# ReLU Activation Benchmark
# Demonstrates the custom vrelu instruction: vd[i] = max(0, vs2[i])
#
# Input:  [-5, 3, -1, 7, -10, 2, 0, -3, 4, -8, 6, -2, 1, -4, 5, -6]
# Expected: [0, 3, 0, 7, 0, 2, 0, 0, 4, 0, 6, 0, 1, 0, 5, 0]
# (All negative values become 0, positives stay unchanged)

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Setup
    la      a0, input_data      # pointer to input vector (mix of pos/neg)
    la      a1, relu_output     # pointer to store ReLU output
    li      a3, 4               # 4 elements (fits in one register, sew=8)

    # 3. Configure vector unit: 8-bit elements, 4 elements
    vsetvli t0, a3, e8

    # 4. Load input vector with mixed positive/negative values
    vle8.v  v1, (a0)            # v1 = input_data[0..3] = [-5, 3, -1, 7]

    # 5. Apply ReLU activation: vrelu v2, v1
    # Encoding: funct6=111110, vm=1, vs2=v1(00001), imm=00000, funct3=000, vd=v2(00010), opcode=1010111
    .word   0xFA100157          # vrelu v2, v1  ->  v2[i] = max(0, v1[i])

    # 6. Store the ReLU result to memory for verification
    vse8.v  v2, (a1)            # Store result: expect [0, 3, 0, 7]

    # 7. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    .align 4
    .global input_data

# Input: 4 signed 8-bit values: -5(0xFB), 3(0x03), -1(0xFF), 7(0x07)
input_data:
    .byte 0xFB, 0x03, 0xFF, 0x07

    # Dump region: includes perf counters AND relu output
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end, relu_output
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
# ReLU output within dump region so it appears in the .dump.vmem file
relu_output:
    .word 0x0
vdata_end:

    .align 4
vref_start:
    .word 0x0
vref_end:
