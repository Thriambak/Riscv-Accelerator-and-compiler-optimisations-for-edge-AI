---
name: riscv-compiler-ideation
description: >
  Deep academic research and novel idea generation skill for RISC-V architecture
  and compiler engineering (LLVM, GCC, MLIR). Trigger this skill whenever the
  user wants to: find novel research ideas on RISC-V or compilers, survey the
  literature for gaps and open problems, generate paper-worthy contributions,
  analyse research from IEEE Xplore, ScienceDirect, ResearchGate, arXiv,
  ACM DL, or similar academic sources, synthesise ideas across compiler
  backend optimisation, code generation, ISA extension design, register
  allocation, instruction scheduling, vectorisation, or RISC-V microarchitecture.
  Also trigger when the user mentions: "novel idea", "paper worthy", "research gap",
  "LLVM pass", "RISC-V extension", "compiler optimisation", "ISA design",
  "research survey", "cite papers", or asks to brainstorm technically grounded
  contributions. This skill enforces rigorous academic standards — every idea
  must be traceable to concrete prior work and must identify a specific gap.
  No fluff, no vague contributions, no ideas that are merely engineering work
  dressed up as research.
---

# RISC-V & Compiler Research Ideation Skill

This skill governs how to perform deep literature research and synthesise
genuinely novel, implementable ideas at the intersection of RISC-V architecture
and compiler engineering. It is built around one principle: **a research idea is
only as strong as its gap argument** — you must prove that existing work does not
already solve the problem before claiming novelty.

---

## PART 1 — PAPER SOURCING PROTOCOL

### 1.1 Source Priority Hierarchy

Search sources in this order. Do not stop at tier 1 if the topic has fewer than
30 papers available there — cascade down until the minimum count is met.

**Tier 1 — Peer-reviewed venues with the highest signal-to-noise ratio**
- IEEE Xplore (search.ieee.org) — MICRO, ISCA, ASPLOS, HPCA, DAC, DATE, ICCAD,
  CGO, CC, PLDI, POPL, IEEE Transactions on Computers, IEEE TC-AD, IEEE TCAS
- ACM Digital Library (dl.acm.org) — PLDI, CGO, CC, OOPSLA, ASPLOS, PACT,
  ICS, SC (Supercomputing)
- arXiv cs.AR (hardware architecture) and cs.PL (programming languages /
  compilers) — preprints that frequently precede IEEE/ACM by 6–12 months

**Tier 2 — High-quality secondary sources**
- ScienceDirect / Elsevier — Journal of Systems Architecture, Microprocessors
  and Microsystems, Future Generation Computer Systems
- ResearchGate — use only for retrieving full PDFs of papers already identified
  in Tier 1/2 search; do not use ResearchGate search as a primary discovery tool
  because its ranking algorithm is citation-count biased and misses recent work
- Semantic Scholar (semanticscholar.org) — useful for citation graph traversal:
  given one strong paper, find everything that cites it AND everything it cites

**Tier 3 — Technical blogs and community sources**
- RISC-V International blog and working group notes (riscv.org/blog,
  github.com/riscv/riscv-isa-manual issues and PRs)
- LLVM developer blog (blog.llvm.org), LLVM Discourse (discourse.llvm.org),
  LLVM weekly newsletter
- Embecosm blog, lowRISC blog, SiFive tech blog, Chips Alliance blog
- Compiler Explorer (godbolt.org) — for empirical disassembly evidence
- High Performance Computing subreddit, RISC-V subreddit, HackerNews
  (search hn.algolia.com for "RISC-V" and "LLVM" with date filters)

**Tier 4 — Use for cultural/industry signal only, never cite in academic work**
- Twitter/X threads by known researchers (Patterson, Asanović, Lattner, etc.)
- Blog posts by Anandtech, WikiChip, RealWorldTech on microarchitecture
- Stack Overflow and Reddit for implementation-level questions

### 1.2 Paper Filtering Criteria — MUST apply before reading any paper in full

Before committing reading time to a paper, apply this four-gate filter. A paper
must pass ALL four gates to be read in full:

**GATE 1 — Recency.** For fast-moving topics (RISC-V ISA extensions, MLIR
lowering, LLM inference on RISC-V), prefer papers from 2020–2025. For foundational
topics (register allocation theory, classical instruction scheduling, SSA form),
older foundational papers (Briggs 1994, Cooper 2001, Cytron 1991) are required
reading regardless of age — do not filter these out.

