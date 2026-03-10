---
name: ava-platform
description: >
  Expert skill specifically for the AI-Vector-Accelerator GitHub organisation
  (https://github.com/AI-Vector-Accelerator). Covers all repositories in the org:
  ava-core (APU-attached RVV accelerator RTL), x-ava-core (XIF variant), cv32e40p
  (modified OpenHW core with APU replacing FPU), cv32e40x-soc, core-v-verif-ava,
  core-v-verif-xava, tensorflow fork (TFLM RVV port), tinymlperf fork, NN_software
  (RVV assembly kernels), and riscv-toolchain-setup-tests. Use this skill whenever
  the user mentions: AVA core, ava-core, AI Vector Accelerator, APU interface on
  CV32E40P, RVV v0.8 with vlen:32 elen:32 slen:32, the TFLM vectorised kernel swap,
  TinyMLPerf on CV32E40P, the 4-PE SIMD arithmetic unit, DEC/CSR/VREG/ARITH blocks,
  the rvv-0.8.x toolchain for this project, core-v-verif-ava, XIF accelerator
  integration, or any question about extending/debugging/verifying this specific
  platform. Trigger even for questions like "why is my Spike run giving wrong
  outputs", "how do I add a new vectorised kernel", or "what TARGET_ARCH do I use".
---

# AVA Platform Skill
## AI-Vector-Accelerator — Full Stack Reference

This skill covers every layer of the AI-Vector-Accelerator platform, from RTL blocks
inside `ava-core` all the way to the TinyMLPerf benchmark harness. Read all sections
before responding, since most real questions span multiple layers (e.g., an accuracy
bug may live in the VREG, the assembly kernel, OR the TFLM kernel dispatch, and you
need to know all three to triage correctly).

---

## 1. Organisation Map — Repositories and Their Roles

Understanding which repo does what is the first thing to internalise, because the
repos must be composed together in a specific order.

**`cv32e40p`** is the *modified scalar core*. It is a fork of the OpenHW CV32E40P
with two deliberate changes: the PULP instruction set extension has been removed
(to simplify verification), and the optional FPU port has been repurposed as an
**APU (Auxiliary Processing Unit)** interface. The APU is the physical connector
between the scalar pipeline and the vector accelerator.

**`ava-core`** is the *vector accelerator RTL*. It plugs in through the APU interface.
It implements a subset of RVV v0.8. Key parameters: VLEN=32b, SLEN=32b, 32 vector
registers, 4 processing elements (PEs). Only 17 of the full RVV instruction set
are implemented — enough to achieve 5.4× speedup on TinyMLPerf.

**`x-ava-core`** is a *newer variant* that attaches to `cv32e40x` instead of
`cv32e40p`, using the **XIF (eXtension Interface)** rather than the APU. The XIF is
the OpenHW-standardised co-processor interface introduced in the CV32E40X generation.
If you are starting a new project, prefer x-ava-core — APU is legacy.

**`core-v-verif-ava`** is the *verification environment* for the ava-core/cv32e40p
combination. It is a fork of the OpenHW `core-v-verif` repo. Use this to build the
Verilator model and run the RVFI-based regression suite.

**`core-v-verif-xava`** is the equivalent for the x-ava-core/cv32e40x combination.

**`tensorflow`** is the *TFL Micro fork*. It provides two configurations: the
reference (unvectorised) TFLM port for CV32E40P, and the optimised port that swaps
in RVV assembly kernels for convolution, ReLU, addition, multiply, and pooling.

**`tinymlperf`** is the *benchmark harness*. It builds TFLM from the `tensorflow`
fork and runs the Visual Wake Word benchmark. It supports four build targets:
baseline-on-Spike, baseline-on-Verilator, vectorised-on-Spike, vectorised-on-Verilator.

**`NN_software`** contains the *standalone RVV assembly kernels*. Use this repo when
you want to develop or test a new vectorised operation in isolation before integrating
it into the TFLM fork. It includes `NN_algorithms_vector_assembly` (base) and
`NN_algorithms_vector_assembly-Optimized-cv32e40p` (optimised for the 4-PE layout).

**`riscv-toolchain-setup-tests`** contains *setup scripts and smoke tests* for the
RISC-V toolchain, Spike, and the Verilator model. Always start here when onboarding.

---

## 2. AVA Core Internal Architecture

The accelerator has four named RTL blocks. Understanding each block's job prevents
misattribution when debugging.

**DEC — Decoder and State Machine.** This block decodes incoming APU requests and
controls the WAIT/EXECUTE state machine. When the scalar CV32E40P issues a vector
instruction, it sends the encoded instruction through the APU; DEC decides what the
other blocks should do this cycle. It also drives the APU `ack` signal back to the
core when execution is complete, releasing the pipeline stall.

**CSR — Control and Status Registers.** RVV requires six CSRs (`vl`, `vtype`,
`vstart`, `vlenb`, `vcsr`, `vxsat`), but the AVA core only implements the three
that its supported instruction subset actually reads: `vl`, `vtype`, and `vstart`.
These are re-implemented inside the accelerator rather than using the CV32E40P's
built-in CSR file, deliberately, to keep the accelerator self-contained and portable.

**VREG — Vector Register File.** 32 vector registers, each VLEN=32b wide. This is
intentionally narrow — a 32-bit vector register holds either four INT8 values, two
INT16 values, or one INT32 value in packed SIMD fashion. SLEN=32b means there is no
sub-register striping; the full register width is processed in a single beat.

**ARITH — Arithmetic Execution Logic.** This is the heart of the performance gain.
It contains four processing elements that can operate simultaneously. The two modes
are: *normal* (each PE handles one 8-bit lane independently, processing four INT8
values per cycle) and a *reduction* mode where PEs cooperate on a single wider
operation. The 4-PE design directly explains why the vectorised convolution kernel
achieves close to 4× throughput on the inner multiply-accumulate loop.

---

## 3. APU Interface — The Hardware Contract

The APU is a request/acknowledge handshake. Getting this interface right is the
most common failure point when extending the system. Here are the exact signal
semantics:

The **core side** (CV32E40P) drives: `apu_req` (valid request), `apu_operands[2:0]`
(three 32-bit operands, rs1/rs2/rs3 from the scalar register file), `apu_op[5:0]`
(6-bit opcode derived from the instruction encoding), and `apu_flags_i[14:0]`
(15-bit flag field carrying vtype/vl context).

The **accelerator side** (ava-core) drives: `apu_gnt` (grant: accelerator is ready
to accept the request), `apu_rvalid` (result is ready), `apu_result[31:0]` (the
scalar result to be written back to rd), and `apu_flags_o[4:0]` (5-bit status flags).

The pipeline stall mechanism works as follows: the CV32E40P halts the ID and EX
stages from the moment `apu_req` is asserted until `apu_rvalid` returns. For the
short instructions (single-cycle arithmetic), this is just 1 or 2 cycles. For the
vector memory instructions (`vle`, `vse`), which must iterate over all elements
and may have long latencies, the stall can extend for tens of cycles — this required
significant modification to the scalar core's stall logic, and is the main reason
the cv32e40p fork exists rather than using the upstream core directly.

**If you are adding a new instruction:** you must touch DEC to recognise the new
opcode, ARITH if it needs new compute logic, and the CV32E40P stall logic if the
new instruction has a variable completion time.

---

## 4. XIF Interface (x-ava-core and CV32E40X)

The XIF is the standardised evolution of APU. The key conceptual difference is that
XIF is *decoupled*: the co-processor can accept new requests before it has finished
previous ones (out-of-order acceptance), and results are tagged with a transaction
ID. This makes pipelining the accelerator much cleaner than APU's blocking model.

For the `x-ava-core`, the RTL structure (DEC/CSR/VREG/ARITH) is the same, but the
interface logic in DEC is rewritten to speak XIF. Use `core-v-verif-xava` for
verification. If you are building a new feature for the AVA platform, start with
`x-ava-core`; the APU path in `ava-core`/`cv32e40p` is stable but not the direction
of future development.

---

## 5. Toolchain Setup and Spike Configuration

The RVV v0.8 toolchain is different from a standard RISC-V toolchain. The standard
`riscv32-unknown-elf-gcc` does not know about vector instructions. You must use the
`rvv-0.8.x` branch of the RISC-V GNU toolchain. The `riscv-toolchain-setup-tests`
repo contains the exact build scripts; follow them before attempting anything else.

The canonical Spike invocation for this platform is:
```
spike --isa=RV32IMCV --varch=vlen:32,elen:32,slen:32 \
      /opt/riscv/riscv32-unknown-elf/bin/pk <elf_binary>
```

The `--varch` parameters must match the hardware parameters: `vlen:32` (register
width 32b), `elen:32` (maximum element width 32b), `slen:32` (striping length 32b).
If you change any of these in the RTL, you must change all three here to avoid Spike
accepting programs that the hardware will not execute correctly.

---

## 6. Building and Running TinyMLPerf

All build commands are run from inside the `tinymlperf/v0.1/` directory. There are
four meaningful combinations:

**Baseline, simulated on Spike** (unvectorised reference):
```bash
make TARGET_ARCH=cv32e40p TAGS=spike
spike --isa=RV32IMCV --varch=vlen:32,elen:32,slen:32 \
      /opt/riscv/riscv32-unknown-elf/bin/pk vww_perf_runner
```

**Vectorised (AVA), simulated on Spike** (software-level correctness check, fastest
iteration loop):
```bash
make TARGET_ARCH=cv32e40p-ml TAGS=spike
spike --isa=RV32IMCV --varch=vlen:32,elen:32,slen:32 \
      /opt/riscv/riscv32-unknown-elf/bin/pk vww_perf_runner
```

**Verilator model** (RTL-accurate cycle counts): swap `TAGS=spike` for the Verilator
target. Build the Verilator model first using `core-v-verif-ava`. This is slower
but gives you the 5.4× figure (Spike gives 7.3× because it doesn't model pipeline
stalls or memory latency).

To pin the TFLM version: open `v0.1/example_submission/download_and_build_tfmicro.sh`
and set `TF_COMMIT_SHA` to the desired commit hash from the `tensorflow` fork. This
is important for reproducibility — the TFLM API changes across commits.

---

## 7. TFLM Kernel Architecture and Adding New Optimised Kernels

TFL Micro uses a *modular kernel* system where each NN operation lives in a separate
C++ file. The build system selects which implementation to compile using preprocessor
flags and directory overrides. The AVA project exploits this to swap in RVV-optimised
versions of five operations: convolution, ReLU, addition, multiply, and pooling.

The structure in the `tensorflow` fork is:
- **Reference kernels** live in `tensorflow/lite/micro/kernels/` — these are the
  standard scalar C++ implementations.
- **AVA-optimised kernels** are in a separate directory that the build system
  prioritises when `TARGET_ARCH=cv32e40p-ml` is selected.
- Each optimised kernel maintains the same top-level C++ function signature as the
  reference kernel. It then calls RVV assembly functions from `NN_software`.

**To add a new optimised kernel**, the workflow is: (1) write and test the RVV
assembly in `NN_software` using its standalone testbench, (2) wrap it in a C
function with the correct calling convention, (3) create a new kernel file in the
AVA kernel directory that calls your C wrapper, (4) update the build flags in the
`tinymlperf` Makefile to pull in your new directory. Always verify that the new
kernel output matches the reference kernel output exactly before measuring
performance — quantisation errors accumulate and will cause the benchmark accuracy
check to fail.

---

## 8. RVV Assembly Kernel Patterns

The `NN_software` repo stores assembly as `.S` files. The v0.8 RVV syntax differs
slightly from the ratified v1.0 spec — pay attention to this when reading RISC-V
vector documentation online, since most modern docs describe v1.0.

A typical INT8 convolution inner loop using the 4-PE layout looks like:

```asm
# Set vector configuration: 4 x INT8 elements, LMUL=1
vsetvli t0, a0, e8,m1       # t0 = actual vl set by hardware (≤4 for this platform)

# Load 4 input activations packed into a single 32-bit vector register
vlb.v   v1, (a1)             # v1 = [x0, x1, x2, x3] (4 x INT8)

# Load 4 weights
vlb.v   v2, (a2)             # v2 = [w0, w1, w2, w3]

# Multiply-accumulate: each PE handles one lane
vmacc.vv v0, v1, v2          # v0 += v1 * v2, elementwise across 4 PEs

# Post-increment pointers and loop
addi    a1, a1, 4
addi    a2, a2, 4
```

The four PEs in ARITH directly map to the four lanes in this code — that is not a
coincidence. The hardware was sized to match the most common inner loop width of
INT8 convolutions.

---

## 9. Debugging Workflows Specific to This Platform

**Accuracy mismatch between Spike and Verilator.** This is the most common class
of bug. The root cause is almost always in the VREG or ARITH blocks handling edge
cases when `vl < 4` (the tail case where fewer than 4 elements remain). VREG must
mask write-enables for the inactive lanes, and ARITH must not propagate garbage
from idle PEs. Check the RVFI trace against Spike's `--log-commits` output,
diffing `rvfi_rd_wdata` at each vector instruction retirement.

**Scalar writeback corruption.** When a vector instruction is in-flight, the
CV32E40P's writeback stage must be disabled for the scalar register file — otherwise
the core tries to write a stale result to `rd` at the end of the normal pipeline
before the accelerator has finished. The cv32e40p fork disables this by gating the
`regfile_waddr_wb_o` and `regfile_we_wb_o` signals during APU execution. If you see
a scalar register getting unexpectedly overwritten mid-vector-sequence, check this
gating path first.

**Long stalls causing simulation hangs.** Vector memory instructions (`vle`, `vse`)
iterate element by element and assert `apu_req` held for many cycles. If the APU
grant logic in the core doesn't handle a held `apu_req` correctly, the core can
deadlock. The symptom in Verilator is the simulation running forever with no RVFI
retirements. Check `apu_gnt` is correctly wired to deassert when `apu_rvalid` fires.

**Toolchain emitting unknown instructions.** If you see `Illegal instruction` on
Spike for code you expected to be vectorised, run `riscv32-unknown-elf-objdump -d`
on your ELF and check whether the vector instructions are actually present. If they
are not, the compiler is falling back to scalar — check that `-march` includes `v`
and that you are using the rvv-0.8.x toolchain, not a standard one.

---

## 10. Performance Measurement

The TinyMLPerf port measures cycles using the RISC-V `mcycle` CSR, which the
CV32E40P increments every clock. The key measurement pattern from the codebase:

```c
// Read mcycle before and after the inference call
uint32_t start = read_csr(mcycle);
RunInference();
uint32_t end   = read_csr(mcycle);
printf("Cycles: %u\n", end - start);
```

Note this is a 32-bit read — on a long benchmark run, `mcycle` can overflow. The
TinyMLPerf harness accounts for this with a difference that wraps correctly in
unsigned arithmetic. The 5.4× figure reported in the paper is the ratio of
`(vectorised Verilator cycles) / (baseline Verilator cycles)` on the Visual Wake
Word benchmark.

---

## Reference Files

Deeper documentation for specific topics lives in `references/`:
- `references/apu-signal-table.md` — complete port list with bit widths
- `references/rvv-v08-implemented-instructions.md` — the 17 instructions the
  AVA core supports, with encoding details
- `references/tflm-kernel-directory-structure.md` — build system directory map

Create these on demand when the user needs to go deeper into one of these areas.
