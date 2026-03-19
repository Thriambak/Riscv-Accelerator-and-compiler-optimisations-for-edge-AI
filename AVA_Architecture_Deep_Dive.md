# AVA Architecture: End-to-End Deep Dive 

This document provides an exhaustive, narrative-driven explanation of the AVA (AI Vector Accelerator) project. It connects the software framework (TFLite Micro) down to the physical silicon (RTL gates), explaining exactly how data flows through the system to achieve a 10.3× speedup on the Visual Wake Words (VWW) benchmark.

Use this as a presentation script or a master reference document.

---

## Part 1: The High-Level Workflow (Level 0 & Level 1)

### The Big Picture (System Context)
At the absolute highest level, the **AVA Inference Platform** is a complete, self-contained AI brain. It doesn't rely on the cloud. 
1. We feed it a **Quantized TFLite Model** (the rules, trained offline).
2. We feed it **Raw Sensor Input** (a 96x96 image, flattened into a 1D array of 9,216 bytes).
3. The platform processes this array through 28 neural network layers and spits out a **Classification Output** (e.g., [Person: 96%, No Person: 4%]).

### The Hardware-Software Divide (The SoC)
To achieve this, the platform splits the work between Software and Hardware.
The code that figures out *what* to do is the **TFLite Micro (TFLM) Framework**. 
The hardware that actually *does* the math is a custom System-on-Chip (SoC) comprising two distinct processors sharing a 256 KB **System Memory (SRAM)**.

1. **The Host CPU (CV32E40X):** This is a standard RISC-V scalar processor. It acts as the manager. It fetches the C++ firmware from SRAM, runs the `for` loops, calculates memory pointers, and handles the logic of the TFLM framework. However, it is fundamentally bad at calculating thousands of multiplications at once.
2. **The AVA Vector Accelerator:** This is our custom silicon co-processor. It is bolted onto the CPU via the APU (Auxiliary Processing Unit) interface. It is deaf to standard C++ code; it only wakes up when the CPU sends it a custom `OP-V` vector instruction. 

**The Decoupled Workflow:**
When the CPU hits a massive matrix multiplication, it doesn't do the math. Instead, it fires a 32-bit custom instruction (like `vpdot.vv`) over the APU Request wire to AVA. 
Crucially, AVA instantly sends an "APU Grant" signal back. This tells the CPU, "I've queued your request, you can go back to work."
Because AVA has its own independent connection to the System Memory (the OBI bus), it can load the matrix data, crunch the numbers, and store the result completely in the background while the CPU moves on to calculate the next loop counter. This parallelism is the bedrock of AVA's performance.

---

## Part 2: Inside the Silicon Pipeline (Level 1.1 - The RTL)

Let's trace exactly what happens inside the AVA Accelerator when it receives a vector instruction from the CPU. This is the custom RTL (SystemVerilog) pipeline.

### Entity 1: The Command FIFO (`vector_fifo.sv`)
When the CPU sends a vector instruction over the APU, it lands in the Command FIFO. 
Think of this as a waiting room with 4 chairs. Even if the accelerator is busy grinding through a massive 256-element multiplication, the CPU can drop up to 3 more instructions into this waiting room and immediately go back to its software duties. This decoupling guarantees the CPU is never bottlenecked by the math accelerator.

### Entity 2: The Vector Decoder (`vector_decoder.sv`)
The Decoder is the dispatcher. It pops instructions off the FIFO queue and translates the 32-bit string into hardware actions. 
* "Is this a load from memory?" -> It wakes up the VLSU.
* "Which registers do we need?" -> It signals the Vector Register File.
* "Is this a dot product?" -> It wakes up the Arithmetic PEs.

### Entity 3: The Vector Load-Store Unit (VLSU / `vector_lsu.sv`)
Before we can do math, we need data. The VLSU calculates the exact physical SRAM addresses and executes memory transactions. Because the OBI memory bus is only 32 bits wide, but our vector registers are 128 bits wide, the VLSU automatically fires 4 sequential 32-bit read requests to the SRAM, staples them together into a 128-bit package, and delivers it to the Register File.

