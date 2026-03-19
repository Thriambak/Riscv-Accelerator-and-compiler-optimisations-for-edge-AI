# Dot Product Benchmark using custom vdot instruction
# Computes dot(A, B) = sum(A[i] * B[i]) for 16 8-bit elements
# Expected result: 1+2+3+...+16 = 136

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Setup pointers and length
    la      a0, vec_a           # pointer to vector A
    la      a1, vec_b           # pointer to vector B
    li      a3, 16              # 16 elements

    # 3. Configure vector unit: 8-bit elements
    vsetvli t0, a3, e8          # set vl=16, sew=8

    # 4. Load two vectors into vector registers
    vle8.v  v1, (a0)            # v1 = A[0..15]
    vle8.v  v2, (a1)            # v2 = B[0..15]

    # 5. Custom dot product instruction
    # Encoding breakdown:
    #   funct6=111100 (0x3C), vs2=v2(00010), vs1=v1(00001),
    #   funct3=010 (OPMVV), vd=v0(00000), opcode=1010111 (OP-V)
    #   = 1111_00_00010_00001_010_00000_1010111
    #   = 0xF0209057
    .word   0xF0209057          # vdot v0, v2, v1

    # 6. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    .align 4
    .global vec_a
    .global vec_b

vec_a:
    .byte 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16

vec_b:
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

    # Performance counter storage
    .align 4
    .global vdata_start
    .global vdata_end
    .global perf_start
    .global perf_end
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
