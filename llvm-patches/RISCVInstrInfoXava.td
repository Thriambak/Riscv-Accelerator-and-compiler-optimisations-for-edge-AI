//===-- RISCVInstrInfoXava.td - AVA custom vector instructions --*- tablegen -*-//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// AVA (AI Vector Accelerator) vendor extension instructions for RISC-V.
//
// These instructions extend the RVV (RISC-V Vector) ISA with custom
// operations for DNN inference: packed dot products, activation functions,
// fused MAC variants, and requantization.
//
// Encoding layout (V-type, 32 bits):
//   [31:26] funct6
//   [25]    vm (1=unmasked)
//   [24:20] vs2
//   [19:15] vs1/rs1
//   [14:12] funct3
//   [11:7]  vd
//   [6:0]   opcode = 0x57 (OP-V)
//
// Reference: P26 (10xEngineers, RISC-V Europe 2024), P27 (IEEE Access 2024)
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Predicates
//===----------------------------------------------------------------------===//

def HasVendorXava : Predicate<"Subtarget->hasVendorXava()">,
                    AssemblerPredicate<(all_of FeatureVendorXava),
                                       "'Xava' (AVA custom vector extensions)">;

//===----------------------------------------------------------------------===//
// Instruction format classes
//===----------------------------------------------------------------------===//

// Base format for V-type AVA instructions (vector-vector, OPMVV/OPIVV)
// funct6[31:26] | vm[25] | vs2[24:20] | vs1[19:15] | funct3[14:12] | vd[11:7] | 0x57[6:0]
class AVA_VV<bits<6> funct6, bits<3> funct3, string opcodestr>
    : RVInst<(outs VR:$vd), (ins VR:$vs2, VR:$vs1),
             opcodestr, "$vd, $vs2, $vs1", [], InstFormatR> {
  bits<5> vd;
  bits<5> vs2;
  bits<5> vs1;

  let Inst{31-26} = funct6;
  let Inst{25}    = 1;           // vm=1 (unmasked)
  let Inst{24-20} = vs2;
  let Inst{19-15} = vs1;
  let Inst{14-12} = funct3;
  let Inst{11-7}  = vd;
  let Inst{6-0}   = 0b1010111;  // OP-V = 0x57

  let Predicates = [HasVendorXava];
  let hasSideEffects = 1;
  let mayLoad = 0;
  let mayStore = 0;
}

// Format for unary vector instructions (activation functions)
// vs1 field is fixed to 0 (unused operand)
class AVA_V_Unary<bits<6> funct6, bits<3> funct3, string opcodestr>
    : RVInst<(outs VR:$vd), (ins VR:$vs2),
             opcodestr, "$vd, $vs2", [], InstFormatR> {
  bits<5> vd;
  bits<5> vs2;

  let Inst{31-26} = funct6;
  let Inst{25}    = 1;           // vm=1
  let Inst{24-20} = vs2;
  let Inst{19-15} = 0b00000;    // vs1=0 (unused)
  let Inst{14-12} = funct3;
  let Inst{11-7}  = vd;
  let Inst{6-0}   = 0b1010111;

  let Predicates = [HasVendorXava];
  let hasSideEffects = 1;
  let mayLoad = 0;
  let mayStore = 0;
}

// Format for vector-scalar instructions (OPMVX)
// rs1 comes from a GPR (scalar register)
class AVA_VX<bits<6> funct6, bits<3> funct3, string opcodestr>
    : RVInst<(outs VR:$vd), (ins VR:$vs2, GPR:$rs1),
             opcodestr, "$vd, $vs2, $rs1", [], InstFormatR> {
  bits<5> vd;
  bits<5> vs2;
  bits<5> rs1;

  let Inst{31-26} = funct6;
  let Inst{25}    = 1;           // vm=1
  let Inst{24-20} = vs2;
  let Inst{19-15} = rs1;
  let Inst{14-12} = funct3;
  let Inst{11-7}  = vd;
  let Inst{6-0}   = 0b1010111;

  let Predicates = [HasVendorXava];
  let hasSideEffects = 1;
  let mayLoad = 0;
  let mayStore = 0;
}

