# AVA Project Data Flow Diagrams (Revised)

These Data Flow Diagrams (DFDs) map the exact technical flow of data through the system, specifically highlighting the architectural modifications and custom instructions added for this project.

---

## 1. Level 0 DFD (System Boundaries)
This diagram defines the absolute boundaries of the inference system.

```mermaid
flowchart LR
    %% Styles
    classDef process fill:#fca5a5,stroke:#333,stroke-width:2px,shape:circle;
    classDef entity fill:#bae1ff,stroke:#333,stroke-width:2px;

    %% Entities
    Model[Offline Quantized Weights]:::entity
    Sensor[Raw Sensor Data \n VWW Image Array]:::entity
    Console[Inference Terminal]:::entity

    %% Core System
    AVA((0.0 \n AVA Hardware-Software \n Inference Platform)):::process

    %% Data Flows
    Model -- ".tflite INT8 Architecture" --> AVA
    Sensor -- "Raw Input Tensors" --> AVA
    
    AVA -- "Classification Result" --> Console
```

---

## 2. Level 1 DFD (Software vs. Hardware Partitioning)
This diagram opens the system to show how the high-level software interacts with the physical System-on-Chip (SoC). It completely abstracts TFLM's internal parsing and focuses strictly on what the software *delivers* to the hardware.

I have highlighted our **Custom Project Modifications** in yellow.

```mermaid
flowchart TD
    %% Styles
    classDef software fill:#ffdfba,stroke:#333,stroke-width:2px,shape:circle;
    classDef hardware fill:#baffc9,stroke:#333,stroke-width:2px,shape:circle;
    classDef datastore fill:#e8e8e8,stroke:#333,stroke-width:2px,shape:cylinder;
    classDef highlight fill:#fef08a,stroke:#b45309,stroke-width:2px,color:#000;

    %% Elements
    Mem[(System Memory \n SRAM)]:::datastore
    
    %% Processes
    TFLM((1.0 \n TFLite Micro \n Framework)):::software
    SoC((2.0 \n RISC-V Host CPU \n CV32E40X)):::hardware
    AVA((3.0 \n AVA Vector \n Accelerator)):::hardware

    %% Data Flows
    TFLM -- "Saves Model Weights \n & Sensor Input" --> Mem
    
    TFLM -- "MODIFIED: Compiles Custom \n Vector Instructions" ---> SoC:::highlight
    SoC -- "APU Request \n (Custom OP-V Instructions)" --> AVA
    
    AVA -- "MODIFIED: Unit-Stride \n Vector Loads vle8" <--> Mem:::highlight
    AVA -- "APU Grant \n (Immediate CPU Release)" --> SoC
    
    AVA -- "Vector Store vse32 \n or Scalar Result" --> Mem
```

**Key Takeaways:** 
*   **TFLM (1.0)** acts simply as the orchestrator to populate `System Memory` and compile our `Custom Vector Instructions`.
*   **The CV32E40X Host CPU (2.0)** issues these instructions using the APU interface.
*   **The AVA Accelerator (3.0)** receives the requests and independently pulls data from `System Memory` using efficient Unit-Stride memory access rules.

---

## 3. Level 2 DFD (Inside the AVA Accelerator RTL)
This diagram is completely zoomed in on Process `3.0` (The AVA Accelerator). It traces the cycle-by-cycle journey of data through the RTL pipeline.

I have strictly highlighted our **Custom Project Modifications** in yellow to emphasize the hardware improvements.

```mermaid
flowchart TD
    %% Styles
    classDef process fill:#d8bdf8,stroke:#333,stroke-width:2px,shape:circle;
    classDef datastore fill:#e8e8e8,stroke:#333,stroke-width:2px,shape:cylinder;
    classDef highlight fill:#fef08a,stroke:#b45309,stroke-width:2px,color:#000;

    %% External Interfaces
    APU_In[APU Request from Host CPU]
    Mem[(OBI Memory Bus)]:::datastore
    
    %% Internal RTL Modules
    FIFO((3.1 \n Command \n FIFO)):::process
    Decoder((3.2 \n Vector \n Decoder)):::process
    VLSU((3.3 \n Vector Load-Store \n Unit)):::process
    VREG((3.4 \n Vector Register \n File)):::process
    PEs((3.5 \n Arithmetic \n Processing Elements)):::process

    %% Data Flows
    APU_In -- "Instruction & \n Scalar Operands" --> FIFO
    FIFO -- "MODIFIED: Decouples \n CPU Execution Latency" --> Decoder:::highlight
    
    Decoder -- "Memory Addressing" --> VLSU
    Decoder -- "Register Addresses" --> VREG
    Decoder -- "ALU Opcodes" --> PEs
    
    VLSU -- "128-bit chunks" <--> Mem
    VLSU -- "Write Load Data" --> VREG
    
    VREG -- "Vector Operands" --> PEs
    
    PEs -- "MODIFIED: Hardware \n Zero-Skipping" --> PEs:::highlight
    PEs -- "MODIFIED: Hardware \n ReLU and Requantization" --> PEs:::highlight
    PEs -- "MODIFIED: Packed \n INT8 Dot Product vpdot" --> PEs:::highlight
    
    PEs -- "Computed Vector Data" --> VREG
```

**Key Takeaways (The Data Flow):**
1.  Instructions arrive from the Host CPU into the **Command FIFO** (`3.1`), immediately decoupling the CPU from waiting.
2.  The **Decoder** (`3.2`) parses the instruction. If it's a memory instruction, it triggers the **VLSU** (`3.3`) to pull massive 128-bit chunks from the OBI Bus into the **Register File** (`3.4`).
3.  If it's an arithmetic instruction, the **Register File** feeds the data vectors into the **Arithmetic PEs** (`3.5`).
4.  Inside the PEs, our modifications take over: data is compacted via **Zero-Skipping**, squeezed through **Packed Dot Products (`vpdot`)**, and piped entirely through **Hardware Requantization & ReLU** before flowing back into the Register File.
