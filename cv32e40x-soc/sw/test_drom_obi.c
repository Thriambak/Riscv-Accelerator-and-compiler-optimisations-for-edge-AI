#include <stdint.h>

// Helper macros for AVA instructions (modified to handle xpack GCC strict
// registers)
#define _AVA_OPMVX(funct6, vs2, rs1, vd)                                       \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((rs1) << 15) | (6 << 12) |  \
   ((vd) << 7) | 0x57)
#define _AVA_OPIVV(funct6, vs2, vs1, vd)                                       \
  (((funct6) << 26) | (1 << 25) | ((vs2) << 20) | ((vs1) << 15) | (0 << 12) |  \
   ((vd) << 7) | 0x57)
#define _AVA_VLE8(vd, rs1_reg)                                                 \
  ((0 << 29) | (0 << 28) | (0 << 26) | (1 << 25) | (0 << 20) |                 \
   ((rs1_reg) << 15) | (0 << 12) | ((vd) << 7) | 0x07)
#define _AVA_VSE8(vs3, rs1_reg)                                                \
  ((0 << 29) | (0 << 28) | (0 << 26) | (1 << 25) | (0 << 20) |                 \
   ((rs1_reg) << 15) | (0 << 12) | ((vs3) << 7) | 0x27)

#define AVA_VSETVLI_XX(vtype_imm)                                              \
  asm volatile(".insn i 0x57, 7, x0, x0, " #vtype_imm)
#define AVA_VADD_VV(vd, vs2, vs1)                                              \
  asm volatile(".word %0" ::"i"(_AVA_OPIVV(0, vs2, vs1, vd)))

#define AVA_VLE8_V(vd, base_var)                                               \
  do {                                                                         \
    register const void *_base asm("x15") = (const void *)(base_var);          \
    asm volatile(".word %0" ::"i"(_AVA_VLE8(vd, 15)), "r"(_base));             \
  } while (0)
#define AVA_VSE8_V(vs3, base_var)                                              \
  do {                                                                         \
    register void *_base asm("x15") = (void *)(base_var);                      \
    asm volatile(".word %0" ::"i"(_AVA_VSE8(vs3, 15)), "r"(_base));            \
  } while (0)

#define AVA_PERF_START(tmp) asm volatile("csrr %0, mcycle" : "=r"(tmp))
#define AVA_PERF_END(tmp, start_val)                                           \
  do {                                                                         \
    uint32_t _end;                                                             \
    asm volatile("csrr %0, mcycle" : "=r"(_end));                              \
    (tmp) = _end - (start_val);                                                \
  } while (0)

#define V4 4

// Define a large buffer (must be multiple of 4 for coalescing)
#define BUF_SIZE 4096
int8_t input_data[BUF_SIZE] __attribute__((aligned(4)));
int8_t output_data[BUF_SIZE] __attribute__((aligned(4)));

// Global array to store results so we can read them from memory dump
volatile uint32_t benchmark_results_drom[4]
    __attribute__((section(".data"))) = {0};

void init_data() {
  for (int i = 0; i < BUF_SIZE; i++) {
    input_data[i] = (int8_t)(i % 128);
  }
}

uint32_t run_scalar_copy() {
  uint32_t start_cycles, end_cycles;
  AVA_PERF_START(start_cycles);
  for (int i = 0; i < BUF_SIZE; i++) {
    output_data[i] = input_data[i];
  }
  AVA_PERF_END(end_cycles, start_cycles);
  return end_cycles;
}

uint32_t run_vector_copy() {
  uint32_t start_cycles, end_cycles;
  AVA_VSETVLI_XX(10); // e8, m4

  AVA_PERF_START(start_cycles);
  for (int i = 0; i < BUF_SIZE; i += 64) {
    AVA_VLE8_V(V4, &input_data[i]);
    AVA_VSE8_V(V4, &output_data[i]);
  }
  AVA_PERF_END(end_cycles, start_cycles);

  return end_cycles;
}

uint32_t run_vector_synthetic() {
  uint32_t start_cycles, end_cycles;
  AVA_VSETVLI_XX(10);

  AVA_PERF_START(start_cycles);
  for (int i = 0; i < BUF_SIZE; i += 64) {
    AVA_VLE8_V(V4, &input_data[i]);
    AVA_VADD_VV(V4, V4, V4); // Some compute to show pipelined OBI overlap
    AVA_VSE8_V(V4, &output_data[i]);
  }
  AVA_PERF_END(end_cycles, start_cycles);
  return end_cycles;
}

int main() {
  init_data();

  // 0. Scalar (CPU) Bulk Memory Copy
  benchmark_results_drom[0] = run_scalar_copy();

  // 1. Vector (AVA) Bulk Memory Copy (DROM Coalescing + OBI Pipelining)
  benchmark_results_drom[1] = run_vector_copy();

  // 2. Vector Synthetic Compute (Compute Overlap hidden by OBI Pipelining)
  benchmark_results_drom[2] = run_vector_synthetic();

  // We can run `riscv-none-elf-objdump -t | grep benchmark_results_drom`
  // to find where the results are stored, and look them up!
  return 0; // exit
}
