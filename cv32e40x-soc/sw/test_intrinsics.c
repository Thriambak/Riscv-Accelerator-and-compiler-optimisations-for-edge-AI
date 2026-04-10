// test_intrinsics.c — Verify ava_intrinsics.h compiles and produces correct
// encodings
#include "ava_intrinsics.h"

int8_t __attribute__((aligned(32))) test_a[16] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
int8_t __attribute__((aligned(32))) test_b[16] = {1, 1, 1, 1, 1, 1, 1, 1,
                                                  1, 1, 1, 1, 1, 1, 1, 1};

int main() {
  uint32_t vl;
  uint32_t start, end;

  // Test: vsetvli (I-type — standard .insn)
  AVA_VSETVLI(vl, 16, 0); // e8, m1

  // Test: Loads (standard RVV mnemonics)
  AVA_VLE8(1, test_a);
  AVA_VLE8(2, test_b);
  AVA_VMV_VI(3, 0);

  // Test: Packed dot product (.word encoding)
  PERF_BEGIN(start);
  AVA_VPDOT_VV(3, 1, 2); // v3 += packed_dot(v1, v2)
  PERF_END(end);

  // Test: Activations (.word encoding)
  AVA_VRELU(4, 1);    // v4 = relu(v1)
  AVA_VSIGMOID(5, 1); // v5 = sigmoid(v1)
  AVA_VTANH(6, 1);    // v6 = tanh(v1)
  AVA_VABS(7, 1);     // v7 = |v1|

  // Test: MAC variants
  AVA_VMACC_VV(3, 1, 2); // v3 += v1 * v2

  // Test: INT4 dot
  AVA_VPDOT4_VV(3, 1, 2); // v3 += packed_dot4(v1, v2)

  // If we get here, all macros compiled correctly
  return 0;
}
