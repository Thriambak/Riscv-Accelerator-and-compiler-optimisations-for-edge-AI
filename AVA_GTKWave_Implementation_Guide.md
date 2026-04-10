# How to Implement GTKWave & Waveforms for your AVA Project

When presenting hardware architecture (like an accelerator) to academics, examiners, or engineers, visualizing the cycle-by-cycle execution is the ultimate proof. It proves that your FIFO absorbs CPU stalls and that your DROM actually bypasses the main bus bandwidth.

You have **two powerful ways** to implement this for your project:

## 1. The Presentation Approach: Embed Interactive Waveforms (WaveDrom)
Since you already have a beautiful web-based UI (`AVA_Interactive_Showcase.html`), the most professional way to show a "GTKWave" trace **instantly** without requiring the judges to install Linux/GTKWave is to use **WaveDrom**.

WaveDrom is a library that renders beautiful, GTKWave-style SVG timing diagrams directly in the browser. 

*I have already modified your `AVA_Interactive_Showcase.html` to include a 4th tab with exactly this!* If you open your live demo now, you will see a cycle-accurate timing diagram proving your FIFO decoupling and DROM hit logic right in the browser.

## 2. The Real Hardware Approach: Extracting VCD traces for GTKWave
If your professors or examiners demand to see the raw hardware trace running through the actual desktop GTKWave program, you need to extract a `.vcd` (Value Change Dump) file from the CV32E40X + AVA Verilator simulation.

Here are the exact steps and code snippets you need to implement to get real GTKWave traces.

### A. Enable VCD Tracing in your C++ Verilator Testbench (`tb_top.cpp` or your main loop)
You need to add the tracing library and tell the simulator to record the signals. Replace/add this to your main verilator execution file:

```cpp
#include "verilated.h"
#include "verilated_vcd_c.h" // 1. Include the VCD tracing header
#include "Vava_top.h"        // Your compiled top module

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 2. Turn on tracing capabilities globally
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vava_top* top = new Vava_top;
    
    // 3. Attach the tracer to your top module. Depth 99 captures ALL submodules
    top->trace(tfp, 99); 
    
    // 4. Open the output file
    tfp->open("ava_trace.vcd");

    int main_time = 0;
    
    // Inside your simulation loop (clock toggling)
    while (!Verilated::gotFinish() && main_time < MAX_CYCLES) {
        top->clk_i = !top->clk_i;
        top->eval();
        
        // 5. Dump the current values to the VCD
        tfp->dump(main_time);
        main_time++;
    }

    // 6. Clean up safely to ensure file saves properly
    tfp->close(); 
    delete top;
    return 0;
}
```

### B. Compile the Verilator model with `--trace`
When you invoke Verilator, you must pass the `--trace` flag so it generates the C++ tracing code.

```bash
# In your Makefile or terminal command
verilator -Wall --trace -cc ava_top.sv --exe tb_top.cpp
make -j -C obj_dir -f Vava_top.mk Vava_top
```

### C. Run the simulation
```bash
./obj_dir/Vava_top
```
*This will output an `ava_trace.vcd` file weighing anywhere from a few MBs to GBs depending on simulation length in your directory.*

### D. Open in GTKWave
Launch GTKWave from your terminal:
```bash
gtkwave ava_trace.vcd
```

### E. Which Signals to Add to the GTKWave Viewer?
Once GTKWave is open, the main grid will be blank. Navigate the hierarchy tree (`TOP -> ava_top -> ...`) on the left and drag these specific signals into your Signal List to prove to your examiners that the accelerator works:

**To prove the Command Elasticity FIFO works:**
- `TOP.ava_top.vector_fifo.fifo_push` *(Should spike when CPU encounters an instruction)*
- `TOP.ava_top.vector_fifo.fifo_pop` *(Should spike later when the AVA is ready for it)*
- `TOP.ava_top.vector_fifo.fifo_count` *(Should grow >0 indicating absorption while CPU moves ahead)*
- `TOP.ava_top.apu_gnt_o` *(Must instantly follow `apu_req_i`, proving immediate CPU decoupling)*

**To prove DROM Memory bypass works:**
- `TOP.ava_top.vector_lsu.vlsu_req_o` *(The request leaving the Vector Load/Store)*
- `TOP.ava_top.vector_lsu.drom_hit` *(Must be HIGH when fetching known weights)*
- `TOP.ava_top.obi_req_o` *(Must be LOW when DROM hits, proving we saved main memory OBI bus cycles!)*

**To prove 4-Lane SIMD (vpdot.vv) works:**
- `TOP.ava_top.arith_stage.pe_mac_active[3:0]` *(All 4 execution lanes must fire high concurrently!)*
- `TOP.ava_top.vector_registers.vreg_we_o` *(Writes the 8-bit result safely back home)*

---

### Why this dual strategy is flawless for your presentation:
1. **The HTML Web-Viewer (WaveDrom):** Allows you to point, click, and easily explain cycle execution to a non-expert audience during a live demo without the messy zooming constraints of GTKWave.
2. **The Actual GTKWave VCD:** You can keep a screenshot, or a recorded video of GTKWave natively as **raw proof** that the simulated silicon works exactly as advertised for the thesis defense reviewers or technical judges.
