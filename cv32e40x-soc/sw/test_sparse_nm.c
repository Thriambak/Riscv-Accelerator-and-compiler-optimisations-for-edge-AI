// test_sparse_nm.c — Benchmark: Dense vpdot vs Sparse vspdot
// Compares cycle counts for identical data with 2:4 sparsity applied
#include "ava_intrinsics.h"
#include <stdint.h>

// 64 elements = 16 groups of 4 → 4 cycles per vpdot at SEW=32/LMUL=4
// Weights: 2:4 sparse (exactly 2 of every 4 are zero)
int8_t __attribute__((aligned(32))) activations[64];
int8_t __attribute__((aligned(32))) weights_dense[64];
int8_t __attribute__((
    aligned(32))) weights_sparse[64]; // same but with 2:4 zeros enforced

// Sparse metadata: 16 groups × 4 bits = 64 bits, but we use 32 bits (8 groups
// per word) For 2:4 sparsity: each 4-bit mask has exactly 2 bits set Pattern:
// 0101 0101 0101 0101 0101 0101 0101 0101 = 0x55555555 (elements 0,2 are
// non-zero in each group of 4)
uint32_t sparse_meta_word = 0x55555555; // bits[1:0]=01, bits[3:2]=01 per group

int main() {
  // Initialize data
  for (int i = 0; i < 64; i++) {
    activations[i] = (i % 7) + 1;   // 1-7, never zero
    weights_dense[i] = (i % 5) + 1; // 1-5, never zero
  }

  // Create 2:4 sparse weights: zero out elements 1,3 in each group of 4
  for (int i = 0; i < 64; i++) {
    int pos_in_group = i % 4;
    if (pos_in_group == 1 || pos_in_group == 3)
      weights_sparse[i] = 0; // Pruned
    else
      weights_sparse[i] = weights_dense[i]; // Keep
  }

  uint32_t vl;
  uint32_t start, end;

  // ============================================================
  // TEST 1: Dense dot product (vpdot) — all 64 elements computed
  // ============================================================
  AVA_VSETVLI_IMM(10); // e32, m4 → VL=16
  AVA_VMV_VI(4, 0);    // Clear accumulator v4

  PERF_BEGIN(start);
  // Process 4 blocks of 16 packed-INT8 elements each
  const int8_t *a_ptr = activations;
  const int8_t *w_ptr = weights_dense;
  for (int block = 0; block < 4; block++) {
    AVA_VSETVLI(vl, 16, 10); // e32, m4
    AVA_VLE32(8, a_ptr);
    AVA_VLE32(12, w_ptr);
    AVA_VPDOT_VV(4, 8, 12); // v4 += packed_dot(v8, v12)
    a_ptr += vl * 4;
    w_ptr += vl * 4;
  }
  PERF_END(end);

  // Store dense result via perf memory locations
  volatile uint32_t dense_cycles = end - start;

  // ============================================================
  // TEST 2: Sparse dot product (vspdot) — skip zero weights
  // ============================================================
  AVA_VSETVLI_IMM(10); // e32, m4
  AVA_VMV_VI(4, 0);    // Clear accumulator v4

  // Load sparse metadata into hardware register
  AVA_VSPMETA(sparse_meta_word);

  PERF_BEGIN(start);
  a_ptr = activations;
  w_ptr = weights_sparse;
  for (int block = 0; block < 4; block++) {
    AVA_VSETVLI(vl, 16, 10); // e32, m4
    AVA_VLE32(8, a_ptr);
    AVA_VLE32(12, w_ptr);
    AVA_VSPDOT_VV(4, 8, 12); // v4 += sparse_dot(v8, v12)
    a_ptr += vl * 4;
    w_ptr += vl * 4;
  }
  PERF_END(end);

  volatile uint32_t sparse_cycles = end - start;

  // Force writes so simulator can read them
  *(volatile uint32_t *)0x20000 = dense_cycles;
  *(volatile uint32_t *)0x20004 = sparse_cycles;

  return 0;
}
