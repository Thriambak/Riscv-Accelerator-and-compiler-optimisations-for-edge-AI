# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcv32e40x_wrapper.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcv32e40x_wrapper \
	Vcv32e40x_wrapper___024root__DepSet_h8d275636__0 \
	Vcv32e40x_wrapper___024root__DepSet_h8d275636__1 \
	Vcv32e40x_wrapper___024root__DepSet_h8d275636__2 \
	Vcv32e40x_wrapper___024root__DepSet_h8d275636__3 \
	Vcv32e40x_wrapper___024root__DepSet_h8fa00a67__0 \
	Vcv32e40x_wrapper___024root__DepSet_h8fa00a67__1 \
	Vcv32e40x_wrapper_if_xif__DepSet_h0b76e1cc__0 \
	Vcv32e40x_wrapper_if_c_obi__DepSet_h03eff3e7__0 \
	Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2__DepSet_hd6b23c2d__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcv32e40x_wrapper__ConstPool_0 \
	Vcv32e40x_wrapper___024root__Slow \
	Vcv32e40x_wrapper___024root__DepSet_h8d275636__0__Slow \
	Vcv32e40x_wrapper___024root__DepSet_h8fa00a67__0__Slow \
	Vcv32e40x_wrapper___024unit__Slow \
	Vcv32e40x_wrapper___024unit__DepSet_h2e0c8620__0__Slow \
	Vcv32e40x_wrapper_if_xif__Slow \
	Vcv32e40x_wrapper_if_xif__DepSet_h0b76e1cc__0__Slow \
	Vcv32e40x_wrapper_if_c_obi__Slow \
	Vcv32e40x_wrapper_if_c_obi__DepSet_h03eff3e7__0__Slow \
	Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2__Slow \
	Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2__DepSet_hd6b23c2d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcv32e40x_wrapper__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
