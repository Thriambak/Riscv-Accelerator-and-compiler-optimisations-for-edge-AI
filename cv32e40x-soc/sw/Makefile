# Copyright TU Wien
# Licensed under the ISC license, see LICENSE.txt for details
# SPDX-License-Identifier: ISC


# Generic Makefile for RV32IMV applications
# Specify program name with PROG, object files with OBJ

SW_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

ifeq ($(USE_LLVM),1)
RISCV_CC   := ~/toolchains/llvm-riscv/bin/clang --target=riscv32-unknown-elf
RISCV_DUMP := ~/toolchains/llvm-riscv/bin/llvm-objdump
CFLAGS = -march=rv32imv_xava1p0 -mabi=ilp32 -static -mcmodel=medany                   \
         -fvisibility=hidden -nostdlib -nostartfiles -Wall -I$(SW_DIR)
else
RISCV_PREFIX ?= /home/thriambak/toolchains/xpack-riscv-none-elf-gcc-14.2.0-2/bin/riscv-none-elf-
RISCV_CC   := $(RISCV_PREFIX)gcc
RISCV_DUMP := $(RISCV_PREFIX)objdump
CFLAGS = -march=rv32imv -mabi=ilp32 -static -mcmodel=medany                   \
         -fvisibility=hidden -nostdlib -nostartfiles -Wall -I$(SW_DIR)
endif
RISCV_OBCP := /home/thriambak/toolchains/xpack-riscv-none-elf-gcc-14.2.0-2/bin/riscv-none-elf-objcopy

LD_SCRIPT := $(SW_DIR)/link.ld

# add crt0 to object files
RISCV_OBJ_SCALAR := $(SW_DIR)/crt0.o test_scalar.o
RISCV_OBJ_VECTOR := $(SW_DIR)/crt0.o test_vector.o
RISCV_OBJ_DOT    := $(SW_DIR)/crt0.o test_dot.o
RISCV_OBJ_RELU   := $(SW_DIR)/crt0.o test_relu.o
RISCV_OBJ_SPARSE := $(SW_DIR)/crt0.o test_sparse.o
RISCV_OBJ_MACC   := $(SW_DIR)/crt0.o test_macc.o
RISCV_OBJ_FC     := $(SW_DIR)/crt0.o test_fc_layer.o
RISCV_OBJ_ACT    := $(SW_DIR)/crt0.o test_activations.o
RISCV_OBJ_RQ     := $(SW_DIR)/crt0.o test_requant.o
RISCV_OBJ_CONV1D := $(SW_DIR)/crt0.o test_conv1d.o
RISCV_OBJ_MPOOL  := $(SW_DIR)/crt0.o test_maxpool.o
RISCV_OBJ_SPCOMP := $(SW_DIR)/crt0.o test_sparse_compact.o
RISCV_OBJ_WMACC  := $(SW_DIR)/crt0.o test_wmacc.o
RISCV_OBJ_LMUL   := $(SW_DIR)/crt0.o test_lmul.o
RISCV_OBJ_CONV2D := $(SW_DIR)/crt0.o test_conv2d.o
RISCV_OBJ_DROM   := $(SW_DIR)/crt0.o test_drom_obi.o
RISCV_OBJ_BENCH_DROM := $(SW_DIR)/crt0.o test_bench_drom.o
RISCV_OBJ_BENCH_LUT  := $(SW_DIR)/crt0.o test_bench_lut.o
RISCV_OBJ_BENCH_INT4 := $(SW_DIR)/crt0.o test_bench_int4.o
RISCV_OBJ_LMUL_REAL := $(SW_DIR)/crt0.o test_lmul_real.o
RISCV_OBJ_VPDOT_PERF := $(SW_DIR)/crt0.o test_vpdot_perf.o

all: test_scalar.vmem test_vector.vmem test_dot.vmem test_relu.vmem test_sparse.vmem test_macc.vmem test_fc_layer.vmem test_activations.vmem test_requant.vmem test_conv1d.vmem test_maxpool.vmem test_sparse_compact.vmem test_bench_drom.vmem test_bench_lut.vmem test_bench_int4.vmem test_vpdot_perf.vmem

dump: $(PROG).elf
	$(RISCV_DUMP) -D $<

test_scalar.elf: $(RISCV_OBJ_SCALAR) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_SCALAR) -o $@

test_vector.elf: $(RISCV_OBJ_VECTOR) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_VECTOR) -o $@

test_dot.elf: $(RISCV_OBJ_DOT) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_DOT) -o $@

test_relu.elf: $(RISCV_OBJ_RELU) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_RELU) -o $@

test_sparse.elf: $(RISCV_OBJ_SPARSE) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_SPARSE) -o $@

test_macc.elf: $(RISCV_OBJ_MACC) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_MACC) -o $@

test_fc_layer.elf: $(RISCV_OBJ_FC) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_FC) -o $@

test_activations.elf: $(RISCV_OBJ_ACT) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_ACT) -o $@

test_requant.elf: $(RISCV_OBJ_RQ) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_RQ) -o $@

test_conv1d.elf: $(RISCV_OBJ_CONV1D) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_CONV1D) -o $@

test_maxpool.elf: $(RISCV_OBJ_MPOOL) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_MPOOL) -o $@

test_sparse_compact.elf: $(RISCV_OBJ_SPCOMP) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_SPCOMP) -o $@

test_wmacc.elf: $(RISCV_OBJ_WMACC) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_WMACC) -o $@

test_lmul.elf: $(RISCV_OBJ_LMUL) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_LMUL) -o $@

test_conv2d.elf: $(RISCV_OBJ_CONV2D) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_CONV2D) -o $@

test_drom_obi.elf: $(RISCV_OBJ_DROM) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_DROM) -o $@

test_bench_drom.elf: $(RISCV_OBJ_BENCH_DROM) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_BENCH_DROM) -o $@

test_bench_lut.elf: $(RISCV_OBJ_BENCH_LUT) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_BENCH_LUT) -o $@

test_bench_int4.elf: $(RISCV_OBJ_BENCH_INT4) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_BENCH_INT4) -o $@

test_lmul_real.elf: $(RISCV_OBJ_LMUL_REAL) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_LMUL_REAL) -o $@

test_vpdot_perf.elf: $(RISCV_OBJ_VPDOT_PERF) $(LD_SCRIPT)
	$(RISCV_CC) $(CFLAGS) -T $(LD_SCRIPT) $(RISCV_OBJ_VPDOT_PERF) -o $@

%.o: %.c
	$(RISCV_CC) $(CFLAGS) -c -o $@ $<

%.o: %.S
	$(RISCV_CC) $(CFLAGS) -c -o $@ $<

# currently unusable due to problems with byte order
# (see https://github.com/riscv/riscv-tools/issues/168#issuecomment-554973539)
#%.vmem: %.elf
#	$(OBJCOPY) -O verilog --verilog-data-width 4 $^ $@

# workaround (requires srecord):
# note: start address must be reset manually because it is lost in bin file
%.vmem: %.bin
	srec_cat $^ -binary -offset 0x0000 -byte-swap 4 -o $@ -vmem
%.bin: %.elf
	$(RISCV_OBCP) -O binary $^ $@

clean:
	rm -f *.o *.elf *.bin *.vmem
