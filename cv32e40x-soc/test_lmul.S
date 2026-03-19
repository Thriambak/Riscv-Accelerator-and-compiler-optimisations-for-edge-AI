# LMUL Test - Verify LMUL=m2 processes 32 INT8 elements (2 register groups)
# Uses vadd.vv with VL=32 (LMUL=m2 @ SEW=8, i.e. 2 regs × 16 elems)
#
# v2-v3 (vs2, LMUL=m2) = [1,2,3,...,32]
# v4-v5 (vs1, LMUL=m2) = [10,10,10,...,10]
# Result in v6-v7 (vd) = [11,12,13,...,42]
#
# vsetvli with e8,m2 should set VL=32.

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Configure: 32 elements, 8-bit, LMUL=m2
    # vtype immediate bits: vsew[4:2]=000(8b), vlmul[1:0]=01(m2)
    # → vtype = 0b00001 = 1
    li      a3, 32
    # vsetvli t0, a3, e8, m2
    # Standard RVV encoding for vsetvli: opcode=1010111, funct3=111, imm[10:0] = vtype
    # vtype for e8,m2: sew=000(8b), lmul=01(m2) → imm = 00000000001
    # Bits: [31]=0, [30:20]=imm, [19:15]=rs1, [14:12]=111, [11:7]=rd, [6:0]=1010111
    # imm=00000000001, rs1=a3(01011), funct3=111, rd=t0(00101), opcode=1010111
    # 0 00000000001 01011 111 00101 1010111
    # = 0000_0000_0010_1011_1110_0101_1010_0111
    # Hmm, the assembler supports vsetvli directly with m2:
    vsetvli t0, a3, e8, m2

    # 3. Load test data: 32 bytes of sequential values into v2-v3
    la      a0, vec_a
    vle8.v  v2, (a0)         # Loads 32 bytes into v2 (first 16) and v3 (next 16)

    la      a1, vec_b
    vle8.v  v4, (a1)         # Loads 32 bytes into v4 (first 16) and v5 (next 16)

    # 4. vadd.vv v6, v4, v2  (all 32 elements)
    vadd.vv v6, v4, v2

    # 5. Store result: 32 bytes from v6-v7
    la      a4, result
    vse8.v  v6, (a4)

    # 6. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    .align 4
    .global vec_a
    .global vec_b

vec_a:
    # 32 sequential values: 1..32
    .byte 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16
    .byte 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32

vec_b:
    # 32 values of 10
    .byte 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10
    .byte 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

    # === Verification region ===
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
    .global result
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
result:
    # 32 bytes of result storage (8 words)
    .word 0, 0, 0, 0, 0, 0, 0, 0
vdata_end:

    .align 4
vref_start:
    # Expected: 11, 12, 13, ..., 42
    .byte 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26
    .byte 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42
vref_end:
