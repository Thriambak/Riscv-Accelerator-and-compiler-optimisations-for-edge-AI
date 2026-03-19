# Sparse Multiply Benchmark
# Demonstrates zero-skipping: when multiplying with a sparse vector (many zeros),
# the hardware detects zero operands and skips them.
#
# Test: multiply a dense vector by a sparse vector (75% zeros)
# Dense:  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
# Sparse: [0, 0, 0, 1, 0, 0, 0, 2, 0, 0,  0,  3,  0,  0,  0,  4]
# Result: [0, 0, 0, 4, 0, 0, 0,16, 0, 0,  0, 36,  0,  0,  0, 64]
#
# The zero-skipping perf counter (counter #3) should show 12 skipped ops.

#include "perf.h"

    .text
    .global main
main:
    # 1. Start Performance Counter
    START_PERF_COUNT(t0)

    # 2. Setup
    la      a0, dense_data      # pointer to dense vector
    la      a1, sparse_data     # pointer to sparse vector (75% zeros)
    la      a2, result_data     # pointer to output
    li      a3, 16              # 16 elements

    # 3. Configure vector unit: 8-bit elements
    vsetvli t0, a3, e8          # set vl=16, sew=8

    # 4. Load both vectors
    vle8.v  v1, (a0)            # v1 = dense_data
    vle8.v  v2, (a1)            # v2 = sparse_data

    # 5. Element-wise multiply: vmul.vv v3, v2, v1
    # The zero-skipping gates will detect zeros in v2 and force those PE outputs to 0
    vmul.vv v3, v2, v1

    # 6. Store the result
    vse8.v  v3, (a2)

    # 7. Stop Performance Counter
    END_PERF_COUNT(t0)

    # Program done
    jr      x0


    .data
    .align 4
    .global dense_data
    .global sparse_data
    .global result_data

dense_data:
    .byte 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16

# Sparse vector: 75% zeros (only every 4th element is non-zero)
sparse_data:
    .byte 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4

# Output buffer
result_data:
    .byte 0,0,0,0,0,0,0,0
    .byte 0,0,0,0,0,0,0,0

    # Performance counter and verification data storage
    .align 4
    .global vdata_start, vdata_end, perf_start, perf_end
    .global vref_start, vref_end
vdata_start:
perf_start:
    .word 0x0
perf_end:
    .word 0x0
vdata_end:

    .align 4
vref_start:
    .word 0x0
vref_end:
