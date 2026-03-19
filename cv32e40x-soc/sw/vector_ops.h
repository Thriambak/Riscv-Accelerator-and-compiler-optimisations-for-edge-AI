/*
 * vector_ops.h - C inline asm wrappers for AVA custom vector instructions
 *
 * Usage: #include "vector_ops.h"
 *
 * All instructions are encoded as .word directives since the toolchain
 * doesn't natively support AVA's custom funct6 encodings.
 *
 * Register conventions:
 *   vs2 = first vector operand (a)
 *   vs1 = second vector operand (b)
 *   vd  = destination / accumulator
 *   rs1 = scalar operand (for .vx variants)
 */

#ifndef VECTOR_OPS_H
#define VECTOR_OPS_H

#include <stdint.h>

/* ======================================================================
 * Instruction encoding helpers
 *
 * OP-V format: [31:26]funct6 [25]vm [24:20]vs2 [19:15]vs1 [14:12]funct3
 *              [11:7]vd [6:0]opcode(1010111)
 *
 * funct3: 000=OPIVV, 010=OPMVV, 110=OPMVX
 * ====================================================================== */

/* Encode an OPMVV instruction (funct3=010) */
#define _AVA_OPMVV(funct6, vs2, vs1, vd)                                       \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((vs1) << 15) |              \
   (0b010 << 12) | ((vd) << 7) | 0b1010111)

/* Encode an OPMVX instruction (funct3=110) */
#define _AVA_OPMVX(funct6, vs2, rs1, vd)                                       \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((rs1) << 15) |              \
   (0b110 << 12) | ((vd) << 7) | 0b1010111)

/* Encode an OPIVV instruction (funct3=000) */
#define _AVA_OPIVV(funct6, vs2, vs1, vd)                                       \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((vs1) << 15) |              \
   (0b000 << 12) | ((vd) << 7) | 0b1010111)

/* ======================================================================
 * Custom instruction funct6 encodings
 * ====================================================================== */
#define FUNCT6_VMACC 0b101101      /* Standard MAC */
#define FUNCT6_VWMACC 0b101110     /* Widening MAC (INT8→INT32) */
#define FUNCT6_VMACCOFF 0b101111   /* Offset MAC: (a+offA)*(b+offB)+c */
#define FUNCT6_VPDOT 0b110000      /* Packed INT8 SIMD dot (4 MACs/PE) */
#define FUNCT6_VMACCRELU 0b110010  /* Fused MAC + ReLU */
#define FUNCT6_VMACCCLAMP 0b110011 /* Fused MAC + Clamp (ReLU6) */
#define FUNCT6_VRELU 0b111010      /* ReLU: max(0, x) */

/* ======================================================================
 * High-level C wrappers
 *
 * These use inline asm with .word to emit the custom instructions.
 * Note: Vector register allocation is fixed (not C-ABI managed).
 * Users must manually manage vector register usage.
 * ====================================================================== */

/* --- Vector configuration --- */
static inline uint32_t ava_vsetvli(uint32_t avl, uint32_t vtype) {
  uint32_t vl;
  asm volatile("vsetvli %0, %1, e8" : "=r"(vl) : "r"(avl));
  return vl;
  (void)vtype; /* vtype is encoded in the instruction */
}

/* --- Load/Store --- */
static inline void ava_vle8(int vreg, const int8_t *base) {
  /* Can't parameterize vreg in inline asm easily, use v1-v4 directly */
  (void)vreg;
  (void)base;
  /* User should use asm volatile("vle8.v vN, (%0)" : : "r"(base)); */
}

/* --- MAC instructions --- */

/* vmacc.vv vd, vs1, vs2: vd[i] += vs2[i] * vs1[i] */
#define AVA_VMACC_VV(vd, vs1, vs2)                                             \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VMACC, vs2, vs1, vd)))

/* vwmacc.vv vd, vs1, vs2: widening MAC (INT8→INT32) */
#define AVA_VWMACC_VV(vd, vs1, vs2)                                            \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VWMACC, vs2, vs1, vd)))

/* vmaccrelu.vv vd, vs1, vs2: fused MAC + ReLU */
#define AVA_VMACCRELU_VV(vd, vs1, vs2)                                         \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VMACCRELU, vs2, vs1, vd)))

/* vmaccclamp.vv vd, vs1, vs2: fused MAC + Clamp */
#define AVA_VMACCCLAMP_VV(vd, vs1, vs2)                                        \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VMACCCLAMP, vs2, vs1, vd)))

/* vpdot.vv vd, vs1, vs2: packed INT8 SIMD dot product (4 MACs/PE) */
#define AVA_VPDOT_VV(vd, vs1, vs2)                                             \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VPDOT, vs2, vs1, vd)))

/* vrelu.v vd: ReLU activation on vd */
#define AVA_VRELU_V(vd)                                                        \
  asm volatile(".word %0" ::"i"(_AVA_OPMVV(FUNCT6_VRELU, 0, vd, vd)))

/* vmaccoff.vx vd, vs2, rs1: offset MAC with packed offsets in scalar */
/* rs1 = {offsetB[15:8], offsetA[7:0]} */
#define AVA_VMACCOFF_VX(vd, vs2, offsets_reg)                                  \
  asm volatile(                                                                \
      ".word %0" ::"i"(_AVA_OPMVX(FUNCT6_VMACCOFF, vs2, offsets_reg, vd)))

/* ======================================================================
 * Performance counter macros (from perf.h, re-exported for convenience)
 * ====================================================================== */
#define AVA_PERF_START(tmp) asm volatile("csrr %0, mcycle" : "=r"(tmp))

#define AVA_PERF_END(tmp, start_val)                                           \
  do {                                                                         \
    uint32_t _end;                                                             \
    asm volatile("csrr %0, mcycle" : "=r"(_end));                              \
    (tmp) = _end - (start_val);                                                \
  } while (0)

/* ======================================================================
 * Vector register number constants (for macro arguments)
 * ====================================================================== */
#define V0 0
#define V1 1
#define V2 2
#define V3 3
#define V4 4
#define V5 5
#define V6 6
#define V7 7
#define V8 8
#define V9 9
#define V10 10
#define V11 11
#define V12 12
#define V13 13
#define V14 14
#define V15 15

#endif /* VECTOR_OPS_H */
