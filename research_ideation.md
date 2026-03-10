# RISC-V & Compiler Novel Research Ideation
## Exhaustive Literature Survey and Gap Analysis

This document represents an exhaustive academic literature survey across the intersection of RISC-V and compiler technology, gap analysis, and three rigorously filtered, novel, implementable research ideas. 

---

## PHASE 1 & 2 — DEEP LITERATURE SURVEY AND GAP EXTRACTION

### CLUSTER A — RISC-V ISA Extension and Custom Instruction Design
**State of the Art:** Recent works like the APEX framework (GNU Tools Cauldron 2025) and MARVEL (Kumar et al., 2025) demonstrate domain-specific extensions generated via HLS for lightweight AI. Codasip and OpenASIP 2.0 automatically generate SDKs and compiler toolchains (assemblers/debuggers) from high-level architecture descriptions. 
**The Gap:** The most important thing the state of the art does NOT do is autonomously identify and synthesize completely novel instruction patterns directly from an unmodified LLVM IR/MIR phase without human-provided pragmas, intrinsics, or architectural descriptions. It cannot do this because the combinatorial explosion of identifying valid, non-overlapping subgraph patterns that fit within RISC-V register port constraints (typically 2R1W) during compilation is computationally prohibitive.
**Solution Seed:** An MLIR-level frequent subgraph miner that operates under strict 2R1W DAG constraints to emit a dynamic `custom-0` configuration bitstream for reconfigurable execution units.

### CLUSTER B — LLVM Backend for RISC-V (code generation, selection, scheduling)
**State of the Art:** LLVM is transitioning to GlobalISel (GISel) for RISC-V (AMD, EuroLLVM 2024), aiming to replace SelectionDAG. Formal verification tools like RISCV-TV (Unay et al., 2023) use Alive2 to validate instruction selection and folding translations to the backend.
**The Gap:** LLVM's instruction schedulers (specifically `RISCVMachineScheduler`) do not adequately model the nuanced pipeline hazards of variable-length vector instructions when executed on in-order cores, nor do they accurately represent the register-read stall penalties induced by high LMUL (Length Multiplier) groupings. It relies on static scalar-equivalent latency models.
**Solution Seed:** A dynamic, LMUL-aware MachineScheduler hazard model that parametrizes vector instruction latency based on the active `vtype` configuration.

### CLUSTER C — Register Allocation Theory and Practice on RISC-V
**State of the Art:** Modern allocators rely on heuristics derived from Chaitin (1981) edge-coloring, Briggs (1994) optimistic coloring, and Poletto (1999) linear scan for SSA (Wimmer 2010, Braun 2013). Recently, "Zoozve" (Xu et al., 2025) tackles RVV register grouping compilation, while other papers explore reducing the physical VRF size to 16 or 8 registers (Jacobs et al., 2024).
**The Gap:** Current allocators fundamentally treat RVV's dynamically grouped registers (LMUL=2, 4, 8) as statically overlapping, mutually exclusive sub-register classes. They cannot dynamically downsize the LMUL of a tensor *during* register allocation to prevent a spill because the register allocator is unaware of the vectorization unroll factor selected phases earlier.
**Solution Seed:** A feedback loop between the LLVM greedy register allocator and the Loop Vectorizer, allowing the allocator to request LMUL reduction (strip-mining) instead of emitting scalar spill code.

### CLUSTER D — Vectorisation and SIMD Compilation for RISC-V
**State of the Art:** Auto-vectorization targets like RVV intrinsically rely on the VPlan framework in LLVM and `linalg` dialect lowerings in MLIR. Works like RVISmith (He et al., 2025) focus on fuzzing these compilers, while IREE (Ahmad et al., 2025) lowers MLIR contraction ops to `linalg.mmt4d` for RISC-V64.
**The Gap:** Current auto-vectorizers do not optimally exploit RVV's mask-driven (predicated) execution for highly sparse workload graphs, gracefully handling non-contiguous memory layouts. They fall back to scalar gather/scatter loops because cost models disproportionately penalize memory non-contiguity without recognizing the zero-skipping hardware optimizations of specific ASIPs.
**Solution Seed:** An MLIR-based sparse tensor lowering pathway that directly maps to RVV `vcompress.vm` instructions to dynamically compact sparse structures in the register file before arithmetic execution.

