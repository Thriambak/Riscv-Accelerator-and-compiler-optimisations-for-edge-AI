# Conv2D Benchmark - 4x4 input, 3x3 kernel, 1 output channel
# Demonstrates: vmacc (multiply-accumulate), vmaccrelu (fused MAC+ReLU)
#
# Input (4x4, INT8):
#   1  2  3  4
#   5  6  7  8
#   9  10 11 12
#   13 14 15 16
#
# Kernel (3x3, INT8):
#   1  0  -1
#   1  0  -1
#   1  0  -1
# This is a simple horizontal edge detection kernel.
#
# Output (2x2):
#   For position (0,0): sum over 3x3 window top-left
#   "Sliding window" done manually: 4 output positions
#
# The test computes 2 rows: unfused (vmacc + vrelu) and fused (vmaccrelu)
# to compare cycle counts.

#include "perf.h"

    .text
    .global main
main:
    # Configure vector unit: 4 x 8-bit elements (one row of kernel)
    li      a3, 4
    vsetvli t0, a3, e8

    # ============================================================
    # METHOD 1: Unfused - vmacc then vrelu separately
    # ============================================================
    START_PERF_COUNT(t0)

    # Load first 3x3 window at position (0,0)
    # Row 0 of input: [1, 2, 3] (padded to 4 elements)
    la      a0, input_r0
    vle8.v  v1, (a0)            # v1 = [1, 2, 3, 0]

    # Kernel row 0: [1, 0, -1] (padded to 4)
    la      a1, kernel_r0
    vle8.v  v2, (a1)            # v2 = [1, 0, -1, 0]

    # Clear accumulator
    la      a2, zeros
    vle8.v  v3, (a2)            # v3 = [0, 0, 0, 0]

    # MAC row 0: v3 += v1 * v2 = [1*1, 2*0, 3*(-1), 0*0] = [1, 0, -3, 0]
    # Then add row 1 and row 2...
    # For simplicity, just do one row MAC + ReLU
    # vmacc.vv v3, v1, v2
    # Encoding: funct6=101101, vm=1, vs2=v2(00010), vs1=v1(00001), funct3=010, vd=v3(00011)
    .word   0xB620A1D7          # vmacc.vv v3, v1, v2

    # Load second kernel row
    la      a1, kernel_r1
    vle8.v  v2, (a1)            # v2 = [1, 0, -1, 0]
    la      a0, input_r1
    vle8.v  v1, (a0)            # v1 = [5, 6, 7, 0]
    .word   0xB620A1D7          # vmacc.vv v3, v1, v2 (accumulate row 1)

    # Load third kernel row
    la      a1, kernel_r2
    vle8.v  v2, (a1)            # v2 = [1, 0, -1, 0]
    la      a0, input_r2
    vle8.v  v1, (a0)            # v1 = [9, 10, 11, 0]
    .word   0xB620A1D7          # vmacc.vv v3, v1, v2 (accumulate row 2)

    # Now apply ReLU separately: v3 = max(0, v3)
    # vrelu.v v3: funct6=111010, funct3=010 (OPMVV encoding)
    # Encoding: 111010_1_00000_00011_010_00011_1010111
    # = 0xE8019157 ... actually let me check the encoding.
    # vrelu is defined in decoder as funct6=111010
    # 111010 1 00000 00011 010 00011 1010111
    # = 1110_1010_0000_0001_1010_0001_1101_0111
    # = 0xEA01A1D7
    .word   0xEA01A1D7          # vrelu.v v3

    # Store unfused result
    la      a4, result_unfused
    vse8.v  v3, (a4)

    END_PERF_COUNT(t0)

    # ============================================================
    # METHOD 2: Fused vmaccrelu - MAC + ReLU in single instruction
    # ============================================================
    START_PERF_COUNT(t1)

    # Reload data
    la      a0, input_r0
    vle8.v  v1, (a0)
    la      a1, kernel_r0
    vle8.v  v2, (a1)
    la      a2, zeros
    vle8.v  v3, (a2)

    # Fused MAC+ReLU row 0: vmaccrelu.vv v3, v1, v2
    # Encoding: funct6=110010, vm=1, vs2=v2(00010), vs1=v1(00001), funct3=010, vd=v3(00011)
    # 110010_1_00010_00001_010_00011_1010111
    # = 1100_1010_0010_0000_1010_0001_1101_0111
    # = 0xCA20A1D7
    .word   0xCA20A1D7          # vmaccrelu.vv v3, v1, v2

    # Row 1
    la      a1, kernel_r1
    vle8.v  v2, (a1)
    la      a0, input_r1
    vle8.v  v1, (a0)
    .word   0xCA20A1D7          # vmaccrelu.vv v3, v1, v2

    # Row 2
    la      a1, kernel_r2
    vle8.v  v2, (a1)
    la      a0, input_r2
    vle8.v  v1, (a0)
    .word   0xCA20A1D7          # vmaccrelu.vv v3, v1, v2

    # Store fused result
    la      a4, result_fused
    vse8.v  v3, (a4)

    END_PERF_COUNT(t1)

    # Done
    jr      x0


    .data
    .align 4
    .global input_r0, input_r1, input_r2
    .global kernel_r0, kernel_r1, kernel_r2

# Input rows (padded to 4 elements)
input_r0:
    .byte 1, 2, 3, 0
input_r1:
    .byte 5, 6, 7, 0
input_r2:
    .byte 9, 10, 11, 0

# Kernel rows (padded to 4 elements)
kernel_r0:
    .byte 1, 0, -1, 0
kernel_r1:
    .byte 1, 0, -1, 0
kernel_r2:
    .byte 1, 0, -1, 0

zeros:
    .byte 0, 0, 0, 0

    # === Verification region ===
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global result_unfused, result_fused
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
result_unfused:
    .word 0x0    # Expected: [6, 0, 0, 0] (horizontal edge: 1+5+9=15, 0, (-3)+(-7)+(-11)=-21→0 after ReLU)
                 # Actually: per-element: (1*1+5*1+9*1=15, 2*0+6*0+10*0=0, 3*(-1)+7*(-1)+11*(-1)=-21→ReLU→0, 0)
                 # Expected after ReLU: [15, 0, 0, 0]
result_fused:
    .word 0x0    # Should match result_unfused: [15, 0, 0, 0]
vdata_end:

    .align 4
vref_start:
    .word 0x0
vref_end:
