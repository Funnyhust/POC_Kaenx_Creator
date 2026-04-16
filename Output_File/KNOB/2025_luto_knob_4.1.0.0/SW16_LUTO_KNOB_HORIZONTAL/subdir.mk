################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../div_mod.S 

OBJS += \
./div_mod.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.S
	@echo 'Building file: $<'
	@echo 'Invoking: TC32 CC/Assembler'
	tc32-elf-gcc -Xassembler"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0" -DMCU_STARTUP_8258_RET_16K -D__PROJECT_MESH__=1 -DCHIP_TYPE=CHIP_TYPE_8258 -D_SWITCH_DEVICE_=1 -D_BTN_NUMBER_=16 -D_SCREEN_HOZ_=1 -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


