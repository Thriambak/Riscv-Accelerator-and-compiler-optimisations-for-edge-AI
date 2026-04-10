ifeq ($(TARGET_ARCH), cv32e40p-ml)
	BSP_DIR = ./bsp/cv32e40p/

    # GCC toolchain root (used by both paths: directly by GCC, or as sysroot for clang)
    GCC_TOOLCHAIN = /home/thriambak/toolchains/xpack-riscv-none-elf-gcc-14.2.0-2

ifeq ($(USE_LLVM), 1)
    # Custom LLVM with AVA (Xava) vendor extension support
    # --gcc-toolchain tells clang where to find C++ headers and libraries
    TARGET_TOOLCHAIN_ROOT = $(HOME)/toolchains/llvm-riscv/bin/
    TARGET_TOOLCHAIN_PREFIX =
    CC  = $(TARGET_TOOLCHAIN_ROOT)clang --target=riscv32-unknown-elf --gcc-toolchain=$(GCC_TOOLCHAIN) --sysroot=$(GCC_TOOLCHAIN)/riscv-none-elf
    CXX = $(TARGET_TOOLCHAIN_ROOT)clang++ --target=riscv32-unknown-elf --gcc-toolchain=$(GCC_TOOLCHAIN) --sysroot=$(GCC_TOOLCHAIN)/riscv-none-elf
    AR  = $(TARGET_TOOLCHAIN_ROOT)llvm-ar
    LD  = $(TARGET_TOOLCHAIN_ROOT)ld.lld
    OBJDUMP = $(TARGET_TOOLCHAIN_ROOT)llvm-objdump
    OBJCOPY = $(GCC_TOOLCHAIN)/bin/riscv-none-elf-objcopy

    CXXFLAGS += \
        -O3 \
        -fomit-frame-pointer \
        -g \
        -static \
        -mabi=ilp32 \
        -march=rv32im_zve32x_xava1p0 \
        -fno-vectorize \
        -fno-slp-vectorize \
        -mno-relax \
        -Wall \
        -DCV32E40P \
        -isystem $(GCC_TOOLCHAIN)/riscv-none-elf/include/c++/14.2.0 \
        -isystem $(GCC_TOOLCHAIN)/riscv-none-elf/include/c++/14.2.0/riscv-none-elf \
        -isystem $(GCC_TOOLCHAIN)/riscv-none-elf/include \
        -isystem $(GCC_TOOLCHAIN)/lib/gcc/riscv-none-elf/14.2.0/include

    CCFLAGS += $(CXXFLAGS)

    # Since GCC 14.2.0 xpack doesn't include an exact 'rv32imc' multilib folder for libgcc,
    # we link against the 'rv32im' version.
    LDFLAGS += \
        --rtlib=libgcc \
        -fuse-ld=$(GCC_TOOLCHAIN)/bin/riscv-none-elf-ld \
        -static \
        -nostartfiles \
        ${BSP_DIR}crtbegin.o \
        -L ${BSP_DIR} \
        -lcv-verif \
        -T ${BSP_DIR}link.ld \
        -L$(GCC_TOOLCHAIN)/lib/gcc/riscv-none-elf/14.2.0/rv32im/ilp32 \
        -L$(GCC_TOOLCHAIN)/riscv-none-elf/lib/rv32im/ilp32 \
        -lgcc

    TFMICRO_MAKE_FLAGS := "TARGET=mcu_riscv TARGET_ARCH=cv32e40p TAGS=\"cv32e40p-ml\""
else
    TARGET_TOOLCHAIN_PREFIX = riscv-none-elf-

    CXXFLAGS += \
        -O3 \
        -fomit-frame-pointer \
        -g \
        -static \
        -mabi=ilp32 \
        -march=rv32imc \
        -mno-relax \
        -Wall \
        -pedantic \
        -DCV32E40P

    CCFLAGS += CXXFLAGS

	# Check if Spike execution is required

	ifneq (,$(findstring spike,$(TAGS)))
		LDFLAGS += \
			--specs=nano.specs -u _printf_float \

		TFMICRO_MAKE_FLAGS := "TARGET=mcu_riscv TARGET_ARCH=cv32e40p TAGS="cv32e40p-ml spike""
	else
		LDFLAGS += \
			-static \
			-nostartfiles \
			--specs=nosys.specs \
			${BSP_DIR}crtbegin.o \
			-L ${BSP_DIR} \
			-lcv-verif \
			-T ${BSP_DIR}link.ld

		TFMICRO_MAKE_FLAGS := "TARGET=mcu_riscv TARGET_ARCH=cv32e40p TAGS=\"cv32e40p-ml\""
	endif
endif

endif