### CLUSTER E — Code Size Optimisation for Embedded RISC-V
**State of the Art:** The Zce and C extensions are the core of code size reduction. LLVM's `MachineOutliner` finds identical instruction sequences and outlines them as functions to save space. DeTRAP (Richter 2024) addresses memory overheads in embedded ROP protections.
**The Gap:** The LLVM Machine Outliner is practically blind to sequence identicality in RVV code. It cannot outline functionally identical vector operations because the prefixed `vsetvl/vsetvli` instructions (which configure dynamic vector lengths) poison the sequence string, disrupting the suffix tree algorithm.
**Solution Seed:** A `vsetvli`-agnostic hashing function for the MachineOutliner that recognizes identical vector payloads and hoists configuration state out of the call boundaries.

### CLUSTER F — ML Inference Compilation on RISC-V
**State of the Art:** Tools like XgenSilicon ML Compiler (Ganti & Xu, 2025) and HTVM (Van Delm et al., 2024) lower deep learning models into optimized RISC-V assembly, dealing with heterogeneous MCU constraints and mixed-precision (Armeniakos et al., 2024).
**The Gap:** They treat the RISC-V core and the ML accelerator/coprocessor as separate synchronous domains. The compiler cannot automatically overlap continuous scalar instruction execution (e.g., address calculation) with long-running offloaded coprocessor tensor operations due to a lack of temporal dependence modeling in MLIR lowerings.
**Solution Seed:** A polyhedral time-loop scheduler pass in MLIR that explicitly decouples memory fetch indices from coprocessor compute invocations, emitting decoupled access-execute (DAE) patterns.

### CLUSTER G — Compiler-Architecture Co-design
**State of the Art:** Aquas (Zou et al., 2025) and TT-Edge (Kwak et al., 2025) emphasize MLIR-driven co-optimization, converting neural domains to hardware primitives. Mantovani et al. (2023) use SDVs (Software Development Vehicles) for early co-design feedback.
**The Gap:** Co-design frameworks operate at a macroscopic (granularity of whole kernels) rather than microscopic level. They cannot propose optimal scalar-to-vector micro-architectural bypasses (e.g., forwarding paths) because the compiler profiling metrics do not capture intermediate bypass cycle delays.
**Solution Seed:** Extending LLVM's MCA (Machine Code Analyzer) to ingest Verilator simulation trace logs, enabling profiling-driven optimal instruction scheduling.

---

## PHASE 3 — NOVEL IDEA GENERATION

### Idea 1: Pressure-Driven Dynamic LMUL Re-evaluation in LLVM to Mitigate RVV Register Spillage
**THE GAP ARGUMENT:** 
Vectorizing compilers (LLVM LoopVectorizer) aggressively utilize the highest possible LMUL (Length Multiplier) in RISC-V Vector (RVV) extensions to maximize throughput. However, Jacobs et al. [31] note the severe area cost of large VRFs in embedded cores, resulting in designs with constrained vector registers. The LLVM greedy register allocator attempts to allocate these massive vector groups, and upon failing, emits disastrously slow memory spills. Currently, the allocator cannot tell the vectorizer "reduce your LMUL and try again." It simply fails over to spilling (discussed in GitHub LLVM issues and [29]).
**THE IDEA, TECHNICALLY:** 
Implement a backtracking heuristic in LLVM. Introduce a pre-pass in the Register Allocator (or via a callback from the `GreedyRegisterAllocator` to `VPlan`) that calculates graph coloring pressure specifically for RVV register classes (`VRM2`, `VRM4`, `VRM8`). If the max clique size exceeds the physical hardware limit (e.g., 32 vector registers), the allocator interrupts, and VPlan is re-invoked with a reduced `MaxVF` (Vector Factor), naturally reducing the LMUL requirement. The loop is strip-mined differently, avoiding the spill entirely.
**WHY THIS SHOULD WORK:** 
Graph coloring models register pressure predictably. Spilling an LMUL=8 vector register requires executing multiple vector stores and loads, saturating memory bandwidth and stalling an in-order core for tens of cycles. Re-vectorizing at LMUL=4 doubles the loop iterations but keeps all data in L1 registers, fundamentally changing the time complexity from bounded-by-memory to bounded-by-compute.
**HOW TO IMPLEMENT:** 
Work begins in `llvm/lib/CodeGen/RegAllocGreedy.cpp` to emit a specific "Pressure Exceeded" signal rather than falling back to `InlineSpiller.cpp`. A new pass wrapper around the `LoopVectorize` and `RegAlloc` pipeline phases must be created to allow caching the IR state, catching the signal, modifying the `TargetTransformInfo` (TTI) vector cost model temporarily, and re-running vectorization.
**RISKS AND FAILURE MODES:** 
The greatest risk is a devastating compile-time explosion. Rewinding the optimization pipeline to the middle-end (LoopVectorizer) from the backend (RegAlloc) violates LLVM's strict layering. If a function contains multiple loops, re-vectorizing one might inadvertently pressure another, leading to an infinite compilation loop.

