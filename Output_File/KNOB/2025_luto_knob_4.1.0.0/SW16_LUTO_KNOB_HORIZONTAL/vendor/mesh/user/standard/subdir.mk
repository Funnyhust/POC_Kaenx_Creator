################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../vendor/mesh/user/standard/math_operation.c \
../vendor/mesh/user/standard/time.c 

OBJS += \
./vendor/mesh/user/standard/math_operation.o \
./vendor/mesh/user/standard/time.o 


# Each subdirectory must supply rules for building sources it contributes
vendor/mesh/user/standard/%.o: ../vendor/mesh/user/standard/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TC32 Compiler'
	tc32-elf-gcc -ffunction-sections -fdata-sections -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\mijia_ble_api" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\libs" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\sdk_src\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\cfg" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\data_template" -D__PROJECT_MESH__=1 -D__telink__ -DCHIP_TYPE=CHIP_TYPE_8258 -D_BTN_NUMBER_=16 -D_SWITCH_DEVICE_=1 -D_SCREEN_HOZ_=1 -Wall -O2 -fpack-struct -fshort-enums -finline-small-functions -std=gnu99 -fshort-wchar -fms-extensions -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