**GATE 2 — Venue quality.** Tier 1 venues always pass. For arXiv preprints,
check whether the paper has been accepted at a Tier 1 venue (look for "to appear
at ISCA 2024" etc.). For technical reports, check whether the authors have
established track records (h-index ≥ 10 in the domain, affiliation with known
research groups: ETH Zurich IIS, MIT CSAIL, CMU, Berkeley ADEPT, Edinburgh, ARM
Research, Google Brain, Meta AI Research, Intel Labs).

**GATE 3 — Claim specificity.** The abstract must contain at least one
quantitative claim (e.g., "17% reduction in code size", "2.3× speedup on SPECint",
"reduces register spills by 34%"). Papers whose abstracts contain only qualitative
claims ("we propose a novel approach that improves performance") have a high
probability of being under-evaluated and should be deprioritised.

**GATE 4 — Direct relevance.** The paper must mention at least two of the
following keywords: RISC-V / RVV / rv32 / rv64, LLVM / GCC / MLIR / clang,
instruction selection / register allocation / code generation / vectorisation /
instruction scheduling, compiler backend / ISA extension / co-processor /
custom instruction, TinyML / embedded inference / edge computing / neural network
compilation (only relevant if the user's topic intersects ML).

### 1.3 Paper Reading Protocol — How to extract signal from a paper

Never read a paper linearly from abstract to conclusion. Use this order:

1. **Abstract** (30 seconds) — apply the four gates above
2. **Section headings + figure captions** (2 minutes) — understand the
   experimental setup and what quantities are being measured
3. **Results tables and graphs** (3 minutes) — extract every number. Write down:
   what was measured, on what workload, compared to what baseline, and the
   delta. Numbers without baselines are useless.
4. **Related work section** (5 minutes) — this is a pre-curated list of the
   papers you should read next. Extract all cited papers in the related work
   section that pass Gate 1–4.
5. **Introduction, final 3 paragraphs** (3 minutes) — these usually contain
   the gap argument ("existing work does X but not Y") and the future work
   statement ("we leave Z for future work"). Both are gold for ideation.
6. **Full technical sections** — read fully only if the paper passes all gates
   AND contains a technique you are considering building on.

### 1.4 Minimum Paper Count Rules

- Total papers surveyed: minimum 30, no upper limit
- At least 15 must be from Tier 1 venues (IEEE/ACM peer-reviewed)
- At least 5 must be from 2023 or later (to catch the most recent work)
- At least 3 must be foundational papers (pre-2010) that establish the
  theoretical basis for the topic (e.g., the SSA paper, the Chaitin coloring
  paper, the original RISC-V paper, the LLVM architecture paper)
- Papers that are tangentially related (pass only 2 of 4 gates) count as
  0.5 each toward the minimum — do not pad the count with weak papers

---

## PART 2 — IDEA GENERATION PROTOCOL

### 2.1 The Three Valid Sources of Novelty

Every genuinely novel research idea must derive from exactly one of these three
sources. If you cannot identify which source an idea comes from, it is not novel.

**SOURCE A — Gap in existing work.** Paper X solves problem P using method M,
but M has limitation L that X either does not address or explicitly defers to
future work. Your idea applies a different method M' that eliminates L while
preserving the benefits of M.

**SOURCE B — Cross-domain transfer.** Technique T exists in domain D1 (e.g.,
a specific register allocation strategy from GPU compilers). Domain D2 (e.g.,
RISC-V embedded compilers) has an analogous but unsolved problem P'. Nobody has
applied T to P'. Your idea is the transfer plus the non-obvious adaptation
required to make T work in D2.

**SOURCE C — Confluence of two trends.** Trend T1 (e.g., RISC-V vector extension
proliferation) and Trend T2 (e.g., LLM inference moving to edge devices) are
both real and well-documented. Their intersection creates a new problem space
that neither body of literature addresses. Your idea is a system or technique
that exists specifically in that intersection.

### 2.2 Idea Evaluation Rubric — Apply to every candidate idea

Score each idea on these five dimensions. Any idea scoring below 3 on any
single dimension is not paper-worthy and should be discarded or rebuilt.

**NOVELTY (1–5):** Does prior work already do this? 1 = done exactly. 3 = adjacent
work exists but the specific combination is unstudied. 5 = no prior work in the
specific intersection.

**IMPLEMENTABILITY (1–5):** Can this be built with currently available tools
and hardware? 1 = requires hardware that does not exist. 3 = requires moderate
engineering effort (2–6 months) using existing tools. 5 = prototypable in under
4 weeks with open source tools.

**IMPACT (1–5):** How much does this matter if it works? 1 = <5% improvement on
a narrow microbenchmark. 3 = >20% improvement on a standard benchmark suite or
a qualitative capability that did not previously exist. 5 = enables a fundamentally
different class of applications or eliminates a known hard problem.

**FALSIFIABILITY (1–5):** Can the idea be proven wrong with an experiment?
1 = no clear experimental protocol. 3 = clear hypothesis and measurable metric,
but experiment is expensive. 5 = precise hypothesis with cheap-to-run experiment
using open-source benchmarks.

**THEORETICAL GROUNDING (1–5):** Is there a formal argument that this should work?
1 = purely intuitive. 3 = informal argument by analogy with cited work.
5 = formal proof sketch or reduction to a known-hard or known-easy problem.

Only ideas scoring ≥ 3 on all five dimensions proceed to full writeup.

### 2.3 Idea Writeup Format

Every idea that passes the rubric must be written up in this exact format.
Do not deviate — this format is designed to map directly onto a paper structure.

---
### IDEA N — [Title: specific, not catchy]

**ONE-LINE CLAIM:** What this contribution achieves, in one sentence with a
number (e.g., "Reduces spill code in RISC-V RVV register allocation by ~25%
by exploiting vector register shape constraints during coloring").

**NOVELTY SOURCE:** [A / B / C from Section 2.1] — explain in two sentences
exactly what the gap or transfer or confluence is.

**THE GAP ARGUMENT:** Cite 3–5 specific papers. For each: what they do, what
they do not do, and why that gap exists (technical reason, not "nobody tried").

**THE IDEA, TECHNICALLY:** 4–8 sentences. No analogies. Describe the algorithm,
data structure, transformation, or hardware mechanism precisely enough that
a graduate student could start implementing it. Include the key insight in one
bolded sentence.

**WHY THIS SHOULD WORK — THEORETICAL BASIS:** Formal argument or reduction.
Reference any theorems, lemmas, or complexity results from prior work that
support the approach. Identify any assumptions the argument rests on and
whether those assumptions hold on RISC-V or in LLVM.

**EXPECTED RESULT:** What you predict will happen and why. Be specific:
"We expect a 15–30% reduction in spill instructions on SPEC CPU2017 integer
benchmarks compiled for rv64gc, based on the observation that [X paper]
achieved 20% reduction on ARM with a weaker version of the same constraint."

**HOW TO IMPLEMENT — MINIMUM VIABLE PROTOTYPE:**
- Tool: [LLVM version, RISC-V QEMU version, benchmark suite name]
- Step 1: [first concrete action, with specific file/pass name in LLVM if known]
- Step N: [verification step — what output confirms it works]
- Estimated effort: [weeks, assuming one researcher familiar with LLVM internals]

**RISKS AND FAILURE MODES:** What could make this not work? At minimum: one
theoretical risk, one implementation risk, one experimental risk (e.g.,
"the gain may vanish on in-order cores where scheduling pressure is lower").

**CITATIONS:** Full references for every paper mentioned, in IEEE format.
Include DOI where available.

**RUBRIC SCORES:** Novelty N/5, Implementability N/5, Impact N/5,
Falsifiability N/5, Theoretical Grounding N/5.

---

### 2.4 Domain Taxonomy — RISC-V vs Compiler Split

Every idea must be explicitly categorised. This matters because the implementation
path, the research community, and the evaluation methodology differ completely.

**RISC-V SIDE — ideas that require hardware or ISA changes**
- New standard or custom instruction design (encoding, semantics, hazard model)
- Microarchitectural changes to existing open-source cores (CV32E40P, CVA6,
  Rocket, BOOM, VexRiscV, Ibex)
- Memory hierarchy changes (scratchpad, prefetch, cache policy)
- RVV extension subset design (which instructions to implement first, why)
- Hardware-software interface design (CSRs, ABI conventions, calling conventions)

**COMPILER SIDE — ideas that live entirely in software**
- LLVM backend passes (instruction selection, register allocation, scheduling,
  peephole, prologue/epilogue)
- MLIR dialect design and lowering pipelines for RISC-V targets
- GCC RTL-level optimisations for RISC-V
- Profile-guided optimisation strategies specific to RISC-V microarchitectures
- Auto-vectorisation for RVV (loop vectoriser, SLP vectoriser improvements)
- Code size reduction for embedded RISC-V (compressed instruction selection,
  function outlining)
- Linker relaxation and RISC-V-specific ABI optimisations

**HARDWARE-SOFTWARE CODESIGN — ideas that require both**
- Compiler awareness of non-standard custom instructions
- Intrinsic generation and legalization for custom extensions
- ABI design for new calling conventions with custom register classes
- Profile-guided ISA extension selection (which instructions to add based on
  compiler analysis of the workload)

---

## PART 3 — OUTPUT CONSTRAINTS

These rules apply to all output produced under this skill. Violating them
degrades the quality of the research product.

1. **No idea without a gap argument.** Every proposed idea must cite at least
   3 papers and explain concretely why those papers do not already solve the
   problem. "No one has tried this" is not a gap argument.

2. **Numbers or nothing.** Every claim about expected impact must be accompanied
   by a number and its derivation. "Significant improvement" without a number
   means the idea has not been thought through.

3. **Name the baseline.** Every comparison must state the baseline. "Faster than
   existing approaches" without naming the baseline is not a claim.

4. **Separate the idea from the implementation.** The core idea must be
   describable in 3 sentences. If it requires 10 sentences to explain the idea
   before implementation details, the idea is not well-formed.

5. **Flag speculative claims.** Any claim that rests on an assumption that has
   not been empirically verified must be explicitly prefixed with "SPECULATIVE:".
   Do not hide uncertainty.

6. **Minimum 30 papers scanned, minimum 15 deeply read.** Do not generate ideas
   until this threshold is met. If the internet search returns fewer than 30
   relevant results, explicitly state what is missing and why, then proceed with
   whatever is available.

7. **Hard discard list — ideas in these categories are never paper-worthy:**
   - "Apply technique X to RISC-V" where X is a mature technique from x86 or
     ARM compilers and RISC-V is architecturally equivalent — the transfer is
     trivial and reviewers will reject it.
   - Benchmarking studies with no new technique (these are workshop papers at
     best, not conference contributions).
   - Tool re-implementations with no new algorithmic content.
   - "Exploration" papers that measure things but propose nothing.

---

## PART 4 — SEARCH QUERY BANK

Pre-written high-signal search queries organised by subtopic. Use these as
starting points; modify based on what you find in the related-work sections
of early papers.

### RISC-V ISA and Microarchitecture
```
"RISC-V custom instruction" "compiler" -survey 2021..2025
"RISC-V vector extension" "code generation" "performance" 2022..2025
"RISC-V" "register allocation" "spill" "vector" site:ieeexplore.ieee.org
"RVV" "LLVM" "vectorization" "auto" 2022..2025
"RISC-V" "ISA extension" "co-design" "compiler" PLDI OR MICRO OR ISCA
"CV32E40P" OR "CVA6" OR "Rocket" "compiler" "optimization" 2020..2025
"RISC-V" "compressed instructions" "code size" "machine learning"
"RISC-V" "SIMD" "embedded" "inference" "instruction selection"
```

### LLVM Backend and Code Generation
```
"LLVM" "RISC-V" "backend" "optimization" "register pressure" 2021..2025
"instruction selection" "LLVM" "DAG" "pattern matching" "embedded" 2020..2025
"LLVM" "machine scheduler" "in-order" "RISC-V" "throughput"
"LLVM" "loop vectorizer" "RVV" "scalable vector" "TinyML"
"LLVM" "register coalescing" "spill" "vector" "performance"
"MLIR" "RISC-V" "lowering" "neural network" "dialect" 2022..2025
"LLVM" "GlobalISel" "RISC-V" "instruction legalization" 2021..2025
"profile guided optimization" "RISC-V" "LLVM" "embedded" 2020..2025
```

### Compiler Optimisation Theory with RISC-V Application
```
"register allocation" "graph coloring" "RISC-V" "vector registers" 2020..2025
"instruction scheduling" "RISC-V" "in-order" "hazard" "latency hiding"
"peephole optimization" "RISC-V" "compressed" "code size" 2021..2025
"superword level parallelism" "SLP" "RISC-V" "vectorization" 2020..2025
"function outlining" "code size" "RISC-V" "embedded" compiler
"link time optimization" "LTO" "RISC-V" "cross module" inlining
"polyhedral optimization" "RISC-V" "vector" "affine" "MLIR"
"alias analysis" "RISC-V" "compiler" "memory disambiguation" 2021..2025
```

### TinyML and Inference Compilation on RISC-V
```
"TinyML" "RISC-V" "compiler" "inference" "optimization" 2022..2025
"TFLM" OR "TensorFlow Lite Micro" "RISC-V" "custom kernel" "vector"
"IREE" "RISC-V" "backend" "inference" "embedded" 2022..2025
"Apache TVM" "RISC-V" "auto-tuning" "vector" "MCU" 2021..2025
"neural network compilation" "RISC-V" "quantization" "INT8" "code generation"
"operator fusion" "compiler" "RISC-V" "inference" "latency" 2022..2025
```

---

## PART 5 — FINAL CHECKLIST BEFORE DELIVERING OUTPUT

Before presenting ideas to the user, run through this checklist. If any item
fails, fix it before presenting.

☐ At least 30 papers scanned, at least 15 read in full
☐ At least 3 papers from 2023 or later
☐ At least 3 foundational papers included
☐ Every idea has a gap argument citing ≥ 3 papers
☐ Every idea has a rubric score with all dimensions ≥ 3
☐ Every idea has a minimum viable implementation plan
☐ Every expected result has a number with derivation
☐ Every speculative claim is explicitly flagged
☐ Ideas are categorised: RISC-V side / Compiler side / Codesign
☐ Hard discard list checked — no trivial transfers or benchmarking-only ideas
☐ All citations are in IEEE format with DOIs