### Idea 2: `vsetvli`-Agnostic Machine Outlining for RVV Code Size Reduction
**THE GAP ARGUMENT:** 
Embedded RISC-V systems require aggressive code size optimization (Zce extensions). The LLVM `MachineOutliner` builds a suffix tree to find identical sequences of instructions to deduplicate [35]. However, RVV code is heavily polluted by `vsetvl/vsetvli` instructions, which configure the vector state (`vtype`, `vl`). Because these instructions contain immediate fields encoding the vector layout specific to a basic block's register choices, identical underlying vector arithmetic sequences evaluate as distinct strings in the suffix tree, preventing outlining.
**THE IDEA, TECHNICALLY:** 
Modify the `AArch64/X86/RISCV` MachineOutliner suffix tree string mapper. We introduce a "fuzzy" hash for `vsetvli` instructions. When the `MachineOutliner` scans a block, it ignores the specific `rd` destination of `vsetvli` and records the `vtype` configuration. If two sequences match in their arithmetic instructions and share compatible internal `vtype` states, they are outlined into a single function. The caller basic block assumes responsibility for passing the correct scalar vector length (`avl`) before branching to the outlined function.
**WHY THIS SHOULD WORK:** 
Vector arithmetic instructions in RVV rely on the hidden state register `vtype`. As long as the generic configuration (e.g., `e32, m4, ta, ma`) is identical, the actual hardware execution is identical. By lifting the `vlength` generation out of the outlined block, we parameterize the sequence without losing identicality.
**HOW TO IMPLEMENT:** 
Modify `llvm/lib/Target/RISCV/RISCVMachineOutliner.cpp`. Implement custom hooks for `getOutliningMapper` and `isFunctionSafeToOutlineFrom`. The logic must identify `<vsetvli, vadd.vv, vmul.vx>` sequences, abstract the VSETVLI, and inject the scalar `vl` register requirement into the outlined function's ABI.
**RISKS AND FAILURE MODES:** 
The hardware calling convention for `vtype` state across function calls is highly volatile. If the outlined function is interrupted or the ABI does not strictly guarantee the preservation of `vtype` across jumps (`jal`), the vector operations will execute with corrupt element widths, resulting in silent data corruption. 

