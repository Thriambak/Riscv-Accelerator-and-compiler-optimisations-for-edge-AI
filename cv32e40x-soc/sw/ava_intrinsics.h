////////////////////////////////////////////////////////////////////////////////
// ava_intrinsics.h — Portable macros for AVA custom vector instructions
//
// Uses .word raw encoding for custom instructions (most reliable with GCC
// assembler for non-standard V-type extensions). Standard RVV instructions
// use their built-in mnemonics.
//
// Encoding layout for V-type instructions (32 bits):
//   [31:26] funct6
//   [25]    vm (1=unmasked, 0=masked)
//   [24:20] vs2/rs2
//   [19:15] vs1/rs1
//   [14:12] funct3
//   [11:7]  vd/rd
//   [6:0]   opcode (0x57 = OP-V)
//
// Macro: AVA_V_ENCODE(funct6, vm, vs2, vs1, funct3, vd)
//   Produces: .word
//   ((funct6<<26)|(vm<<25)|(vs2<<20)|(vs1<<15)|(funct3<<12)|(vd<<7)|0x57)
//
// Verified against: vector_decoder.sv, accelerator_pkg.sv
////////////////////////////////////////////////////////////////////////////////
#ifndef AVA_INTRINSICS_H
#define AVA_INTRINSICS_H

#include <stdint.h>

// Core encoding helper — generates a 32-bit V-type instruction word
#define AVA_V_ENCODE(funct6, vm, vs2, vs1, funct3, vd)                         \
  (((funct6) << 26) | ((vm) << 25) | ((vs2) << 20) | ((vs1) << 15) |           \
   ((funct3) << 12) | ((vd) << 7) | 0x57)

// Emit a raw instruction word
#define AVA_EMIT(word) asm volatile(".word " #word)

// Helper to compute and emit at compile time (uses stringify)
#define AVA_EMIT_V(funct6, vm, vs2, vs1, funct3, vd)                           \
  asm volatile(".word %0"                                                      \
               :                                                               \
               : "i"(AVA_V_ENCODE(funct6, vm, vs2, vs1, funct3, vd)))

////////////////////////////////////////////////////////////////////////////////
// CONFIGURATION
////////////////////////////////////////////////////////////////////////////////

// vsetvli rd, rs1, vtypei — uses I-type encoding
// Works with standard .insn i since it's the config opcode (funct3=7)
#define AVA_VSETVLI(vl_var, avl_var, vtypei)                                   \
  asm volatile(".insn i 0x57, 7, %0, %1, " #vtypei                             \
               : "=r"(vl_var)                                                  \
               : "r"(avl_var))

