#include "perf.h"
#include <stdint.h>
#include <stdio.h>

int8_t __attribute__((aligned(32))) arr1[1024];
int8_t __attribute__((aligned(32))) arr2[1024];

int main() {
  for (int i = 0; i < 1024; i++) {
    arr1[i] = i % 10;
    arr2[i] = i % 10;
  }

  uint32_t start_cycles, end_cycles;

  // Test purely C++ version
  int32_t sum_c = 0;
  PERF_BEGIN(start_cycles);
  for (int i = 0; i < 1024; i++) {
    sum_c += arr1[i] * arr2[i];
  }
  PERF_END(end_cycles);
  printf("C++ Loop Cycles: %lu, Sum: %ld\n", end_cycles - start_cycles, sum_c);

  // Test vpdot.vv baseline version
  int32_t sum_v = 0;
  PERF_BEGIN(start_cycles);
  int remaining = 1024;
  int blocks = remaining / 4;
  if (blocks > 0) {
    asm volatile(".insn i 0x57, 7, x0, x0, 11"); // e32, m8
    asm volatile("vmv.v.i v3, 0");
    int b_rem = blocks;
    const int8_t *in_v = arr1;
    const int8_t *wt_v = arr2;
    while (b_rem > 0) {
      uint32_t vl;
      asm volatile(".insn i 0x57, 7, %0, %1, 10"
                   : "=r"(vl)
                   : "r"(b_rem)); // e32, m4
      asm volatile("vle32.v v1, (%0)" : : "r"(in_v));
      asm volatile("vle32.v v2, (%0)" : : "r"(wt_v));
      // Modified AVA_VPDOT_VV, explicitly passing v3, v1, v2
      asm volatile(
          ".insn r 0x57, 0, 0x14, 0x2, 0x3, 0x1, 0x2"); // vpdot.vv v3, v1, v2
      in_v += vl * 4;
      wt_v += vl * 4;
      b_rem -= vl;
    }
    asm volatile(".insn i 0x57, 7, x0, x0, 11");
    asm volatile("vmv.s.x v0, %1          \n"
                 "vredsum.vs v0, v3, v0   \n"
                 "vmv.x.s %0, v0          \n"
                 : "=r"(sum_v)
                 : "r"(0));
  }
  PERF_END(end_cycles);
  printf("Vector Loop Cycles: %lu, Sum: %ld\n", end_cycles - start_cycles,
         sum_v);

  return 0;
}
