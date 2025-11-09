################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3" --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3/Debug" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/third_party/CMSIS/Include" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/ti/posix/ccs" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --advice:power=none -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-892828479:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-892828479-inproc

build-892828479-inproc: ../mutex.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"C:/ti/ccs1281/xdctools_3_62_01_16_core/xs" --xdcpath="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source;C:/ti/simplelink_msp432e4_sdk_4_20_00_12/kernel/tirtos/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.msp432:MSP432E401Y -r release -c "C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path=\"C:/Users/joshu/workspace_v12/CPE403_DA3\" --include_path=\"C:/Users/joshu/workspace_v12/CPE403_DA3/Debug\" --include_path=\"C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source\" --include_path=\"C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/third_party/CMSIS/Include\" --include_path=\"C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/ti/posix/ccs\" --include_path=\"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include\" --advice:power=none -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on  " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-892828479 ../mutex.cfg
configPkg/compiler.opt: build-892828479
configPkg: build-892828479

build-2074143185: ../mutex.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1281/ccs/utils/sysconfig_1.21.0/sysconfig_cli.bat" --script "C:/Users/joshu/workspace_v12/CPE403_DA3/mutex.syscfg" -o "syscfg" -s "C:/ti/simplelink_msp432e4_sdk_4_20_00_12/.metadata/product.json" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_drivers_config.c: build-2074143185 ../mutex.syscfg
syscfg/ti_drivers_config.h: build-2074143185
syscfg/ti_utils_build_linker.cmd.exp: build-2074143185
syscfg/syscfg_c.rov.xs: build-2074143185
syscfg: build-2074143185

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3" --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3/Debug" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/third_party/CMSIS/Include" --include_path="C:/ti/simplelink_msp432e4_sdk_4_20_00_12/source/ti/posix/ccs" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-arm_20.2.7.LTS/include" --advice:power=none -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="C:/Users/joshu/workspace_v12/CPE403_DA3/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