#define AVA_VSETVLI_IMM(vtypei)                                                \
  asm volatile(".insn i 0x57, 7, x0, x0, " #vtypei)

////////////////////////////////////////////////////////////////////////////////
// VECTOR LOAD / STORE (standard RVV mnemonics — assembler supports these)
////////////////////////////////////////////////////////////////////////////////

#define AVA_VLE8(vd, ptr)                                                      \
  asm volatile("vle8.v v" #vd ", (%0)" : : "r"(ptr) : "memory")
#define AVA_VLE32(vd, ptr)                                                     \
  asm volatile("vle32.v v" #vd ", (%0)" : : "r"(ptr) : "memory")
#define AVA_VSE8(vs3, ptr)                                                     \
  asm volatile("vse8.v v" #vs3 ", (%0)" : : "r"(ptr) : "memory")
#define AVA_VSE32(vs3, ptr)                                                    \
  asm volatile("vse32.v v" #vs3 ", (%0)" : : "r"(ptr) : "memory")

////////////////////////////////////////////////////////////////////////////////
// STANDARD RVV (assembler-supported mnemonics)
////////////////////////////////////////////////////////////////////////////////

#define AVA_VMV_VI(vd, imm) asm volatile("vmv.v.i v" #vd ", " #imm)
#define AVA_VMV_VX(vd, scalar)                                                 \
  asm volatile("vmv.v.x v" #vd ", %0" : : "r"(scalar))
#define AVA_VMV_XS(dest, vs2) asm volatile("vmv.x.s %0, v" #vs2 : "=r"(dest))
#define AVA_VREDSUM(vd, vs2, vs1)                                              \
  asm volatile("vredsum.vs v" #vd ", v" #vs2 ", v" #vs1)

////////////////////////////////////////////////////////////////////////////////
// CUSTOM AVA: PACKED DOT PRODUCTS (raw .word encoding)
//
// vpdot.vv:  funct6=110000(0x30), funct3=OPMVV(010=2)
// vpdot4.vv: funct6=110101(0x35), funct3=OPMVV(010=2)
// vdot.vv:   funct6=111100(0x3C), funct3=OPMVV(010=2)
////////////////////////////////////////////////////////////////////////////////

#ifdef __clang__
#define AVA_VPDOT_VV(vd, vs2, vs1) __builtin_riscv_xava_vpdot(vd, vs2, vs1)
#define AVA_VPDOT4_VV(vd, vs2, vs1) __builtin_riscv_xava_vpdot4(vd, vs2, vs1)
#define AVA_VDOT_VV(vd, vs2, vs1) __builtin_riscv_xava_vdot(vd, vs2, vs1)
#else
#define AVA_VPDOT_VV(vd, vs2, vs1) AVA_EMIT_V(0x30, 1, vs2, vs1, 2, vd)
#define AVA_VPDOT4_VV(vd, vs2, vs1) AVA_EMIT_V(0x35, 1, vs2, vs1, 2, vd)
#define AVA_VDOT_VV(vd, vs2, vs1) AVA_EMIT_V(0x3C, 1, vs2, vs1, 2, vd)
#endif

////////////////////////////////////////////////////////////////////////////////
// CUSTOM AVA: FUSED MAC VARIANTS
//
// vmacc.vv:     funct6=101101(0x2D), funct3=OPMVV(2)
// vmacc.vx:     funct6=101101(0x2D), funct3=OPMVX(6)
// vwmacc.vv:    funct6=101110(0x2E), funct3=OPMVV(2)
// vmaccoff.vv:  funct6=101111(0x2F), funct3=OPMVV(2)
// vmaccrelu.vv: funct6=110010(0x32), funct3=OPMVV(2)
// vmaccclamp.vv:funct6=110011(0x33), funct3=OPMVV(2)
// vlemacc:      funct6=110100(0x34), funct3=OPMVV(2)
////////////////////////////////////////////////////////////////////////////////

#ifdef __clang__
#define AVA_VMACC_VV(vd, vs2, vs1) __builtin_riscv_xava_vmacc(vd, vs2, vs1)
#else
#define AVA_VMACC_VV(vd, vs2, vs1) AVA_EMIT_V(0x2D, 1, vs2, vs1, 2, vd)
#endif
#define AVA_VMACC_VX(vd, vs2, rs1) AVA_EMIT_V(0x2D, 1, vs2, rs1, 6, vd)
#define AVA_VWMACC_VV(vd, vs2, vs1) AVA_EMIT_V(0x2E, 1, vs2, vs1, 2, vd)
#define AVA_VMACCOFF_VV(vd, vs2, vs1) AVA_EMIT_V(0x2F, 1, vs2, vs1, 2, vd)
#define AVA_VMACCRELU_VV(vd, vs2, vs1) AVA_EMIT_V(0x32, 1, vs2, vs1, 2, vd)
#define AVA_VMACCCLAMP_VV(vd, vs2, vs1) AVA_EMIT_V(0x33, 1, vs2, vs1, 2, vd)
#define AVA_VLEMACC_VV(vd, vs2, vs1) AVA_EMIT_V(0x34, 1, vs2, vs1, 2, vd)

////////////////////////////////////////////////////////////////////////////////
// CUSTOM AVA: ACTIVATION FUNCTIONS
//
// vsigmoid: funct6=100010(0x22), funct3=OPIVV(0), operand_select=ZERO(vs1=0)
// vtanh:    funct6=100011(0x23), funct3=OPIVV(0)
// vrelu:    funct6=111110(0x3E), funct3=OPIVV(0)
// vabs:     funct6=111000(0x38), funct3=OPIVV(0)
// vlrelu:   funct6=111001(0x39), funct3=OPIVX(4)
// vclamp:   funct6=111010(0x3A), funct3=OPIVX(4)
// vrequant: funct6=111111(0x3F), funct3=OPMVX(6)
////////////////////////////////////////////////////////////////////////////////

#ifdef __clang__
#define AVA_VSIGMOID(vd, vs2) __builtin_riscv_xava_vsigmoid(vd, vs2)
#define AVA_VTANH(vd, vs2) __builtin_riscv_xava_vtanh(vd, vs2)
#define AVA_VRELU(vd, vs2) __builtin_riscv_xava_vrelu(vd, vs2)
#else
#define AVA_VSIGMOID(vd, vs2) AVA_EMIT_V(0x22, 1, vs2, 0, 0, vd)
#define AVA_VTANH(vd, vs2) AVA_EMIT_V(0x23, 1, vs2, 0, 0, vd)
#define AVA_VRELU(vd, vs2) AVA_EMIT_V(0x3E, 1, vs2, 0, 0, vd)
#endif
#define AVA_VABS(vd, vs2) AVA_EMIT_V(0x38, 1, vs2, 0, 0, vd)
#define AVA_VLRELU(vd, vs2) AVA_EMIT_V(0x39, 1, vs2, 0, 4, vd)
#define AVA_VCLAMP(vd, vs2) AVA_EMIT_V(0x3A, 1, vs2, 0, 4, vd)

#ifdef __clang__
#define AVA_VREQUANT(vd, vs2, rs1) __builtin_riscv_xava_vrequant(vd, vs2, rs1)
#else
#define AVA_VREQUANT(vd, vs2, rs1) AVA_EMIT_V(0x3F, 1, vs2, rs1, 6, vd)
#endif

////////////////////////////////////////////////////////////////////////////////
// CUSTOM AVA: N:M STRUCTURED SPARSITY (NEW)
//
// vspmeta:    funct6=100100(0x24), funct3=OPMVX(6) — load sparse metadata
// vspdot.vv:  funct6=100110(0x26), funct3=OPMVV(2) — sparse packed dot product
////////////////////////////////////////////////////////////////////////////////

// Load sparse metadata word into the accelerator's metadata register
// vspmeta encoding: funct6=100100, vm=1, vs2=0, rs1=scalar, funct3=OPMVX(110),
// vd=0 Uses .insn r with numeric funct7 field since the scalar comes from a
// register
#define AVA_VSPMETA(scalar_var)                                                \
  asm volatile(".insn r 0x57, 6, 0x49, x0, %0, x0"                             \
               :                                                               \
               : "r"((uint32_t)(scalar_var)))

// Sparse packed dot product using compacted operands
// Uses the metadata to skip zero elements in the dot product
#define AVA_VSPDOT_VV(vd, vs2, vs1) AVA_EMIT_V(0x26, 1, vs2, vs1, 2, vd)

////////////////////////////////////////////////////////////////////////////////
// CUSTOM AVA: UTILITY
//
// vperf: funct6=111101(0x3D), funct3=OPMVV(2)
////////////////////////////////////////////////////////////////////////////////

#ifdef __clang__
#define AVA_VPERF(vd) __builtin_riscv_xava_vperf(vd)
#else
#define AVA_VPERF(vd) AVA_EMIT_V(0x3D, 1, 0, 0, 2, vd)
#endif

////////////////////////////////////////////////////////////////////////////////
// PERFORMANCE MEASUREMENT (CSR cycle counter — not AVA-specific)
////////////////////////////////////////////////////////////////////////////////
#define PERF_BEGIN(var) asm volatile("csrr %0, cycle" : "=r"(var))
#define PERF_END(var) asm volatile("csrr %0, cycle" : "=r"(var))

#endif // AVA_INTRINSICS_H
