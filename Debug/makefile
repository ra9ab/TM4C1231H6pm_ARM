################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./tm4c1231h6pm_startup_ccs.obj" \
"./appl/lab_00_dio.obj" \
"./config/port_lcfg.obj" \
"./mcal/dio/dio.obj" \
"./mcal/nvic/nvic.obj" \
"./mcal/port_driver/port.obj" \
"./mcal/sys_ctr/SysCtr.obj" \
"../tm4c1231h6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include appl/subdir_vars.mk
-include config/subdir_vars.mk
-include mcal/dio/subdir_vars.mk
-include mcal/nvic/subdir_vars.mk
-include mcal/port_driver/subdir_vars.mk
-include mcal/sys_ctr/subdir_vars.mk
-include subdir_rules.mk
-include appl/subdir_rules.mk
-include config/subdir_rules.mk
-include mcal/dio/subdir_rules.mk
-include mcal/nvic/subdir_rules.mk
-include mcal/port_driver/subdir_rules.mk
-include mcal/sys_ctr/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
GPIO_ARM.out \

EXE_OUTPUTS__QUOTED += \
"GPIO_ARM.out" \

BIN_OUTPUTS += \
GPIO_ARM.hex \

BIN_OUTPUTS__QUOTED += \
"GPIO_ARM.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "GPIO_ARM.out"

# Tool invocations
GPIO_ARM.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --define=ccs="ccs" --define=PART_TM4C1231H6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"GPIO_ARM.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/lib" -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="GPIO_ARM_linkInfo.xml" --rom_model -o "GPIO_ARM.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

GPIO_ARM.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armhex"  -o "GPIO_ARM.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "tm4c1231h6pm_startup_ccs.obj" "appl\lab_00_dio.obj" "config\port_lcfg.obj" "mcal\dio\dio.obj" "mcal\nvic\nvic.obj" "mcal\port_driver\port.obj" "mcal\sys_ctr\SysCtr.obj" 
	-$(RM) "main.d" "tm4c1231h6pm_startup_ccs.d" "appl\lab_00_dio.d" "config\port_lcfg.d" "mcal\dio\dio.d" "mcal\nvic\nvic.d" "mcal\port_driver\port.d" "mcal\sys_ctr\SysCtr.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

