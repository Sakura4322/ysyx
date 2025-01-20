all: sim
	@echo "Write this Makefile by your self."

TOP_NAME=ysyx_24090015_top


IMG?=
ELF?=

VSRC = $(shell find $(abspath ./vsrc) -name *.v)
#CSRC = $(shell find $(abspath ./csrc) -name *.cpp)	
CSRC = $(abspath ./csrc/verilog.cpp) $(abspath ./csrc/DPI.cpp) $(abspath ./csrc/monitor.cpp) $(abspath ./csrc/sdb.cpp) $(abspath ./csrc/cpu_exec.cpp)
CSRC +=$(abspath ./csrc/disasm.cc) $(abspath ./csrc/difftest_dut.cpp)

NEMU_LIB_DIR=$(NEMU_HOME)/build/
NEMU_LIB=riscv32-nemu-interpreter.so

CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal 


LDFLAGS += -lreadline# readline 库
LDFLAGS += $(shell llvm-config --libs)# LLVM 库
LDFLAGS += $(NEMU_LIB_DIR)$(NEMU_LIB) --whole-file
#LDFLAGS += -v



#LDFLAGS += -lgetopt
#LDFLAGS += -l$(VERILATOR_ROOT)/verilator/include/vltstd


override ARGS?= --log=$(abspath ./npc-log.txt)
override ARGS+= -b
override ARGS+= --elf=$(ELF)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@echo "$(LDFLAGS)"
	verilator $(CFLAGS) \
		--trace \
		--top-module $(TOP_NAME) \
		$(VSRC) $(CSRC)\
		-LDFLAGS "$(LDFLAGS)"
	@echo "\033[32m链接成功！\033[0m"
	./obj_dir/V$(TOP_NAME) $(IMG) $(ARGS)
	gtkwave ./*.vcd

run : sim

include ../Makefile


clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
