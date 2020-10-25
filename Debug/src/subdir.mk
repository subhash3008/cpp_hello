################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/backjack.cpp \
../src/calculator.cpp \
../src/dynamic_names_sort.cpp \
../src/find_name.cpp \
../src/hello.cpp \
../src/hilowgame.cpp \
../src/input_struct_sort.cpp \
../src/random.cpp \
../src/swap.cpp 

OBJS += \
./src/backjack.o \
./src/calculator.o \
./src/dynamic_names_sort.o \
./src/find_name.o \
./src/hello.o \
./src/hilowgame.o \
./src/input_struct_sort.o \
./src/random.o \
./src/swap.o 

CPP_DEPS += \
./src/backjack.d \
./src/calculator.d \
./src/dynamic_names_sort.d \
./src/find_name.d \
./src/hello.d \
./src/hilowgame.d \
./src/input_struct_sort.d \
./src/random.d \
./src/swap.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


