#include <stdint.h>

uint32_t test_vsetvli(uint32_t avl) {
    uint32_t vl;
    asm volatile(".insn i 0x57, 7, %0, %1, 10" : "=r"(vl) : "r"(avl));
    return vl;
}

uint32_t test_vsetvli_alt(uint32_t avl) {
    uint32_t vl;
    asm volatile(".insn i 0x57, 7, %0, 10(%1)" : "=r"(vl) : "r"(avl));
    return vl;
}
