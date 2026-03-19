# AVA Architecture: SRAM, Firmware, and the Level 1.1 Accelerator

This document answers two critical architectural questions: 
1. How does the **SRAM** actually work in this system, and how do your C++ modifications become hardware instructions?
2. How exactly does the **Level 1.1 AVA Accelerator** hardware work inside the RTL?

---

## 1. The SRAM & Firmware Lifecycle

Your understanding is mostly corect, but let's tighten the terminology so you can explain exactly how the software "arrives" at the hardware.

### What is SRAM?
SRAM (Static Random Access Memory) is the physical, on-chip memory of your SoC. Unlike your laptop's massive, slow DRAM RAM sticks, SRAM is tiny (256 KB in AVA) but incredibly fast. It is the central nervous system of your SoC. **Everything** lives here:
1. The `.tflite` model weights (read-only arrays of INT8 data).
2. The image data (the 96x96 camera frame).
3. The intermediate activations (the output of Layer 1 becomes the input for Layer 2).
4. **The Firmware itself (The Instructions).**

### How does the firmware get there? (The Compilation Flow)
1. **Writing the Code:** In `conv.h` and `depthwise_conv.h`, you ripped out standard C++ `a * b` multiplication loops. You inserted `asm volatile ("vpdot.vv ...")` strings.
2. **Compiling the Code:** When you run `make` and build the TFLite Micro benchmark, the RISC-V GCC cross-compiler processes your whole project. 
   - When it sees standard C++, it translates it into standard RISC-V scalar instructions (e.g., `add x1, x2, x3`).
   - When it sees your `asm volatile`, it translates those strings directly into your custom 32-bit machine-code opcodes (e.g., an `OP-V` instruction).
3. **The Firmware Binary:** The compiler produces a single binary `.elf` file. This file contains millions of 32-bit instructions (a mix of standard scalar and your custom vector math).
4. **Loading the SRAM:** When you run the simulation, this `.elf` file is physically loaded into the 256 KB SRAM on your simulated chip. 

### How does the architecture execute it?
SRAM is just passive storage; it doesn't "do" anything. It just holds the 0s and 1s.

1. The CV32E40X Host CPU constantly pulls 32-bit strings out of SRAM. 
2. The CPU decodes the string. 
3. If it's a normal instruction (e.g., `add`), the CPU executes it.
4. If it's our custom `vpdot` instruction, the CPU realizes "Wait, I don't know how to do this. This is a vector instruction." The CPU pushes that exact 32-bit string **over the APU interface** straight into the **AVA Accelerator**.

---

## 2. Deep Dive: Level 1.1 AVA Accelerator (The Hardware)

You are essentially being asked: "Okay, the CPU just handed the AVA Accelerator an instruction. What actually happens in the silicon?"

This traces the exact physical data path through the 5 hardware components in your Level 1.1 DFD diagram.

### Node 1: The Command FIFO (`vector_fifo.sv`)
* **What it is:** A First-In, First-Out queue (basically a tiny waiting room) deep inside the accelerator. It holds up to 4 instructions at once.
* **How it works:** When the CPU pushes an instruction over the APU, the FIFO grabs it. The FIFO then instantly pushes an **APU Grant** signal back to the CPU. 
* **Why it matters (Defend this):** "Because of this FIFO, we achieve **Hardware Decoupling**. We trick the CPU into thinking the accelerator instantly finished the math. The CPU moves on to calculate the next loop counter while the accelerator is still grinding away at the math in the background. Without the FIFO, the CPU would stall for thousands of cycles waiting for the huge dot product to finish."

### Node 2: The Vector Decoder (`vector_decoder.sv`)
* **What it is:** The control tower. It pops the next instruction out of the FIFO. 
* **How it works:** It looks at the 32 bits and asks three questions:
   1. Is this memory? (If yes, wake up the VLSU).
   2. Which registers do we need? (Wake up the Register File).
   3. What math are we doing? (Wake up the PEs).

### Node 3: The Vector Load-Store Unit (VLSU) (`vector_lsu.sv`)
* **What it is:** AVA's personal bridge to the SRAM. 
* **How it works:** If the Decoder sees a `vle8.v` (Vector Load INT8) instruction, the VLSU wakes up. The CPU already told it the starting memory address. The VLSU reaches out to SRAM over the OBI (Open Bus Interface) bus. 
* **The Catch:** The OBI bus is only 32 bits wide, but our Vector Registers are 128 bits wide.
* **The Solution:** The VLSU autonomously fires 4 back-to-transaction memory reads, gathers 32+32+32+32 bits, staples them together into a 128-bit block, and slams them into the Register File. By doing this, AVA fetches data directly from SRAM without bothering the CPU.

### Node 4: The Vector Register File (`vector_registers.sv`)
* **What it is:** The ultra-fast, local scratchpad. It consists of 32 physical slots (`v0` through `v31`). Every slot holds 128 bits. 
* **How it works:** All data flows through here. Images and Weights come from the VLSU and sit in these slots. When it is time to do math, the Register File outputs two 128-bit lanes (e.g., `vs1` and `vs2`) straight into the Processing Elements.

### Node 5: The Arithmetic Processing Elements (`arith_stage.sv` & `arith_pe.sv`)
* **What it is:** The actual calculators. There are four 32-bit Processing Elements (PEs) that run strictly in parallel side-by-side. 
* **How it works (The `vpdot` instruction cycle):**
   When the two 128-bit lanes (`vs1` weights, `vs2` activations) flow into the PEs, this all happens in **ONE single clock cycle**:
   1. **Zero-Skipping:** Physical hardware logic gates verify if the 8-bit weight or activation is exactly `0`. If so, a `skip_mac` wire is flipped, and the multiplier physically powers down for that specific slice to save energy. If the entire 128-bit lane is zeros, a `compact_cycle` wire tells the global clock to instantly skip ahead, erasing a cycle of dead time. 
   2. **Packed Dot Product:** Instead of multiplying one 32-bit number (which would waste 24 bits of wire since our numbers are INT8), the PE chops its 32-bit lane into 4 separate 8-bit chunks. It simultaneously multiplies $A_1 \times B_1$, $A_2 \times B_2$, $A_3 \times B_3$, and $A_4 \times B_4$. 
   3. **Accumulation:** It takes those 4 tiny products and adds them all together onto the PE's internal 32-bit accumulator. That is **16 MAC operations across the 4 PEs in a single clock tick**.
   4. **Fused Requantization & ReLU:** Convolution naturally creates massive 32-bit numbers. For TFLite, we need them shrunk back to 8 bits. Before the 32-bit sum leaves the PE, the hardware multiplies it by a pre-computed scale factor, bit-shifts it rightwards (to chop off trailing data), and passes it through a Multiplexer (Mux). If the Mux sees the number is negative, it outputs `0` instead. This is hardware ReLU.

Finally, the new 8-bit number drops out of the PE and lands safely back into the Vector Register File, ready to be sent back to SRAM by the VLSU.