### Entity 4: The Vector Register File (`vector_registers.sv`)
This is the ultra-fast, on-chip scratchpad memory. It has 32 slots, each holding 128 bits of data. It acts as the heart of the datapath—everything loaded from memory sits here, and every mathematical result computed by the PEs is written back here before eventually being stored to SRAM.

### Entity 5: The Arithmetic Processing Elements (`arith_stage.sv` & `arith_pe.sv`)
This is where the 10.3× speedup is physically born. There are four 32-bit Processing Elements (PEs) operating in parallel. When the Decoder fires a `vpdot` (Packed Dot Product) instruction, here is exactly what happens in a single clock cycle:

1. **Operands Arrive:** Two 128-bit vectors (`vs1` and `vs2`) drop out of the Register file into the 4 PEs.
2. **Zero-Skipping:** The hardware instantly inspects the INT8 data. If a weight is `0` or an activation is `0`, a `skip_mac` wire is flipped. The multiplier is bypassed entirely to save power. If all elements in that cycle are 0, a `compact_cycle` signal fires, instantly fast-forwarding the pipeline clock and erasing dead time.
3. **The 4x MAC (`vpdot`):** Instead of wasting a 32-bit multiplier on an 8-bit number, the PE splits its logic. It executes four separate 8-bit × 8-bit multiplications simultaneously, then sums all 4 products together with the PE's internal accumulator. Over the four parallel PEs, that is **16 MAC operations occurring in a single clock tick**.
4. **Fused Requantization & ReLU:** Convolution results in massive 32-bit numbers. Before the result is written back, the hardware applies a pre-calculated scale factor, bit-shifts the number back down to an 8-bit range, and automatically forces any negative numbers to `0` (Hardware ReLU). 
By doing this in the same pipeline stage, we eliminate the need for the CPU to run separate software functions just to clamp numbers and shift bits.

---

## Part 3: Orchestrating the Matrix (Level 2 - TFLite Micro)

Hardware needs instructions. The TFLite Micro framework is responsible for parsing the visual wake words model and generating the specific `vle8` and `vpdot` instructions the hardware craves.

### Entity 1: The MicroInterpreter & Memory Planner
When the platform boots, the `MicroInterpreter` parses the offline `.tflite` file. It maps out the 28 layers of the MobileNet architecture (14 standard convolutions, 14 depthwise convolutions). 
Since SRAM is precious (only 256 KB), the `Memory Planner` analyzes the lifecycle of every tensor and maps them to overlapping memory addresses. It ensures that Layer 3 can safely overwrite the memory used by Layer 1, keeping our total RAM footprint minimal.

### Entity 2: The Modified Kernels (`conv.h` & `depthwise_conv.h`)
This is where the software was hand-modified to bridge the gap to the AVA hardware.

When the Interpreter reaches a Convolution layer, it calls our modified C++ kernel. 
Standard TFLM code uses nested `for` loops to multiply every pixel by every weight one by one. This takes 854 million cycles on a standard CPU. 

We brutally ripped out the inner loops. Here is the new workflow:
1. **Precompute Filter Sums:** Because of asymmetric INT8 quantization, the math requires summing up the filter weights to handle zero-point offsets. Standard TFLM recalculates this sum millions of times inside the inner loop. We moved this calculation to the very top of the function. We sum the weights once, store the table in memory, and never calculate it again.
2. **Hoist `vsetvli`:** To tell the vector hardware how long our vectors are, we use a command called `vsetvli`. Standard compilers put this *inside* the loop. We hoisted it outside the loop, saving an instruction every iteration.
3. **Inline Assembly (`asm volatile`):** Instead of letting the C++ compiler guess how to do math, we wrote raw machine code directly into the C++ file. We tell the CPU:
    * Run `vle8.v` to command the VLSU to fetch 128 bits of image data.
    * Run `vpdot.vv` to command the PEs to do 16 MACs instantly.
    * Run `vse32.v` to push the final 8-bit requantized activation back to SRAM.

### The Cycle Completes
Once the kernel finishes, the resulting activation tensor sits in SRAM. The Interpreter queues up the next layer, points it at that exact memory location, and the process repeats. 

After 28 layers of this, the final two numbers are printed to the console: The probability that a person is standing in front of the camera. The result? The exact same mathematical precision as the CPU-only run, but executing in 83 million cycles instead of 854 million. 
