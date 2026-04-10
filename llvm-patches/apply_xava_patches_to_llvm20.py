#!/usr/bin/env python3
"""
Apply AVA (Xava) custom vector instruction patches to LLVM 20.x source tree.

This script is IDEMPOTENT — safe to run multiple times on the same source tree.
It will:
  1. Restore any previously corrupted files via `git checkout`
  2. Re-apply all patches cleanly
  3. Copy RISCVInstrInfoXava.td from the patch directory

Root cause history:
  - LLVM 20.x uses `RISCVExtension` class (not raw SubtargetFeature)
  - Previous scripts corrupted RISCVFeatures.td by appending SubtargetFeature
    definitions, causing "expected name for ClassID" errors at the Zicbom line.
"""
import os
import sys
import shutil
import subprocess

XAVA_MARKER = "// === AVA-XAVA-PATCH ==="

def require_dir(d):
    if not os.path.isdir(d):
        print(f"Error: Directory {d} does not exist!")
        sys.exit(1)

def git_restore(src_dir, relpath):
    """Restore a file to its original git state (undo any prior corruption)."""
    full = os.path.join(src_dir, relpath)
    try:
        subprocess.run(
            ["git", "checkout", "--", relpath],
            cwd=src_dir, check=True,
            stdout=subprocess.PIPE, stderr=subprocess.PIPE
        )
        print(f"  [RESET] {relpath} restored to pristine state")
    except subprocess.CalledProcessError:
        print(f"  [WARN] Could not git-restore {relpath} (may not be a git repo)")

def strip_xava_block(content):
    """Remove any lines between XAVA_MARKER blocks (inclusive)."""
    lines = content.split('\n')
    out, inside = [], False
    for line in lines:
        if XAVA_MARKER in line:
            inside = not inside
            continue
        if not inside:
            out.append(line)
    return '\n'.join(out)

