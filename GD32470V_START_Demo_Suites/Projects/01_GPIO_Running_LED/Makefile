##########################################################################################################################
# File automatically-generated by tool: [projectgenerator] version: [3.13.0-B3] date: [Wed Feb 02 22:44:56 CST 2022]
##########################################################################################################################

# ------------------------------------------------
# Generic Makefile (based on gcc)
#
# ChangeLog :
#	2022-12-01 - update for GD32F427
#	2017-02-10 - Several enhancements + project update mode
#   2015-07-22 - first version
# ------------------------------------------------

######################################
# target
######################################
TARGET = GD32F470


######################################
# building variables
######################################
# debug build?
DEBUG = 1
# optimization
OPT = -Og


#######################################
# paths
#######################################
# Build path
BUILD_DIR = build

#######################################
# Firmware Librar and Utilities
#######################################
GD32_CMSIS_LIBRARY_DIR = ../../../GD32F4xx_Firmware_Library/CMSIS
GD32_SP_LIBRARY_DIR = ../../../GD32F4xx_Firmware_Library/GD32F4xx_standard_peripheral
GD32_UTILITIES_DIR = ../../Utilities

######################################
# source
######################################
# C sources
C_SOURCES += $(GD32_CMSIS_LIBRARY_DIR)/GD/GD32F4xx/Source/system_gd32f4xx.c
C_SOURCES += $(GD32_UTILITIES_DIR)/gd32f470v_start.c
C_SOURCES +=  \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_dbg.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_i2c.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_rcu.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_dci.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_fwdgt.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_ipa.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_gpio.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_rtc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_timer.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_iref.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_pmu.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_spi.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_sdio.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_ctc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_fmc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_tli.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_trng.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_can.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_misc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_crc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_enet.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_syscfg.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_exmc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_adc.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_dac.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_usart.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_dma.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_exti.c \
$(GD32_SP_LIBRARY_DIR)/Source/gd32f4xx_wwdgt.c \
./bsp_led.c \
./sys.c \
./systick.c \
./main.c \
./gd32f4xx_it.c

# ASM sources
ASM_SOURCES +=  \
./support_files/startup_gd32f4xx.s

#######################################
# binaries
#######################################
PREFIX = arm-none-eabi-
# The gcc compiler bin path can be either defined in make command via GCC_PATH variable (> make GCC_PATH=xxx)
# either it can be added to the PATH environment variable.
# GCC_PATH = /Applications/ARM/bin
GCC_PATH = /Applications/ArmGNUToolchain/12.2.mpacbti-rel1/arm-none-eabi/bin

ifdef GCC_PATH
CC = $(GCC_PATH)/$(PREFIX)gcc
AS = $(GCC_PATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(GCC_PATH)/$(PREFIX)objcopy
SZ = $(GCC_PATH)/$(PREFIX)size
else
CC = $(PREFIX)gcc
AS = $(PREFIX)gcc -x assembler-with-cpp
CP = $(PREFIX)objcopy
SZ = $(PREFIX)size
endif
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S
 
#######################################
# CFLAGS
#######################################
# cpu
CPU = -mcpu=cortex-m4

# fpu
FPU = -mfpu=fpv4-sp-d16

# float-abi
FLOAT-ABI = -mfloat-abi=hard

# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

# macros for gcc
# AS defines
AS_DEFS = 

# C defines
C_DEFS =  \
-DUSE_STDPERIPH_DRIVER \
-DGD32F4xx \
-DGD32F470


# AS includes
AS_INCLUDES = 

# C includes
C_INCLUDES +=  \
-I../../../GD32F4xx_Firmware_Library/GD32F4xx_standard_peripheral/Include \
-I./
C_INCLUDES += \
-I$(GD32_CMSIS_LIBRARY_DIR) \
-I$(GD32_CMSIS_LIBRARY_DIR)/GD/GD32F4xx/Include \
-I$(GD32_SP_LIBRARY_DIR)/Include \
-I$(GD32_UTILITIES_DIR)

# compile gcc flags
#ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -W -fdata-sections -ffunction-sections

#CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections
CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -W -fdata-sections -ffunction-sections

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif


# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"


#######################################
# LDFLAGS
#######################################
# link script
LDSCRIPT +=  \
./support_files/GD32F427VK_FLASH.ld

# libraries
LIBS = -lc -lm -lnosys 
LIBDIR = 
LDFLAGS = $(MCU) -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# default action: build all
all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin


#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))
# list of ASM program objects
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR) 
	$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/%.o: %.s Makefile | $(BUILD_DIR)
	$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) Makefile
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(BIN) $< $@	
	
$(BUILD_DIR):
	mkdir $@		

#######################################
# clean up
#######################################
clean:
	-rm -fR $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(wildcard $(BUILD_DIR)/*.d)

# *** EOF ***