#!/bin/bash
set -e

echo "========================================================================="
echo " Building Custom LLVM for AVA Accelerator"
echo "========================================================================="

# Destination for custom LLVM build
INSTALL_DIR="$HOME/toolchains/llvm-riscv"
SRC_DIR="/tmp/llvm-project-ava"

echo "[1/4] Cloning LLVM Project (release/20.x)..."
if [ ! -d "$SRC_DIR" ]; then
    git clone --depth 1 -b release/20.x https://github.com/llvm/llvm-project.git "$SRC_DIR"
else
    echo "Using existing clone at $SRC_DIR"
fi

echo "[2/4] Applying AVA Custom Vector Instruction Patches..."
PATCH_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Parse and cleanly inject all patches directly into CMake/TableGen/cpp files
python3 "$PATCH_DIR/apply_xava_patches_to_llvm20.py" "$SRC_DIR"

echo "[3/4] Configuring LLVM Build..."
# Remove stale build artifacts from any previous failed build
if [ -d "$SRC_DIR/build" ]; then
    echo "Removing stale build directory..."
    rm -rf "$SRC_DIR/build"
fi
mkdir -p "$SRC_DIR/build"
cd "$SRC_DIR/build"
cmake -G "Unix Makefiles" \
    -DCMAKE_C_COMPILER=clang \
    -DCMAKE_CXX_COMPILER=clang++ \
    -DCMAKE_BUILD_TYPE=Release \
    -DLLVM_ENABLE_PROJECTS="clang" \
    -DLLVM_TARGETS_TO_BUILD="RISCV" \
    -DCMAKE_INSTALL_PREFIX="$INSTALL_DIR" \
    ../llvm

echo "[4/4] Building and Installing LLVM (this will take 30+ minutes)..."
make -j$(nproc)
make install

echo "========================================================================="
echo " Done. LLVM installed to: $INSTALL_DIR"
echo "========================================================================="