def apply_xava_patches(src_dir):
    require_dir(src_dir)
    patch_dir = os.path.dirname(os.path.abspath(__file__))
    print("=" * 72)
    print("  Applying AVA Xava patches to LLVM 20.x source tree")
    print("  Source: " + src_dir)
    print("=" * 72)

    # -------------------------------------------------------------------------
    # Step 0: Restore files that may have been corrupted by previous runs
    # -------------------------------------------------------------------------
    print("\n[0/8] Restoring files to pristine state...")
    files_to_restore = [
        'llvm/lib/Target/RISCV/RISCVFeatures.td',
        'llvm/lib/Target/RISCV/RISCVInstrInfo.td',
        'llvm/lib/TargetParser/RISCVISAInfo.cpp',
        'llvm/include/llvm/IR/IntrinsicsRISCV.td',
        'clang/include/clang/Basic/BuiltinsRISCV.td',
        'clang/lib/CodeGen/CGBuiltin.cpp',
    ]
    for relpath in files_to_restore:
        git_restore(src_dir, relpath)

    # -------------------------------------------------------------------------
    # 1. RISCVFeatures.td — use RISCVExtension (NOT raw SubtargetFeature)
    # -------------------------------------------------------------------------
    print("\n[1/8] Patching RISCVFeatures.td...")
    features_td = os.path.join(src_dir, 'llvm/lib/Target/RISCV/RISCVFeatures.td')
    with open(features_td, 'r') as f:
        content = f.read()
    if 'FeatureVendorXava' not in content:
        # Ensure file ends with a newline before appending
        if not content.endswith('\n'):
            content += '\n'
        content += f"""
{XAVA_MARKER}
//===----------------------------------------------------------------------===//
// AVA (AI Vector Accelerator) Vendor Extension
//===----------------------------------------------------------------------===//

def FeatureVendorXava
    : RISCVExtension<1, 0, "AVA custom vector instructions for DNN inference",
                     [FeatureStdExtZve32x]>;
{XAVA_MARKER}
"""
        with open(features_td, 'w') as f:
            f.write(content)
        print("  Patched RISCVFeatures.td (using RISCVExtension class)")
    else:
        print("  RISCVFeatures.td already patched, skipping")

    # -------------------------------------------------------------------------
    # 2. RISCVInstrInfo.td — include the Xava instruction definitions
    # -------------------------------------------------------------------------
    print("\n[2/8] Patching RISCVInstrInfo.td...")
    instr_td = os.path.join(src_dir, 'llvm/lib/Target/RISCV/RISCVInstrInfo.td')
    with open(instr_td, 'r') as f:
        content = f.read()
    if 'RISCVInstrInfoXava.td' not in content:
        if not content.endswith('\n'):
            content += '\n'
        content += f"""
{XAVA_MARKER}
//===----------------------------------------------------------------------===//
// AVA Vendor Extension
//===----------------------------------------------------------------------===//
include "RISCVInstrInfoXava.td"
{XAVA_MARKER}
"""
        with open(instr_td, 'w') as f:
            f.write(content)
        print("  Patched RISCVInstrInfo.td")
    else:
        print("  RISCVInstrInfo.td already patched, skipping")

    # -------------------------------------------------------------------------
    # 3. Copy RISCVInstrInfoXava.td to the RISCV target directory
    # -------------------------------------------------------------------------
    print("\n[3/8] Copying RISCVInstrInfoXava.td...")
    src_instr = os.path.join(patch_dir, 'RISCVInstrInfoXava.td')
    dst_instr = os.path.join(src_dir, 'llvm/lib/Target/RISCV/RISCVInstrInfoXava.td')
    if os.path.isfile(src_instr):
        shutil.copy2(src_instr, dst_instr)
        print(f"  Copied RISCVInstrInfoXava.td -> {dst_instr}")
    else:
        print(f"  [WARN] {src_instr} not found! Build will fail.")

    # -------------------------------------------------------------------------
    # 4. RISCVISAInfo.cpp — register xava as a vendor extension
    # -------------------------------------------------------------------------
    print("\n[4/8] Patching RISCVISAInfo.cpp...")
    isa_info = os.path.join(src_dir, 'llvm/lib/TargetParser/RISCVISAInfo.cpp')
    with open(isa_info, 'r') as f:
        lines = f.readlines()
    if not any('"xava"' in line for line in lines):
        with open(isa_info, 'w') as f:
            for line in lines:
                f.write(line)
                if 'static const RISCVSupportedExtension SupportedVendorExtensions[] = {' in line:
                    f.write('    {"xava", {1, 0}},\n')
        print("  Patched RISCVISAInfo.cpp")
    else:
        print("  RISCVISAInfo.cpp already patched, skipping")

    # -------------------------------------------------------------------------
    # 5. IntrinsicsRISCVXava.td — LLVM IR intrinsic declarations
    # -------------------------------------------------------------------------
    print("\n[5/8] Creating IntrinsicsRISCVXava.td...")
    intrinsics_xava = os.path.join(src_dir, 'llvm/include/llvm/IR/IntrinsicsRISCVXava.td')
    with open(intrinsics_xava, 'w') as f:
        f.write('''//===- IntrinsicsRISCVXava.td - Defines Xava intrinsics ----*- tablegen -*-===//
let TargetPrefix = "riscv" in {
  def int_riscv_xava_vpdot   : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vpdot4  : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vrelu   : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vsigmoid: DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vtanh   : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vmacc   : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vrequant: DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vdot    : DefaultAttrsIntrinsic<[], [llvm_anyint_ty, llvm_anyint_ty, llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
  def int_riscv_xava_vperf   : DefaultAttrsIntrinsic<[], [llvm_anyint_ty], [IntrNoMem, IntrHasSideEffects]>;
}
''')
    print("  Created IntrinsicsRISCVXava.td")

    # -------------------------------------------------------------------------
    # 6. IntrinsicsRISCV.td — include Xava intrinsics
    # -------------------------------------------------------------------------
    print("\n[6/8] Patching IntrinsicsRISCV.td...")
    intrinsics_td = os.path.join(src_dir, 'llvm/include/llvm/IR/IntrinsicsRISCV.td')
    with open(intrinsics_td, 'r') as f:
        content = f.read()
    if 'IntrinsicsRISCVXava.td' not in content:
        if not content.endswith('\n'):
            content += '\n'
        content += '\ninclude "llvm/IR/IntrinsicsRISCVXava.td"\n'
        with open(intrinsics_td, 'w') as f:
            f.write(content)
        print("  Patched IntrinsicsRISCV.td")
    else:
        print("  IntrinsicsRISCV.td already patched, skipping")

    # -------------------------------------------------------------------------
    # 7. BuiltinsRISCVXava.td — Clang builtin declarations
    # -------------------------------------------------------------------------
    print("\n[7/8] Creating BuiltinsRISCVXava.td...")
    builtins_xava = os.path.join(src_dir, 'clang/include/clang/Basic/BuiltinsRISCVXava.td')
    with open(builtins_xava, 'w') as f:
        f.write('''//==- BuiltinsRISCVXava.td - RISC-V Xava Builtin database ----*- C++ -*-==//
class RISCXavaBuiltin<string prototype, string features = ""> : TargetBuiltin {
  let Spellings = ["__builtin_riscv_xava_" # NAME];
  let Prototype = prototype;
  let Features = features;
}

let Attributes = [NoThrow] in {
def vpdot    : RISCXavaBuiltin<"void(unsigned int, unsigned int, unsigned int)", "xava">;
def vpdot4   : RISCXavaBuiltin<"void(unsigned int, unsigned int, unsigned int)", "xava">;
def vrelu    : RISCXavaBuiltin<"void(unsigned int, unsigned int)", "xava">;
def vsigmoid : RISCXavaBuiltin<"void(unsigned int, unsigned int)", "xava">;
def vtanh    : RISCXavaBuiltin<"void(unsigned int, unsigned int)", "xava">;
def vmacc    : RISCXavaBuiltin<"void(unsigned int, unsigned int, unsigned int)", "xava">;
def vrequant : RISCXavaBuiltin<"void(unsigned int, unsigned int, unsigned int)", "xava">;
def vdot     : RISCXavaBuiltin<"void(unsigned int, unsigned int, unsigned int)", "xava">;
def vperf    : RISCXavaBuiltin<"void(unsigned int)", "xava">;
}
''')
    print("  Created BuiltinsRISCVXava.td")

    # -------------------------------------------------------------------------
    # 7b. BuiltinsRISCV.td — include Xava builtins
    # -------------------------------------------------------------------------
    builtins_td = os.path.join(src_dir, 'clang/include/clang/Basic/BuiltinsRISCV.td')
    with open(builtins_td, 'r') as f:
        content = f.read()
    if 'BuiltinsRISCVXava.td' not in content:
        if not content.endswith('\n'):
            content += '\n'
        content += '\ninclude "clang/Basic/BuiltinsRISCVXava.td"\n'
        with open(builtins_td, 'w') as f:
            f.write(content)
        print("  Patched BuiltinsRISCV.td")
    else:
        print("  BuiltinsRISCV.td already patched, skipping")

    # -------------------------------------------------------------------------
    # 8. CGBuiltin.cpp — Clang CodeGen for Xava builtins
    # -------------------------------------------------------------------------
    print("\n[8/8] Patching CGBuiltin.cpp...")
    cgbuiltin = os.path.join(src_dir, 'clang/lib/CodeGen/CGBuiltin.cpp')
    with open(cgbuiltin, 'r') as f:
        lines = f.readlines()
    if not any('__builtin_riscv_xava_vpdot' in line for line in lines):
        with open(cgbuiltin, 'w') as f:
            for line in lines:
                f.write(line)
                if 'case RISCV::BI__builtin_riscv_cv_alu_subuRN:' in line:
                    f.write('''    ID = Intrinsic::riscv_cv_alu_subuRN;
    break;

  // Xava — AVA custom vector instructions
  case RISCV::BI__builtin_riscv_xava_vpdot:
    ID = Intrinsic::riscv_xava_vpdot; break;
  case RISCV::BI__builtin_riscv_xava_vpdot4:
    ID = Intrinsic::riscv_xava_vpdot4; break;
  case RISCV::BI__builtin_riscv_xava_vrelu:
    ID = Intrinsic::riscv_xava_vrelu; break;
  case RISCV::BI__builtin_riscv_xava_vsigmoid:
    ID = Intrinsic::riscv_xava_vsigmoid; break;
  case RISCV::BI__builtin_riscv_xava_vtanh:
    ID = Intrinsic::riscv_xava_vtanh; break;
  case RISCV::BI__builtin_riscv_xava_vmacc:
    ID = Intrinsic::riscv_xava_vmacc; break;
  case RISCV::BI__builtin_riscv_xava_vrequant:
    ID = Intrinsic::riscv_xava_vrequant; break;
  case RISCV::BI__builtin_riscv_xava_vdot:
    ID = Intrinsic::riscv_xava_vdot; break;
  case RISCV::BI__builtin_riscv_xava_vperf:
    ID = Intrinsic::riscv_xava_vperf; break;
''')
        print("  Patched CGBuiltin.cpp")
    else:
        print("  CGBuiltin.cpp already patched, skipping")

    print("\n" + "=" * 72)
    print("  All patches applied successfully!")
    print("=" * 72)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: apply_xava_patches_to_llvm20.py <llvm-src-dir>")
        sys.exit(1)
    apply_xava_patches(sys.argv[1])
