################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Application.cpp \
../src/Game.cpp \
../src/Land.cpp \
../src/Player.cpp \
../src/Tank.cpp \
../src/World.cpp \
../src/simplexnoise.cpp 

OBJS += \
./src/Application.o \
./src/Game.o \
./src/Land.o \
./src/Player.o \
./src/Tank.o \
./src/World.o \
./src/simplexnoise.o 

CPP_DEPS += \
./src/Application.d \
./src/Game.d \
./src/Land.d \
./src/Player.d \
./src/Tank.d \
./src/World.d \
./src/simplexnoise.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