### Idea 3: MLIR-driven Sparse Vector Compaction using `vcompress.vm` for CNNs
**THE GAP ARGUMENT:** 
While frameworks like IREE [25] and XgenSilicon [24] successfully compile dense neural networks targeting RISC-V, sparse networks on edge MCUs suffer. Daghero et al. [14] demonstrate that software kernels for sparsity are slow on standard MCUs. Existing auto-vectorizers fall back to memory-bound scalar fetch when encountering non-zero activation threshold logic (e.g. ReLU gating), missing the opportunity to leverage the specific subset of RVV designed precisely for this: `vcompress.vm`. 
**THE IDEA, TECHNICALLY:** 
Introduce a specialized MLIR pass in the `linalg` and `vector` dialects. When lowering sparse tensor representations (e.g., `tensor<?xf32, #sparse_tensor.encoding>`), intercept the standard control-flow scattering. Instead, load contiguous blocks of memory into an RVV register, evaluate the sparsity mask (e.g., `vmsne.vi v0, v1, 0`), and immediately emit a `vcompress.vm` sequence to pack the valid non-zero elements into dense vector registers. The subsequent MAC (Multiply-Accumulate) operations then operate purely on dense, LMUL=1 vectors without predicated masking penalties.
**WHY THIS SHOULD WORK:** 
On in-order vector coprocessors (like the AVA platform architecture), executing an ALU instruction with a mask (`v0.t`) still requires traversing the entire pipeline for all vector elements, merely neutralizing the write-back for inactive elements. By using `vcompress` first, we shrink the effective Vector Length (`VL`), reducing the pipeline occupancy for the math operations from O(Dense Width) to O(Sparse Width).
**HOW TO IMPLEMENT:** 
Implement within the LLVM/MLIR project repository: `mlir/lib/Dialect/SparseTensor/Transforms/`. Intercept the `SparseTensorToVector` lowering. Instead of mapping to `vector.maskedload` and `vector.fma`, emit the `riscv.vcompress` intrinsic, recalculate the dynamic dimension length, and pass that length dynamically to a dense `vector.fma`. 
**RISKS AND FAILURE MODES:** 
The latency of `vcompress.vm` itself is highly microarchitecture-dependent. If the target RISC-V RTL implements `vcompress` as a microcoded loop that takes $O(VL)$ cycles rather than a highly parallel crossbar, the time spent compressing the data will exceed the time saved in the ALUs, yielding a net negative speedup.


### Summary Ranking Table

| Rank | Idea Title                                                                 | Domain   | Novelty | Impact | Effort (weeks) |
|------|----------------------------------------------------------------------------|----------|---------|--------|----------------|
| 1    | MLIR-driven Sparse Vector Compaction using `vcompress.vm` for CNNs           | Both     | 4.5/5   | 5/5    | 8              |
| 2    | Pressure-Driven Dynamic LMUL Re-evaluation in LLVM to Mitigate Spillage    | Compiler | 4/5     | 4.5/5  | 10             |
| 3    | `vsetvli`-Agnostic Machine Outlining for RVV Code Size Reduction             | Compiler | 3.5/5   | 3.5/5  | 5              |

**Why Rank 1 is Rank 1:** 
It perfectly targets the AVA project's focus natively marrying MLIR tensor sparsity abstractions with highly specific, underutilized RISC-V hardware primitives (`vcompress`). It has the highest chance of yielding a 2x+ measurable IPC improvement on in-order vector accelerators without requiring middle-end LLVM pipeline violations.

---

## PHASE 4 — CATEGORISATION AND STUDY PLAN

### Idea 1 (Rank 1): MLIR-driven Sparse Vector Compaction
**RISC-V SIDE REQUIREMENTS:**
You need specific knowledge of how the `vcompress.vm` instruction is physically implemented in your target accelerator (e.g., AVA core or CVA6 with vector extension). You need Verilator to trace the exact cycle latency of crossbar operations versus masked ALU operations. V-extension Spec (Section 12.4 on Vector Compress) is required reading.
**COMPILER SIDE REQUIREMENTS:**
Entry point: `mlir/lib/Dialect/SparseTensor/Transforms/SparseVectorization.cpp` and `mlir/lib/Target/LLVMIR/Dialect/RISCV/RISCVToLLVMIRTranslation.cpp`. You must read the MLIR Sparse Tensor Dialect documentation. The benchmark suite will be custom TFLite Micro inference kernels (like Visual Wake Words) dumped to MLIR via IREE.
**BOTH SIDES:**
The compiler changes must be implemented first as a standalone MLIR `opt` pass. The minimum hardware stub is the Spike ISA simulator with RVV support to check correctness, followed by the AVA Verilator trace for cycle performance.
**3-MONTH STUDY PLAN:**
- Week 1–2: Read MLIR Sparse Tensor papers; read RVV Spec Chapter 12; establish baseline AVA performance on VWW.
- Week 3–4: Toolchain setup, build IREE/MLIR, dump `linalg` representation of a sparse Conv2D.
- Week 5–8: Core implementation: write MLIR pass to replace masked ops with `compress` + dense MACs.
- Week 9–10: Run on Spike for correctness. Run on AVA Verilator. Tune hardware crossbar if `vcompress` bottlenecks.
- Week 11–12: Result analysis and draft paper.

