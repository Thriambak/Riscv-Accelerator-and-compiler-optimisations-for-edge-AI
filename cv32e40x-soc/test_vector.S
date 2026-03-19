# Copyright TU Wien
# Licensed under the ISC license, see LICENSE.txt for details
# SPDX-License-Identifier: ISC

#include "perf.h"

    .text
    .global main
main:
    # (XIF enables coprocessor via X_EXT parameter, no mstatus writes needed)
    
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Vector Array Addition Workload using AVA custom instructions
    # Adds two arrays of 32 8-bit elements
    la      a0, array_a
    la      a1, array_b
    la      a2, array_c
    li      a3, 32              # length

    # Configuration: e8 = 8-bit elements
    vsetvli t0, a3, e8

    # Vector Load
    vle8.v  v1, (a0)            # load vector array A into v1
    vle8.v  v2, (a1)            # load vector array B into v2

    # Vector Add
    vadd.vv v3, v1, v2          # v3 = v1 + v2

    # Vector Store
    vse8.v  v3, (a2)            # store v3 into array C

    # 3. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    # Use explicit alignment for the memory vectors
    .align 4
    .global array_a
    .global array_b
    .global array_c
    .global perf_start
    .global perf_end

array_a:
    .byte 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16
    .byte 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32

array_b:
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

array_c:
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

    # Ensure performance counters are exactly at aligned memory locations
    .align 4
    .global vdata_start
    .global vdata_end
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
vdata_end:

    .align 4
    .global vref_start
    .global vref_end
vref_start:
    .word 0x0
vref_end:
