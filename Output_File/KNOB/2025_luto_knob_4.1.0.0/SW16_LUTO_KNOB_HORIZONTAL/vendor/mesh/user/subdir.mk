################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../vendor/mesh/user/bind.c \
../vendor/mesh/user/cycle_funcs.c \
../vendor/mesh/user/debug.c \
../vendor/mesh/user/default_network.c \
../vendor/mesh/user/execution_scene.c \
../vendor/mesh/user/factory_reset.c \
../vendor/mesh/user/fifo.c \
../vendor/mesh/user/flash_user.c \
../vendor/mesh/user/key_report.c \
../vendor/mesh/user/led_ev.c \
../vendor/mesh/user/net_message.c \
../vendor/mesh/user/pre_update.c \
../vendor/mesh/user/relay.c \
../vendor/mesh/user/scene_btn.c \
../vendor/mesh/user/serial.c \
../vendor/mesh/user/serial_queue.c \
../vendor/mesh/user/sw_binding.c \
../vendor/mesh/user/timestamp.c \
../vendor/mesh/user/user_irq.c \
../vendor/mesh/user/utilities.c 

OBJS += \
./vendor/mesh/user/bind.o \
./vendor/mesh/user/cycle_funcs.o \
./vendor/mesh/user/debug.o \
./vendor/mesh/user/default_network.o \
./vendor/mesh/user/execution_scene.o \
./vendor/mesh/user/factory_reset.o \
./vendor/mesh/user/fifo.o \
./vendor/mesh/user/flash_user.o \
./vendor/mesh/user/key_report.o \
./vendor/mesh/user/led_ev.o \
./vendor/mesh/user/net_message.o \
./vendor/mesh/user/pre_update.o \
./vendor/mesh/user/relay.o \
./vendor/mesh/user/scene_btn.o \
./vendor/mesh/user/serial.o \
./vendor/mesh/user/serial_queue.o \
./vendor/mesh/user/sw_binding.o \
./vendor/mesh/user/timestamp.o \
./vendor/mesh/user/user_irq.o \
./vendor/mesh/user/utilities.o 


# Each subdirectory must supply rules for building sources it contributes
vendor/mesh/user/%.o: ../vendor/mesh/user/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TC32 Compiler'
	tc32-elf-gcc -ffunction-sections -fdata-sections -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\mijia_ble_api" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\libs" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\sdk_src\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\cfg" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\data_template" -D__PROJECT_MESH__=1 -D__telink__ -DCHIP_TYPE=CHIP_TYPE_8258 -D_BTN_NUMBER_=16 -D_SWITCH_DEVICE_=1 -D_SCREEN_HOZ_=1 -Wall -O2 -fpack-struct -fshort-enums -finline-small-functions -std=gnu99 -fshort-wchar -fms-extensions -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


