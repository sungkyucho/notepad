################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GMMP_lib/Operation/GMMP_Operation.c 

OBJS += \
./GMMP_lib/Operation/GMMP_Operation.o 

C_DEPS += \
./GMMP_lib/Operation/GMMP_Operation.d 


# Each subdirectory must supply rules for building sources it contributes
GMMP_lib/Operation/%.o: ../GMMP_lib/Operation/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


