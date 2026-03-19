# Copyright TU Wien
# Licensed under the ISC license, see LICENSE.txt for details
# SPDX-License-Identifier: ISC

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Scalar Array Addition Workload
    # Adds two arrays of 32 8-bit elements, stores in a third array
    la      a0, array_a
    la      a1, array_b
    la      a2, array_c
    li      t1, 32            # loop count (32 elements)

scalar_loop:
    lb      t2, 0(a0)         # load byte from A
    lb      t3, 0(a1)         # load byte from B
    add     t4, t2, t3        # add
    sb      t4, 0(a2)         # store byte to C

    addi    a0, a0, 1         # increment pointer A
    addi    a1, a1, 1         # increment pointer B
    addi    a2, a2, 1         # increment pointer C
    addi    t1, t1, -1        # decrement loop counter
    bnez    t1, scalar_loop   # if t1 != 0, repeat

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
