ifeq ($(TARGET_ARCH), cv32e40p-ml)
	BSP_DIR = ./bsp/cv32e40p/

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