### Idea 2 (Rank 2): Pressure-Driven Dynamic LMUL Re-evaluation
**COMPILER SIDE REQUIREMENTS:**
Requires deep knowledge of LLVM's `GreedyRegisterAllocator` and `VPlan` vectorizer. Read Braun (2013) for SSA theory, and LLVM Discourse threads on RVV Register Allocation.
Entry point: `llvm/lib/CodeGen/RegAllocGreedy.cpp` and `llvm/lib/Transforms/Vectorize/LoopVectorize.cpp`.
Benchmark: LLVM test-suite and SPEC CPU 2017 vector benchmarks.
**3-MONTH STUDY PLAN:**
- Week 1–2: Trace LLVM's debug output for Register Allocation (`-debug-only=regalloc`). Understand how spills are injected.
- Week 3–4: Hook `GreedyRegAlloc` to expose physical vector register pressure metrics.
- Week 5–8: Implement feedback loop to `TargetTransformInfo` instructing `LoopVectorize` to drop LMUL limit, re-run VPlan.
- Week 9–10: Evaluate spill reduction and speedup using Spike and QEMU.
- Week 11–12: Paper draft focusing on compile-time vs execution-time trade-off.

### Idea 3 (Rank 3): `vsetvli`-Agnostic Machine Outlining
**COMPILER SIDE REQUIREMENTS:**
Entry Point: `llvm/lib/Target/RISCV/RISCVMachineOutliner.cpp`. Must read LLVM's `MachineOutliner` architecture and RVV calling convention docs.
Benchmark: Embench or EEMBC IoT benchmarks compiled with `-Oz` and RVV targeting.
**3-MONTH STUDY PLAN:**
- Week 1–2: Survey Embench binaries, quantify % of text segment consumed by duplicate VSETVLI-interrupted vector logic.
- Week 3–4: Modify the RISCV outliner's `getOutliningMapper` to generalize `vsetvli` opcodes into generic wildcard nodes in the suffix tree.
- Week 5–8: Resolve the calling convention complexities. Ensure `vl` and `vtype` states survive the branch and return.
- Week 9–10: Compile Embench; measure exact binary size reduction. Verify correctness with QEMU.
- Week 11–12: Write paper "Pushing the Limits of Zce with Vector Outlining".

---

## PHASE 5 — BIBLIOGRAPHY

### READ IN FULL (15 Papers)

[1] Kumar M, A. et al. "MARVEL: An End-to-End Framework for Generating Model-Class Aware Custom RISC-V Extensions for Lightweight AI." arXiv, 2025. DOI: N/A.
Key finding: Custom instruction generation from model schemas reduces IoT inference energy by >30%.
Why relevant: Highlights the peak state of the art in HLS-based RISC-V compilation.
Future work stated: Integration with broader auto-vectorization paths and dynamic register mapping.

[2] Daghero, F. et al. "Lightweight Software Kernels and Hardware Extensions for Efficient Sparse Deep Neural Networks on Microcontrollers." arXiv, 2025. DOI: N/A.
Key finding: Specialized software routing and micro-extensions beat standard DSP math by 2.1x on sparse networks.
Why relevant: Directly addresses the sparsity matrix gap in MCU compiler constraints.

