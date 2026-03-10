# AVA Platform: Maximum Performance Improvement Analysis

## 0. Executive Brief
This report presents an exhaustive hardware-software co-design analysis for your modified AI-Vector-Accelerator (AVA) platform incorporating a custom vector accelerator and CV32E40X interface. The analysis evaluates the RTL datapath, register file, memory subsystem, APU/XIF interface, assembly kernels, compiler toolchain, and TFLM dispatch mechanisms against the four prioritized workloads: **VWW, KWS, IC, and AD**.

**Key Findings:**
1. **Arithmetic Bottleneck (Scalar Requantization):** Requantization and bias-addition are performed using scalar code (`MultiplyByQuantizedMultiplier`). There is no vector hardware support for per-channel scaling and shifting, adding significant scalar overhead to the inner convolutions.
2. **Interface Stall (Blocking APU Interface):** The APU interface blocks on multi-cycle vector instructions, keeping the CV32E40P core idle. Vector memory transactions do not cleanly overlap with computation.
3. **Suboptimal Vector Loading (Strided Accesses):** The vectorised depthwise convolution kernel (`vectu_dotProduct_offset_stride`) vectorizes *across* spatial dimensions (`filter_width`) using extremely inefficient strided vector loads (`vlse.v`). MobileNetV1 depthwise convolutions should vectorize over `C_in` spatial blocks or independent channels.
4. **Toolchain Deficit:** The CV32E40P bare-metal Makefile lacks critical `--gc-sections` linking and uses generic `-O3` instead of `-Os` or LTO (`-flto`). 
5. **Inner-Loop Dependencies:** Manual vector assembly loops (`vector_operations_assembly.S`) place `vsetvli` inside static-dimension inner loops and exhibit an immediate RAW hazard between `vwmul.vv` and `vwredsum.vs`.

---

## 1. Roofline & Workload Analysis

### Workload 1: Visual Wake Words (VWW / MobileNetV1)
*   **Profile:** Heavy 3×3 depthwise convolutions, 1×1 pointwise convolutions, ReLU6, global average pooling.
*   **Bottlenecks:** 
    *   **Depthwise Dilation/Stride Loop:** The `vectu_dotProduct_offset_stride` kernel relies on large strides to access the CHWN memory layout when trying to vectorize spatially. With `VLEN=32` and 4 PEs, memory bandwidth on strided loads collapses due to cache-line thrashing on the OBI bus.
    *   **ReLU6:** The manual `vect_ReLu6` kernel involves a `vmax.vx` and `vmin.vx` sequentially, wasting 2 cycles per vector where hardware-fused ReLU6 clamping could do it in 0 cycles (fused in MAC writeback).
    *   **GAP:** Scalar fallback.

### Workload 2: Keyword Spotting (KWS / DS-CNN)
*   **Profile:** Depthwise separable 2D convolutions on MFCCs, batch norm (folded), ReLU.
*   **Bottlenecks:** 
    *   Given the small activation map (38.6K parameters total, likely small intermediate maps), the overhead of scalar `vsetvli` setup and dispatch in `ConvPerChannel` overpowers the vector acceleration. 
    *   MFCC input requires sequential memory access, but current strided vector memory operations stall the pipeline heavily.

### Workload 3: Image Classification (IC / ResNet-8)
*   **Profile:** High arithmetic intensity 3x3 standard convolutions, residual additions (element-wise add).
*   **Bottlenecks:** 
    *   **Residual Additions:** Residual branches require vector element-wise additions (`vadd.vv`). However, ResNet also has different channel scales for the main and residual paths. The software lacks fused multiply-add-add support for residual merging + requantization.
    *   **SRAM Port Width:** Standard convolutions use contiguous memory accesses for the input activations (`ConvPerChannel` scalar fallback path processes `input_depth` contiguously when `MODIFIED_AVA` is used). However, a 32-bit SRAM port requires multiple cycles to load the 4 PEs for wide dot-products.

