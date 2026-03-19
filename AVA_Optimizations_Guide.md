# AI Vector Accelerator (AVA) - Comprehensive Optimization Guide

This document details the exhaustive list of hardware (RTL) and software (Compiler/C++) optimizations that successfully reduced the Visual Wake Words (VWW) inference benchmark cycle count from the **Baseline CPU (854 Million cycles)** down to the **Stock AVA (233 Million cycles)**, and finally to the **Highly-Optimized Modified AVA (~65-84 Million cycles)**.

This represents a massive **10.1x to 13.1x overall performance speedup**. The improvements are categorized into Hardware Changes and Software Changes. Each feature is explained with a technical deep-dive and a simple analogy.

---

## 1. Hardware Enhancements (RTL modifications in `x-ava-core/rtl/`)

### 1.1 Command Elasticity FIFO (`vector_fifo.sv`)
**Technical Explanation:** 
Originally, the APU (Accelerator Processing Unit) interface between the CV32E40X RISC-V core and the AVA was strictly blocking. Whenever the CPU dispatched a multi-cycle vector instruction, it completely stalled until the accelerator finished. By introducing a 4-deep Command FIFO, "fire-and-forget" instructions (like vector loads `vle.v` or multiply-accumulates `vwmul.vv`) are immediately buffered. The CPU receives an instant grant signal (`apu_gnt` / `apu_rvalid`), allowing it to move to the next instruction (such as updating loop counters or generating memory addresses) while the accelerator computes in the background. This establishes true Instruction-Level Parallelism (ILP).

**Simple Analogy:**
Imagine a chef (the CPU) handing an order to a sous-chef (the Accelerator). Previously, the chef would stand there doing absolutely nothing until the sous-chef finished chopping the onions. With the FIFO, the chef writes orders to a ticket rail (the FIFO buffer). The sous-chef takes tickets at their own pace, while the chef immediately goes back to doing other prep work.

**Impact:** Removed massive CPU stalling, allowing memory address calculations to happen simultaneously with arithmetic math.

### 1.2 Hardware Fused Requantization & Activation (`pe_32b.sv`, `sat_unit.sv`)
**Technical Explanation:**
In Neural Networks like TFLite, convolutions output 32-bit integers that must be scaled down (requantized) to 8-bit integers and passed through an activation function (like ReLU or ReLU6) before proceeding to the next layer. In Stock AVA, this required bringing the 32-bit data back to the scalar CPU to run a slow C++ loop (`MultiplyByQuantizedMultiplier`). In your Modified AVA, dedicated hardware saturation stages and output multi-plexers (`PE_OP_MODE_RELU`, `PE_OP_MODE_CLAMP`, `PE_OP_MODE_REQUANT`) were placed directly at the end of the Processing Element (PE) arithmetic pipeline. Scaling, shifting (`vsra.vx`), and clamping happen directly before the result writes back to the vector register file.

**Simple Analogy:**
Instead of shipping a manufactured car out of the factory just to have another company paint it and ship it back, you built the paint booth directly onto the very end of your own assembly line. The product is finished the exact moment it drops off the belt.

**Impact:** Completely eliminated millions of scalar instructions that were bogging down the CPU during the output phase of every convolution layer.

### 1.3 Zero-Skipping & Dynamic Sparsity
**Technical Explanation:**
INT8 quantized neural networks inherently contain a massive amount of zero-valued weights and zero-valued activations (especially after ReLU passes). The modified RTL implements zero-detection gating. If either operand to the MAC (Multiply-Accumulate) unit is zero, the hardware bypasses the combinatorial multiplier logic and keeps the accumulator unchanged. 

**Simple Analogy:**
If you need to multiply $X * 0$, you don't need to pull out a calculator. The system instantly recognizes the zero, writes down a zero, and moves immediately to the next math problem.

**Impact:** Averts unnecessary switching activity in the datapath, saving power and skipping wasted clock cycles in sparse operations.

### 1.4 Packed Dot Product Instruction (`vpdot.vv`)
**Technical Explanation:**
Standard widening MAC instructions (`vwmacc.vv`) process one widened element per Processing Element (PE) per cycle. The `vpdot.vv` specialized custom instruction was implemented to take four pair-wise 8-bit operands, multiply them, and sum them into a single 32-bit accumulator, effectively reducing 4 elements simultaneously in a single clock cycle across the 32-bit datapath.

**Simple Analogy:**
Instead of a worker carrying one brick at a time from a truck to a wall, the worker was given a carrying tool to securely grab and place 4 bricks at the exact same time.

**Impact:** Maxed out the hardware utilization of the 4 PEs, generating a massive 4x throughput burst natively for operations like ResNet & MobileNet 1x1 standard convolutions.

### 1.5 Two-Stage PE Pipeline
**Technical Explanation:**
Deep combinatorial logic trees (like a multiplier followed by an adder, followed by saturation logic) create long critical paths that limit the maximum clock frequency (Fmax) of the chip. By splitting the Processing Element into two distinct hardware pipeline stages via staging registers (`arith_result_pipe`), the MAC execution and the writeback/activation evaluation happen in overlapping, separated clock cycles.

**Simple Analogy:**
Instead of one worker trying to do a 10-step complex task in one minute, two workers each take a 5-step task. Worker A finishes step 5 and hands it to Worker B, immediately grabbing the next item to start at step 1.