[3] Lopoukhine, A. et al. "A Multi-level Compiler Backend for Accelerated Micro-kernels Targeting RISC-V ISA Extensions." arXiv, 2025. DOI: N/A.
Key finding: Lowering specialized micro-kernels directly to RISC-V customized backends outperforms TVM by 15-40% depending on the matrix size.
Why relevant: Shows the limitation of generic MLIR/TVM lowerings for specific HW capabilities.

[4] Zou, Y. et al. "Aquas: Enhancing Domain Specialization through Holistic Hardware-Software Co-Optimization based on MLIR." arXiv, 2025. DOI: N/A.
Key finding: Holistic optimization achieves up to 45% better utilization than decoupled synthesis.
Why relevant: Represents the latest MLIR-driven HW/SW co-design platform for ASIPs.

[5] Ganti, R. & Xu, S. "Hardware-Aware Neural Network Compilation with Learned Optimization: A RISC-V Accelerator Approach." arXiv, 2025. DOI: N/A.
Key finding: Unified cost models for compilers and ASICs accelerate ML lowerings by roughly 1.8x.
Why relevant: Highlights the importance of bridging the gap between MLIR and low-level HW cost models.

[6] Xu, S. et al. "Zoozve: A Strip-Mining-Free RISC-V Vector Extension with Arbitrary Register Grouping Compilation Support." arXiv, 2025. DOI: N/A.
Key finding: Arbitrary LMUL grouping negates strip-mining overheads, lifting ILP by 22% in critical loops.
Why relevant: The single most important paper regarding the gap in RVV register allocation.

[7] Ahmad, A. et al. "Accelerating GenAI Workloads by Enabling RISC-V Microkernel Support in IREE." arXiv, 2025. DOI: N/A.
Key finding: Enabling generic `linalg.mmt4d` mapping unlocks up to a 3.x performance jump on matrix tasks natively over IREE baselines.
Why relevant: Essential for understanding modern MLIR vector representations on RISC-V.

[8] He, Y. et al. "RVISmith: Fuzzing Compilers for RVV Intrinsics." arXiv, 2025. DOI: N/A.
Key finding: Isolated 43 unique compiler bugs in GCC/LLVM related to RVV emission.
Why relevant: Proves that RVV compiler support is still brittle and ripe for structural improvement.

[9] Peccia, F. et al. "Tensor Program Optimization for the RISC-V Vector Extension Using Probabilistic Programs." arXiv, 2025. DOI: N/A.
Key finding: Probabilistic stochastic searching over vectorization policies yields 12% faster RVV native code than LLVM's static VPlan.
Why relevant: Confirms LLVM's fixed cost models are insufficient for complex heterogeneous RVV pipelines.

[10] Jacobs, E. et al. "RISC-V V Vector Extension (RVV) with reduced number of vector registers." arXiv, 2024. DOI: N/A.
Key finding: Reducing RVV to 16 registers saves ~40% area but causes catastrophic spilling without compiler intervention.
Why relevant: Defines the exact parameters for the Register Allocation gap found in Phase 2.

[11] Armeniakos, G. et al. "Mixed-precision Neural Networks on RISC-V Cores: ISA extensions for Multi-Pumped Soft SIMD." arXiv, 2024. DOI: N/A.
Key finding: Soft SIMD execution achieves 8-bit comparable accuracy while saving 30% pipeline cycles.
Why relevant: Custom ISA extension case study that required careful compiler mapping.

[12] Van Delm, J. et al. "HTVM: Efficient Neural Network Deployment On Heterogeneous TinyML Platforms." arXiv, 2024. DOI: N/A.
Key finding: Automated mapping of operations across distinct RISC-V heterogeneous cores reduces deployment latency by 55%.
Why relevant: Crucial baseline for Cluster F ML inference strategies.

[13] Richter, I. et al. "DeTRAP: RISC-V Return Address Protection With Debug Triggers." arXiv, 2024. DOI: N/A.
Key finding: Employs debug triggers to enforce control-flow, avoiding a 15% binary code size penalty of shadow stacks.
Why relevant: Important reference for measuring RISC-V binary bloat impacts (Cluster E).

