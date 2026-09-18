################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/8258/adc.c \
../drivers/8258/aes.c \
../drivers/8258/analog.c \
../drivers/8258/audio.c \
../drivers/8258/bsp.c \
../drivers/8258/clock.c \
../drivers/8258/emi.c \
../drivers/8258/flash.c \
../drivers/8258/flash_mesh_extend.c \
../drivers/8258/gpio_8258.c \
../drivers/8258/i2c.c \
../drivers/8258/lpc.c \
../drivers/8258/qdec.c \
../drivers/8258/random.c \
../drivers/8258/s7816.c \
../drivers/8258/spi.c \
../drivers/8258/timer.c \
../drivers/8258/uart.c \
../drivers/8258/watchdog.c 

OBJS += \
./drivers/8258/adc.o \
./drivers/8258/aes.o \
./drivers/8258/analog.o \
./drivers/8258/audio.o \
./drivers/8258/bsp.o \
./drivers/8258/clock.o \
./drivers/8258/emi.o \
./drivers/8258/flash.o \
./drivers/8258/flash_mesh_extend.o \
./drivers/8258/gpio_8258.o \
./drivers/8258/i2c.o \
./drivers/8258/lpc.o \
./drivers/8258/qdec.o \
./drivers/8258/random.o \
./drivers/8258/s7816.o \
./drivers/8258/spi.o \
./drivers/8258/timer.o \
./drivers/8258/uart.o \
./drivers/8258/watchdog.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/8258/%.o: ../drivers/8258/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TC32 Compiler'
	tc32-elf-gcc -ffunction-sections -fdata-sections -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\mijia_ble_api" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\mi_api\libs" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\sdk_src\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\include" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\cfg" -I"D:\Lumi\LM_2025\LUTO\BLE mesh\.src\BLE-LM-luto_knob_2025\2025_luto_knob_4.1.0.0\vendor\common\llsync\data_template" -D__PROJECT_MESH__=1 -D__telink__ -DCHIP_TYPE=CHIP_TYPE_8258 -D_BTN_NUMBER_=16 -D_SWITCH_DEVICE_=1 -D_SCREEN_VER_=1 -Wall -O2 -fpack-struct -fshort-enums -finline-small-functions -std=gnu99 -fshort-wchar -fms-extensions -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


