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

    # 2. Vector Array Dot Product Workload using vpdot.vv
    la      a0, array_a
    la      a1, array_b
    li      a3, 1024              # length

    # Configuration: e32, m8 (vtype=11)
    .insn i 0x57, 7, x0, x0, 11
    vmv.v.i v3, 0

    srli    a4, a3, 2             # blocks = length / 4 (since vpdot processes 4 int8 per int32)

loop_vpdot:
    # vsetvli t1, a4, e32, m4 (vtype=10)
    .insn i 0x57, 7, t1, a4, 10
    vle32.v v1, (a0)
    vle32.v v2, (a1)
    
    # vpdot.vv v3, v1, v2 (custom encoding)
    .word 0x2420a1d7
    
    slli    t2, t1, 2
    add     a0, a0, t2
    add     a1, a1, t2
    sub     a4, a4, t1
    bnez    a4, loop_vpdot

    # Configuration: e32, m8 (vtype=11)
    .insn i 0x57, 7, x0, x0, 11
    
    # Store result
    la      a2, array_c
    vmv.s.x v0, zero
    vredsum.vs v0, v3, v0
    vse32.v v0, (a2)

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
    .fill 1024, 1, 1

array_b:
    .fill 1024, 1, 2

array_c:
    .word 0

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