### Workload 4: Anomaly Detection (AD / Autoencoder)
*   **Profile:** Dense Matrix-Vector Multiplication (GEMV), ReLU, MSE computation.
*   **Bottlenecks:** 
    *   **Coverage Gap:** The `fully_connected.cc` TFLM kernel has NO vectorized implementation. Matrix-vector multiplications are executed completely in scalar C++, making the accelerator dormant during the entire autoencoder inference.
    *   **MSE Element-wise:** No dedicated vectorized implementation for calculating Mean Squared Error (subtraction followed by squaring and reduction).

---

## 2. Exhaustive Codebase Dissection

### 1A. Accelerator Datapath — Arithmetic Unit
*   **PE Width Match:** The implementation uses a widening 8-bit to 16-bit MAC (`vwmul.vv` + `vwredsum.vs` or `vpdot.vv` for 4-element dot product). `vpdot.vv` performs an INT8xINT8→INT32 reduction of 4 elements. 4 PEs match the 32-bit datapath width (`4 x 8-bit = 32 bits`). However, pointwise convolutions with `C_in=32` require 8 iterations, which is efficient, but depthwise convolutions (`K=3, C=1`) strand 3 out of 4 PEs due to spatial vectorization misalignment.
*   **No Fused Requantization:** `MultiplyByQuantizedMultiplier` is in the outer C++ loop. Requantization (multiply by fixed-point multiplier, shift right, and clamp) operates on the 32-bit scalar accumulator *after* computation. 
*   **Output Activation:** ReLU and ReLU6 are software-vectorized but NOT hardware-fused.

### 1B. Accelerator Datapath — Memory System
*   **No Double-Buffering / Local Scratchpad:** The vector unit fetches directly over the OBI bus without a dedicated double-buffered scratchpad SRAM. Compute stalls on every memory load penalty.
*   **Port Width Limitation:** The 32-bit wide memory interface restricts the system to fetching only one vector (4 x 8-bit elements) per cycle.
*   **No Prefetching:** The `vlse.v` instruction executes strictly synchronously, stalling the MAC units.

### 1C. Vector Register File
*   **Read Ports & RAW Hazards:** The inner loops (`vector_operations_assembly.S`) do not use vector register renaming or software pipelining. Specifically:
    ```assembly
    vwmul.vv v8, v2, v4  
    vsetvli t0, a0, e16, m4    
    vwredsum.vs v1, v8, v1
    ```
    This shows a direct RAW hazard on `v8`. The reduction sum `v1` is structurally dependent on the wide multiply finishing, introducing deep stalls pipeline bubbles.

### 1D. APU / XIF Interface
*   **APU Blocking:** Because the instructions are dispatched through the Core-V APU, the core issues the instruction and stalls until `apu_result_i` returns. There is no background execution pipeline (XIF multi-outstanding transactions). This means scalar address generation (`add a1, a1, t0`) cannot interleave with vector execution.

### 1E. Instruction Set Coverage Gaps
*   **Fully-Connected (GEMV):** `fully_connected.cc` has entirely scalar implementation.
*   **Global Average Pooling:** Missing vector implementation.
*   **Residual Additions:** Element-wise addition operations are present (`vect_add`), but standard ResNet `add.cc` defaults to TFLM reference scalar code due to a lack of `cv32e40p-ml` optimization for the TFLM runtime `AddEval`.

### 1F. RVV Assembly Kernels (NN_software)
*   **`vsetvli` Inside Loop:** Nearly all kernels in `vector_operations_assembly.S` place `vsetvli t0, a0, e8, m4, d1` *inside* the loop. Since `vl` handles the tail, changing it continuously disrupts instruction decoding. It should be hoisted, and tail handling should be performed post-loop or using masks.
*   **No Software Pipelining:** Loads (`vle.v`) are executed sequentially before the ALUs (`vwmul.vv`), and results are saved (`vse.v`) inside the same loop iteration block.

### 1G. TFLM Dispatch
*   **Direct Convolution vs Im2Col:** `vectorized_conv.h` implements a direct nested-loop convolution. While this saves SRAM (no im2col buffer), the memory access pattern for the filter is re-read for every spatial output. Using a software-managed im2col tile or weight-stationary buffer would tremendously boost reuse.