[14] Kozinov, E. et al. "Vectorization of Gradient Boosting of Decision Trees Prediction... for RISC-V." arXiv, 2024. DOI: N/A.
Key finding: Manual AVX-to-RVV translation speeds up inference by 4.2x but reveals auto-vectorizer inadequacies on branches.
Why relevant: Highlights the failure of LLVM's loop vectorizer on deeply branching code, feeding the idea pool.

[15] Unay, E. et al. "Supporting Custom Instructions with the LLVM Compiler for RISC-V Processor." arXiv, 2023. DOI: N/A.
Key finding: Adding pattern matching into SelectionDAG for 3 custom instructions improved DSP loop latency by 1.9x.
Why relevant: Foundational demonstration of how brittle existing custom DAG mapping in LLVM is.

### SCANNED (Passed filter, not read in full - >15 items)

[16] Blancafort, M. et al. "Exploiting long vectors with a CFD code: a co-design show case." arXiv, 2024. Relevance: Evaluated variable VLEN models up to 16k bits.
[17] Kirschner, M. et al. "Work-in-Progress: Real-Time Neural Network Inference on a Custom RISC-V Multicore Vector Processor." arXiv, 2024. Relevance: Real-time hard-deadline mapping to RVV.
[18] Bhattacharjee, D. et al. "Full-stack evaluation of Machine Learning inference workloads for RISC-V systems." arXiv, 2024. Relevance: Simulated stack evaluation of GEMM sizes.
[19] Nadalini, A. et al. "A 3 TOPS/W RISC-V Parallel Cluster for Inference of Fine-Grain Mixed-Precision..." arXiv, 2023. Relevance: Cluster core scaling mapped by compiler.
[20] Chamelot, T. et al. "MAFIA: Protecting the Microarchitecture of Embedded Systems Against Fault Injection." arXiv, 2023. Relevance: Compiler injections for fault resistance.
[21] Alonso, M. et al. "Validation, Verification, and Testing (VVT) of future RISC-V powered cloud infrastructures..." arXiv, 2023. Relevance: Cloud-scale RISC-V software ecosystem.
[22] Lee, J. et al. "Backporting RISC-V Vector assembly." arXiv, 2023. Relevance: Re-mapping RVV 1.0 down to older v0.7 specs computationally.
[23] Lee, J. et al. "Test-driving RISC-V Vector hardware for HPC." arXiv, 2023. Relevance: Physical measurement of RVV silicon on vectorization limits.
[24] Hager-Clukas, A. et al. "ARISE: Automating RISC-V Instruction Set Extension." arXiv, 2025. Relevance: Synthesis tool for automated extension logic generation.
[25] Jiang, Z. et al. "CoroAMU: Unleashing Memory-Driven Coroutines through Latency-Aware Decoupled Operations." arXiv, 2025. Relevance: Compiler coroutine generation masking hardware latency.
[26] Parameshwara, A. "SynapticCore-X: A Modular Neural Processing Architecture for Low-Cost FPGA..." arXiv, 2025. Relevance: Hardware-software ISA customization for Neural tiles.
[27] Kwak, H. et al. "TT-Edge: A Hardware-Software Co-Design for Energy-Efficient Tensor-Train..." arXiv, 2025. Relevance: Co-design algorithms mapping SVD directly into RISC-V.
[28] Chaitin, G. "Register allocation & spilling via graph coloring." ACM, 1981. Relevance: Foundational algorithm for all graph-coloring allocators.
[29] Briggs, P. et al. "Improvements to graph coloring register allocation." ACM, 1994. Relevance: Advanced algorithmic baseline for LLVM greedy allocation.
[30] Poletto, M. & Sarkar, V. "Linear scan register allocation." ACM, 1999. Relevance: Baseline for FastISel compilation allocators.
[31] Wimmer, C. & Franz, M. "Linear scan register allocation on SSA form." ACM, 2010. Relevance: Standard SSA transformation logic for modern backends.
[32] Braun, M. et al. "Simple and efficient construction of static single assignment form." Springer, 2013. Relevance: Foundation for LLVM IR structure.

