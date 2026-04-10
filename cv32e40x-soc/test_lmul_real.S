# LMUL Register Grouping Benchmark
# Tests that LMUL=2 correctly processes 8 elements (2 register groups)
# with a single vadd instruction.
#
# Setup:
#   vsetvli with SEW=8, LMUL=2 → VL should be 8  (4 elements/reg × 2 regs)
#   v0  = [1, 2, 3, 4]      (first 4 elements of vs2 group)
#   v1  = [5, 6, 7, 8]      (second 4 elements of vs2 group)
#   v4  = [10, 20, 30, 40]  (first 4 elements of vs1 group)
#   v5  = [50, 60, 70, 80]  (second 4 elements of vs1 group)
#   vadd.vv v8, v0, v4      → v8=[11,22,33,44], v9=[55,66,77,88]
#
# Expected:  v8 = [11, 22, 33, 44]   (1+10, 2+20, 3+30, 4+40)
#            v9 = [55, 66, 77, 88]   (5+50, 6+60, 7+70, 8+80)

#include "perf.h"

    .text
    .global main
main:
    # Configure vector unit: SEW=8, LMUL=2 → vtype = sew[3:2]=00, vlmul[1:0]=01
    # vtype immediate = 0b00001 = 1 (SEW=8, LMUL=2)
    li      a0, 8          # AVL = 8 elements
    vsetvli t0, a0, e8, m2 # Set VL=8, SEW=8-bit, LMUL=2

    # Load test data into register groups
    # vs2 group: v0, v1
    la      a0, vs2_data
    vle8.v  v0, (a0)       # Load 8 bytes into v0+v1 group

    # vs1 group: v4, v5
    la      a1, vs1_data
    vle8.v  v4, (a1)       # Load 8 bytes into v4+v5 group

    START_PERF_COUNT(t0)

    # vadd with LMUL=2: should process v8=v0+v4 AND v9=v1+v5
    vadd.vv v8, v0, v4

    END_PERF_COUNT(t0)

    # Store result for verification
    la      a2, result_data
    vse8.v  v8, (a2)       # Store 8 bytes from v8+v9 group

    # Calculate cycles
    la      t1, perf_start
    lw      t2, 0(t1)
    la      t1, perf_end
    lw      t3, 0(t1)
    sub     t4, t3, t2

    la      t1, scalar_cycles
    sw      t4, 0(t1)

    jr      x0


    .data
    .align 4
    .global vs2_data, vs1_data, result_data

vs2_data:
    .byte 1, 2, 3, 4, 5, 6, 7, 8       # v0=[1,2,3,4], v1=[5,6,7,8]
vs1_data:
    .byte 10, 20, 30, 40, 50, 60, 70, 80  # v4=[10,20,30,40], v5=[50,60,70,80]
result_data:
    .space 8                             # v8=[?], v9=[?]

    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global scalar_cycles

vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
scalar_cycles:
    .word 0x0
vdata_end:

    .align 4
    .global vref_start, vref_end
vref_start:
    .word 0x0
vref_end:
