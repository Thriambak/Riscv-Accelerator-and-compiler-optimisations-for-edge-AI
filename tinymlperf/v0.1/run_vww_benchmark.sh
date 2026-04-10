#!/bin/bash
# =============================================================================
# VWW TFLM Benchmark Script: CPU vs Stock AVA vs Modified AVA (vpdot.vv)
# =============================================================================
#
# What this script does:
#   1. Compiles the VWW model 3 times (one per config)
#   2. Converts each binary to .vmem (memory image for the simulated chip)
#   3. Runs each .vmem on the Verilator RTL simulator
#   4. Extracts cycle counts and prints a comparison table
#
# Usage:
#   ./run_vww_benchmark.sh           # Run all 3 configs
#   ./run_vww_benchmark.sh cpu       # Run CPU-only
#   ./run_vww_benchmark.sh stock     # Run Stock AVA
#   ./run_vww_benchmark.sh modified  # Run Modified AVA (vpdot.vv)
#
# =============================================================================

set -e

# ─── Paths ──────────────────────────────────────────────────────────────────
TOOLCHAIN_DIR="/home/thriambak/toolchains/xpack-riscv-none-elf-gcc-14.2.0-2/bin"
TFLM_DIR="/home/thriambak/riscv/ai_vector/tinymlperf/v0.1"
SOC_DIR="/home/thriambak/riscv/ai_vector/cv32e40x-soc"
AVA_DIR="${SOC_DIR}/x-ava-core"
VERILATOR_BUILD_DIR="${SOC_DIR}/build"
MEM_SZ=16777216   # 16 MB - needed for the large VWW model

export PATH="${TOOLCHAIN_DIR}:${PATH}"

RESULTS_DIR="${TFLM_DIR}/benchmark_results"
mkdir -p "${RESULTS_DIR}"

# ─── Helper: print with timestamp ──────────────────────────────────────────
log() {
    echo ""
    echo "========== [$(date '+%H:%M:%S')] $1 =========="
    echo ""
}

# ─── Step 1: Build the TFLM binary ─────────────────────────────────────────
# Compiles all C/C++/asm into one ELF executable called vww_perf_runner.
# Different flags select different kernel code paths.
build_config() {
    local target_arch=$1    # cv32e40p (CPU) or cv32e40p-ml (AVA)
    local use_modified=$2   # 0 or 1
    local label=$3          # cpu_only / stock_ava / modified_ava
    local use_stock=${4:-0} # 0 or 1 (for stock AVA with vwmacc)

    log "STEP 1: Compiling ${label}"
    cd "${TFLM_DIR}"

    # IMPORTANT: Delete the cached TFLM library so it gets rebuilt
    # This is critical when switching between stock and modified AVA
    rm -f example_submission/libtensorflow-microlite.a
    rm -rf example_submission/tensorflow/lite/micro/tools/make/gen

    # Clean old objects
    make TARGET_ARCH="${target_arch}" clean 2>&1

    # Build
    echo ">>> Building with TARGET_ARCH=${target_arch} USE_MODIFIED_AVA=${use_modified} USE_STOCK_AVA=${use_stock} USE_LLVM=${USE_LLVM:-0}"
    make TARGET_ARCH="${target_arch}" USE_MODIFIED_AVA="${use_modified}" USE_STOCK_AVA="${use_stock}" USE_LLVM="${USE_LLVM:-0}" 2>&1

    if [ ! -f vww_perf_runner ]; then
        echo "ERROR: vww_perf_runner not found after build!"
        exit 1
    fi

    # Save a copy of the ELF
    cp vww_perf_runner "${RESULTS_DIR}/vww_${label}.elf"
    echo ">>> Build successful: ${RESULTS_DIR}/vww_${label}.elf"
}

# ─── Step 2: Convert ELF to vmem ───────────────────────────────────────────
# The Verilator simulator reads .vmem files (hex memory images).
# We convert: ELF → raw binary → byte-swapped vmem
convert_to_vmem() {
    local label=$1

    log "STEP 2: Converting ${label} to .vmem"
    cd "${TFLM_DIR}"

    riscv-none-elf-objcopy -O binary vww_perf_runner "${RESULTS_DIR}/vww_${label}.bin"
    srec_cat "${RESULTS_DIR}/vww_${label}.bin" -binary -offset 0x0000 -byte-swap 4 \
        -o "${RESULTS_DIR}/vww_${label}.vmem" -vmem

    local size=$(wc -c < "${RESULTS_DIR}/vww_${label}.bin")
    echo ">>> Created ${RESULTS_DIR}/vww_${label}.vmem (binary size: ${size} bytes)"
}

# ─── Step 3: Run Verilator simulation ──────────────────────────────────────
# This is the cycle-accurate RTL simulation of the RISC-V chip.
# It loads the .vmem into simulated memory and executes instruction by instruction.
# WARNING: This can take a VERY long time (hours) for full VWW inference.
run_simulation() {
    local label=$1
    local vmem_path="${RESULTS_DIR}/vww_${label}.vmem"
    local out_file="${RESULTS_DIR}/${label}_sim_output.txt"

    log "STEP 3: Running Verilator simulation for ${label}"
    echo ">>> This may take several hours for a full VWW inference."
    echo ">>> Output will be saved to: ${out_file}"
    echo ">>> You can monitor progress with: tail -f ${out_file}"
    echo ""

    cd "${SOC_DIR}"

    # Create progs.csv for this run
    # Format: vmem_path ref_path ref_start ref_end dump_path dump_start dump_end
    # sscanf in verilator_main.cpp expects exactly 7 fields!
    # We use /dev/null for ref and dump since we just want cycle counts
    local csv_file="${RESULTS_DIR}/${label}_progs.csv"
    echo "${vmem_path} /dev/null 00000000 00000000 /dev/null 00000000 00000000 " > "${csv_file}"

    echo ">>> Building/Checking Verilator model..."
    make verilator \
        PROG_PATHS_LIST="${csv_file}" \
        AVA_DIR="${AVA_DIR}" \
        PROJ_DIR="${VERILATOR_BUILD_DIR}" \
        MEM_SZ="${MEM_SZ}" 2>&1 | tee "${out_file}"
    
    echo ">>> Running simulation..."
    "${VERILATOR_BUILD_DIR}/obj_dir/Vcv32e40x_wrapper" \
        "${csv_file}" 32 ${MEM_SZ} 1 100 2>&1 | tee -a "${out_file}"

    echo ""
    echo ">>> Simulation complete for ${label}"

    # Extract cycle counts
    if grep -q "Elapsed" "${out_file}"; then
        echo ">>> Results:"
        grep "Elapsed\|Perf Start\|Perf End" "${out_file}"
    else
        echo ">>> No cycle count found in output."
        echo ">>> Last 10 lines of output:"
        tail -10 "${out_file}"
    fi
}

# ─── Full pipeline for one config ──────────────────────────────────────────
run_one_config() {
    local target_arch=$1
    local use_modified=$2
    local label=$3
    local use_stock=${4:-0}

    echo ""
    echo "============================================================"
    echo " Running: ${label}"
    echo " TARGET_ARCH=${target_arch}  USE_MODIFIED_AVA=${use_modified}  USE_STOCK_AVA=${use_stock}"
    echo "============================================================"

    build_config "${target_arch}" "${use_modified}" "${label}" "${use_stock}"
    convert_to_vmem "${label}"
    run_simulation "${label}"
}

# ─── Main ────────────────────────────────────────────────────────────────────
echo ""
echo "╔══════════════════════════════════════════════════════════════╗"
echo "║    VWW TFLM 3-Way Benchmark                                ║"
echo "║    CPU-only vs Stock AVA vs Modified AVA (vpdot.vv)        ║"
echo "╚══════════════════════════════════════════════════════════════╝"
echo ""
echo "Results directory: ${RESULTS_DIR}"
echo ""

case "${1:-all}" in
    cpu)
        run_one_config "cv32e40p" "0" "cpu_only" "0"
        ;;
    stock)
        run_one_config "cv32e40p-ml" "0" "stock_ava" "1"
        ;;
    modified)
        run_one_config "cv32e40p-ml" "1" "modified_ava" "0"
        ;;
    all)
        run_one_config "cv32e40p" "0" "cpu_only" "0"
        run_one_config "cv32e40p-ml" "0" "stock_ava" "1"
        run_one_config "cv32e40p-ml" "1" "modified_ava" "0"

        # Print summary table
        log "═══ BENCHMARK SUMMARY ═══"
        echo ""
        printf "%-20s  %15s\n" "Configuration" "Elapsed Cycles"
        printf "%-20s  %15s\n" "--------------------" "---------------"
        for label in cpu_only stock_ava modified_ava; do
            out="${RESULTS_DIR}/${label}_sim_output.txt"
            if [ -f "$out" ]; then
                cycles=$(grep "Elapsed" "$out" 2>/dev/null | grep -oP '\d+' | tail -1)
                if [ -n "$cycles" ]; then
                    printf "%-20s  %15s\n" "$label" "$cycles"
                else
                    printf "%-20s  %15s\n" "$label" "(no data)"
                fi
            else
                printf "%-20s  %15s\n" "$label" "(not run)"
            fi
        done
        echo ""
        echo "Full simulation logs saved in: ${RESULTS_DIR}/"
        ;;
    *)
        echo "Usage: $0 [cpu|stock|modified|all]"
        exit 1
        ;;
esac

echo ""
echo "Done!"