// Nullary instruction (no meaningful operands — utility/performance counter)
class AVA_Nullary<bits<6> funct6, bits<3> funct3, string opcodestr>
    : RVInst<(outs VR:$vd), (ins),
             opcodestr, "$vd", [], InstFormatR> {
  bits<5> vd;

  let Inst{31-26} = funct6;
  let Inst{25}    = 1;           // vm=1
  let Inst{24-20} = 0b00000;    // vs2=0
  let Inst{19-15} = 0b00000;    // vs1=0
  let Inst{14-12} = funct3;
  let Inst{11-7}  = vd;
  let Inst{6-0}   = 0b1010111;

  let Predicates = [HasVendorXava];
  let hasSideEffects = 1;
  let mayLoad = 0;
  let mayStore = 0;
}

//===----------------------------------------------------------------------===//
// Instruction definitions
//===----------------------------------------------------------------------===//

// All AVA instruction defs use the XAVA_ prefix to avoid name collisions
// with standard RVV instructions (e.g., VMACC_VV already exists in
// RISCVInstrInfoV.td via "defm VMACC_V : VMAC_MV_V_X").
//
// Assembly mnemonics use the "xava." vendor prefix to distinguish from
// standard RVV mnemonics on the assembler side.
//
// funct3 constants matching accelerator_pkg.sv:
//   OPIVV = 3'b000 = 0
//   OPMVV = 3'b010 = 2
//   OPMVX = 3'b110 = 6

//--- Packed Dot Products (accumulate into vd) --------------------------------
// vpdot.vv: int8 packed dot product (4 elements per cycle)
// funct6=110000 (0x30), funct3=OPMVV (010)
def XAVA_VPDOT_VV  : AVA_VV<0b110000, 0b010, "xava.vpdot.vv">;

// vpdot4.vv: int4 packed dot product (8 elements per cycle)
// funct6=110101 (0x35), funct3=OPMVV (010)
def XAVA_VPDOT4_VV : AVA_VV<0b110101, 0b010, "xava.vpdot4.vv">;

// vdot.vv: standard element-wise dot product
// funct6=111100 (0x3C), funct3=OPMVV (010)
def XAVA_VDOT_VV   : AVA_VV<0b111100, 0b010, "xava.vdot.vv">;

//--- Fused MAC ---------------------------------------------------------------
// vmacc.vv: vector multiply-accumulate (vd += vs2 * vs1)
// funct6=101101 (0x2D), funct3=OPMVV (010)
def XAVA_VMACC_VV  : AVA_VV<0b101101, 0b010, "xava.vmacc.vv">;

//--- Activation Functions (unary: vd = f(vs2)) ------------------------------
// vrelu.vv: Rectified Linear Unit — max(0, x)
// funct6=111110 (0x3E), funct3=OPIVV (000)
def XAVA_VRELU_VV     : AVA_V_Unary<0b111110, 0b000, "xava.vrelu.vv">;

// vsigmoid.vv: Sigmoid approximation via LUT
// funct6=100010 (0x22), funct3=OPIVV (000)
def XAVA_VSIGMOID_VV  : AVA_V_Unary<0b100010, 0b000, "xava.vsigmoid.vv">;

// vtanh.vv: Tanh approximation via LUT
// funct6=100011 (0x23), funct3=OPIVV (000)
def XAVA_VTANH_VV     : AVA_V_Unary<0b100011, 0b000, "xava.vtanh.vv">;

//--- Requantization (vector-scalar) ------------------------------------------
// vrequant.vx: requantize vd elements using scalar shift/scale from rs1
// funct6=111111 (0x3F), funct3=OPMVX (110)
def XAVA_VREQUANT_VX  : AVA_VX<0b111111, 0b110, "xava.vrequant.vx">;

//--- Performance Counter (nullary) -------------------------------------------
// vperf: read accelerator cycle counter into vd
// funct6=111101 (0x3D), funct3=OPMVV (010)
def XAVA_VPERF        : AVA_Nullary<0b111101, 0b010, "xava.vperf">;