**Impact:** Safely allows for a higher hardware clock speed and prevents logic bottlenecks deep inside the arithmetic units.

---

## 3. Software Enhancements (C++ kernels in `tinymlperf` and Makefiles)

### 3.1 Resolving Binary Bloat (`-O3` & `--gc-sections`)
**Technical Explanation:**
The benchmark was compiled with the `-O3` optimization flag (found in `tinymlperf/v0.1/example_submission/Makefile.inc`), telling the GCC/LLVM compiler to maximize execution speed by aggressively unrolling loops and inlining functions. While `-O3` produces very fast instructions, it massively inflates the size of the compiled binary. On a microcontroller like the CV32E40X, which has a highly constrained Instruction Cache (I-cache), this bloated TensorFlow Lite Micro runtime initially caused severe "I-cache thrashing"—the CPU stalled trying to fetch code from the slower main RAM.
To keep the massive performance benefits of `-O3` without the thrashing penalty, the critical software solution was injecting the Linker Flag `-Wl,--gc-sections` (found in `tinymlperf/v0.1/Makefile`). This tells the linker to perform aggressive "Dead Code Elimination," cleanly stripping away all unused TFLite operations and bringing the instruction footprint back down into cacheable limits.

**Simple Analogy:**
`-O3` is like buying an enormous flatbed truck. It can theoretically travel very fast on the highway, but it gets completely stuck on the narrow, winding streets of your city (your processor's small cache). Instead of giving up the top speed, you used `--gc-sections` to perfectly strip off all the empty, unused sections of the truck—turning it into a lean racing vehicle that tears through tight streets without causing traffic jams.

**Impact:** Prevented severe instruction-cache stalling by safely shrinking the program size, successfully harnessing the maximum speed benefits of `-O3`.

### 3.2 Vectorized Channel Grouping (Eliminating Strided Loads in `depthwise_conv.h`)
**Technical Explanation:**
Early attempts to vectorize MobileNet depthwise convolutions tried vectorizing across the spatial `filter_width` dimension. Since memory is laid out in CHWN (Channel, Height, Width, Batch) format, reading across the width required "strided" memory loads (`vlse.v`). These strided loads jump awkwardly across memory, essentially destroying memory cache locality and choking the 32-bit OBI SRAM bus.
The updated code vectorizes depthwise convolutions across independent `C_in` channels instead. By grouping 4 channels at a time natively, it uses contiguous unit-stride vector loads (`vle8.v`), achieving a 100% utilization hit on every 32-bit memory fetch.

**Simple Analogy:**
Imagine you need to grab 4 books covering specific topics from a giant library. Previously, the instructions told you to grab a book, walk down three aisles to grab the next, walk down three more aisles, etc. The new optimization rearranged the library so the 4 exact books you need every single time are sitting right next to each other on the very first shelf.

**Impact:** Massive relief to memory bandwidth. The processor no longer waits for awkward, scattered memory accesses.

### 3.3 Precomputing Filter Sums & Shifting (Software O(N) Elimination in `conv.h`)
**Technical Explanation:**
In asymmetric quantized convolutions, resolving zero-point offsets mathematically requires calculating a term: `input_offset * Sum(filter_weights)`. In Stock AVA, the C++ code recalculated `Sum(filter_weights)` deep within the innermost pixel calculation loops.
In the modified `conv.h`, this is pre-calculated once entirely outside the execution loops and stored in a dynamic array (`int32_t* filter_sum_table = (int32_t*)__builtin_alloca(...)`). Negated shift arrays (`neg_shifts`) were similarly precomputed.

**Simple Analogy:**
If you need to know the total cost of groceries to deduct from an account 1,000 times a day, instead of manually re-adding the price of the apple, milk, and bread 1,000 separate times, you calculate the total once in the morning, write it on a sticky note, and just look at the note.

**Impact:** Removed thousands of redundant arithmetic addition loops from the innermost execution path.

### 3.4 Inner-Loop Software Pipelining & Hoisting (`vsetvli`)
**Technical Explanation:**
In RISC-V Vector extension programming, the `vsetvli` instruction configures the processor's vector length and element types. In the original assembly and C++ convolutions, `vsetvli` was constantly being re-evaluated inside the core `while` loops. Because changing vector states disrupts the processor's instruction decoding pipeline, this was lethal. The new architecture hoists `AVA_VSETVLI_XX(10)` entirely outside of the channel loops, as the chunk size (VL=4 for e32) is perfectly static.

**Simple Analogy:**
You are painting a wall. Before dipping the brush every single time, you stop, look at the paint bucket, verify it is still blue paint, and verify you are still using the same brush. The optimization says: Verify the paint and brush once at the start of the day, and then just keep painting until the wall is finished without double-checking.

**Impact:** Eliminated massive structural pipeline bubbling at the processor decoding level.

---

### Conclusion

Your massive reduction from 854M cycles to 65M cycles (a ~13x speedup) wasn't magic—it was rigorous **Hardware-Software Co-Design**. You recognized that the processor and accelerator were stepping on each other's toes (fixed by the FIFO), that standard memory layouts destroyed bus performance (fixed by unit-stride channel grouping), and that math was happening in the wrong places (fixed by moving Requantization and ReLU into hardware and moving scalar precomputation outside of software loops).
