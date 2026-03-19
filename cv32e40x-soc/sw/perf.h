#ifndef PERF_H
#define PERF_H

// Macros to read the cycle counter into a register
#define START_PERF_COUNT(temp_reg) \
    csrr temp_reg, cycle;         \
    la t6, perf_start;             \
    sw temp_reg, 0(t6)

#define END_PERF_COUNT(temp_reg)   \
    csrr temp_reg, cycle;         \
    la t6, perf_end;               \
    sw temp_reg, 0(t6)

#endif // PERF_H
