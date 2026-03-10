<div align="center">
  <h1>🚀 AVA: AI Vector Accelerator for RISC-V Edge Devices</h1>
  <p>
    <strong>A high-performance, hardware-software co-designed vector accelerator for deep learning inference on resource-constrained Edge AI devices.</strong>
  </p>
  <p>
    <img src="https://img.shields.io/badge/Architecture-RISC--V-blue.svg" alt="RISC-V">
    <img src="https://img.shields.io/badge/Core-CV32E40X-orange.svg" alt="CV32E40X">
    <img src="https://img.shields.io/badge/Compiler-LLVM%2018.0-red.svg" alt="LLVM">
    <img src="https://img.shields.io/badge/Status-Active%20Research-success.svg" alt="Status">
  </p>
</div>

<br />

## 📖 Overview

The **AI Vector Accelerator (AVA)** is a custom, hardware-software co-designed acceleration platform built as a tightly coupled digital extension to the **OpenHW Group CV32E40X RISC-V core**. AVA is specifically engineered to aggressively accelerate Deep Neural Network (DNN) inference workloads—such as MobileNet, Visual Wake Words (VWW), and Anomaly Detection—at the extreme edge.

By tightly integrating custom RTL hardware with bespoke LLVM compiler passes, this project demonstrates a **3.6x speedup** over baseline CPU execution, successfully bringing the VWW inference cycle count down from 117.5M to ~65M cycles.

## ✨ Key Architectural Features

### 💻 Hardware Layer (RTL)
The AVA core (`x-ava-core/rtl`) interfaces with the CV32E40X processor via the Core-V eXtension Interface (XIF). It boasts a custom datapath optimized for ML operations:
- **Scalable Vector Register File**: Custom multi-lane vector registers tailored for streaming MAC operations.
- **2-Stage Processing Element (PE) Pipeline**: Highly optimized arithmetic units ensuring high throughput for dot products and convolutions.
- **Hardware Sparsity & Zero-Skipping**: Built-in logic to detect weight/activation sparsity dynamically, saving cycles by bypassing zero-multiplies.
- **In-flight Requantization & Activation**: Hardware-native ReLU operations and integer requantization drastically reducing memory round-trips.
- **Advanced Mask Register Support**: Fine-grained predicated execution across vector lanes.

### 🛠 Software & Compiler Layer
AVA pairs its silicon strategy with an aggressive compiler toolchain approach:
- **Custom LLVM Backend Passes**: Custom instruction selection and lowering passes injected into the LLVM compilation pipeline to natively target AVA instructions.
- **TensorFlow Lite Micro (TFLM) Integration**: Direct integration with TFLite Micro kernels (`conv1d`, `depthwise_conv`, `vpdot`).
- **Cycle-Accurate Benchmarking**: Extensive Verilator simulation harnesses (`cv32e40x-soc`) providing deep cycle-level visibility and bottleneck analysis.

## 🗂 Project Structure

```text
├── cv32e40x-soc/            # Top-level SoC wrapper, Verilator harnesses, and testbenches
│   ├── x-ava-core/          # RTL implementation of the Vector Accelerator
│   ├── test_conv1d.S        # Assembly tests for 1D Convolutions
│   ├── test_vector.S        # Baseline Vector ISA verification
│   └── test_vpdot_perf.S    # Vector Dot Product performance benchmarking
├── tinymlperf/              # TinyMLPerf (MLPerf Tiny) Benchmark Suite (TFLite Micro)
├── NN_software/             # Neural Network models and preprocessing scripts
├── riscv-toolchain-.../     # Custom RISC-V GCC/LLVM toolchain integration scripts
├── AVA_Performance_Report.md# Detailed cycle-count tracking and bottleneck analysis
└── research_ideation.md     # Future roadmap, literature survey, and LLVM extension ideas
```

## 🚀 Getting Started

### Prerequisites
- **Verilator** (v5.0+ recommended for cycle-accurate simulation)
- **RISC-V GNU Toolchain** (`riscv32-unknown-elf-gcc`)
- **LLVM Framework** (Custom build required for AVA passes)
- **Make & CMake**

### Building and Simulating
1. **Compile the RTL and Build the Simulator:**
   ```bash
   cd cv32e40x-soc
   make verilate
   ```

2. **Run a Microbenchmark:**
   ```bash
   # Compile the dot-product test payload
   make test_vpdot_perf
   # Run in cycle-accurate simulation
   ./obj_dir/Vcv32e40x_wrapper +firmware=test_vpdot_perf.hex
   ```

3. **Run TFLite Micro Benchmarks (VWW):**
   ```bash
   cd tinymlperf/v0.1/
   make -f Makefile.riscv run_vww
   ```

## 📊 Performance & Optimization Results

Initial profiling of the Visual Wake Words (VWW) model revealed significant stalls in the `depthwise_conv` layers (117.5M baseline cycles). Through architectural enhancements, we achieved the following:

| Configuration | VWW Cycle Count | Speedup |
| :--- | :--- | :--- |
| **Baseline CPU (CV32E40X)** | 117.5M | 1.0x |
| **AVA (Vectorized Only)** | 85.0M | 1.38x |
| **AVA (Zero-Skipping + ReLU)**| ~65.0M | **3.6x** |

*(Detailed telemetry and node-by-node hanging fixes are documented in `AVA_Performance_Report.md`)*.

## 🔬 Current Research & Future Roadmap

This project is actively developed. Current focus areas include:
1. **Dynamic Sparsity Compaction:** Extending the Vector Load/Store Unit (LSU) to dynamically compact sparse matrices in memory.
2. **LLVM Auto-Vectorization:** Improving the compiler's ability to automatically infer AVA `vpdot` instructions from standard C/C++ loops without inline assembly.
3. **Advanced Matrix Extensions:** Implementing custom 2D tile instructions for transformer-based extreme-edge models.

## 🤝 Contributing
While this project originates as closed-door architecture research, community contributions regarding LLVM compiler passes or custom RISC-V XIF implementations are welcome. Please open an issue before submitting a PR.

## 📝 License
Distributed under the MIT License. See `LICENSE` for more information.

---
*Built for the future of Deep Tech, Silicon Design, and Edge AI.* 