### 1H. Compiler and Linker
*   **Compiler Flags:** The `.cc` and `Makefile` (`cv32e40x-soc/sw/Makefile`) omit `-flto` (Link-Time Optimization) and `-Wl,--gc-sections` (dead code elimination). Unused TFLM operators bloat the instruction cache footprint, causing i-cache misses on the scalar core.
*   **Stack Spills:** Omission of `-fomit-frame-pointer` and heavy use of `TfLiteEvalTensor` abstraction layers causes significant stack memory traffic inside kernel evaluation.

---

## 3. Recommended Improvement Catalogue (Quick Wins)

**1. Hoist `vsetvli` and Software-Pipeline the Inner Loops (Immediate Software Fix):**
Rewrite `vector_operations_assembly.S` inner loops. Load the vectors for iteration `i+1` while computing the MACs for iteration `i`. Hoist `vsetvli` before the loop. 

**2. Vectorize the Requantization Step:**
Since adding a new hardware instruction takes time, at minimum, write an assembly-optimized RISC-V implementation of `MultiplyByQuantizedMultiplier` that can process 4 channels at a time using vector integer multiplication (`vmul.vv`) and arithmetic right-shift (`vsra.vx`).

**3. Fix Missing TFLite Kernel Dispatchers:**
Create `fully_connected.cc` inside the `cv32e40p-ml` folder. Use the `vpdot.vv` (dot product) instruction to accelerate the matrix-vector multiplies for the Autoencoder Dense layers.

**4. Update Compiler Flags:**
Inject `-Wl,--gc-sections -ffunction-sections -fdata-sections -flto` into `cv32e40x-soc/sw/Makefile` and the TFLM `Makefile`.

---

## 4. Hardware Co-Design & New Instruction Proposals

To maximize the performance on the 4 target workloads (and align with systematic internet research on state-of-the-art accelerators), you must extend the APU/RTL and introduce new custom instructions:

### A. Fused Conv-Requantize-ReLU Instruction (`vcmaq.vv`)
**Motivation:** Requantization currently dominates the output stationary scalar code.
**Instruction Design:**
*   Add a custom instruction `vcmaq.vv vd, vs1, vs2, rs1`
*   **Semantics:** Performs `vd = clamp( ( (vd + vs1 * vs2) * scale ) >> shift, 0, 6 )`. The `rs1` scalar register points to a packed 32-bit register containing the per-channel `scale` (16 bits) and `shift` (16 bits).
*   **RTL Impact:** Adds a shift/clamp stage to the end of your 4-PE MAC trees before writing back to the vector register file. This saves at least 15 scalar instructions per output pixel per channel.

### B. Weight-Stationary Buffer & Broadcast Load (`vlw.b`)
**Motivation:** Standard convolutions repeatedly load the same filter weights.
**Instruction Design:**
*   Utilize a scratchpad memory. Introduce an instruction `vlw.b vd, (rs1)` which loads a weight into a hidden "Weight Register". 
*   Subsequent `vpdot.vv` instructions implicitly use this weight register against a streamed activation vector. This cuts the OBI memory bus traffic in half (activations only).

### C. Strided / Gather-Scatter Hardware Optimization
**Motivation:** The `vectu_dotProduct_offset_stride` currently crawls on memory because it issues separate 32-bit word loads for strided elements in Depthwise convolutions.
**Hardware Fix:** 
*   Implement a tiny 4-line cache/buffer inside the vector memory unit that coalesces strided loads into a single burst when they hit the same SRAM row.
*   **Alternative Dataflow:** Transpose the memory layout of weights to match CHWN so that depthwise convolutions access adjacent elements in memory instead of striding.

### D. Migrate to XIF (eXtension Interface)
**Motivation:** APU is strictly blocking.
**Implementation:** Connect the custom vector accelerator to the CV32E40X's **XIF coprocessor interface** rather than the legacy APU. Send the vector instructions as offloaded operations to an independent sequencer inside the accelerator. This allows the CV32E40X to calculate pointers for the next loop while the accelerator multiplies the current one, achieving true ILP.
