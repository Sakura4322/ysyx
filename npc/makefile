all: sim gdb
	@echo "Write this Makefile by your self."

TOP_NAME=ysyx_24090015_top


IMG?=
ELF?=
NEMU_LIB=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

VSRC = $(shell find $(abspath ./vsrc) -name *.v)
# CSRC = $(shell find $(abspath ./csrc) -name *.cpp *.cc)	
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp" -o -name "*.cc")
# CSRC = $(abspath ./csrc/verilog.cpp) $(abspath ./csrc/DPI.cpp) $(abspath ./csrc/monitor.cpp) $(abspath ./csrc/sdb.cpp) $(abspath ./csrc/cpu_exec.cpp)
# CSRC +=$(abspath ./csrc/disasm.cc)
# CSRC +=$(abspath ./csrc/difftest_dut.cpp)

CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal 
LDFLAGS= -lreadline 
LDFLAGS += $(shell llvm-config --libs)
# LDFLAGS += $(NEMU_LIB)
#LDFLAGS += -lgetopt
#LDFLAGS += -l$(VERILATOR_ROOT)/verilator/include/vltstd


override ARGS?= --log=$(abspath ./npc-log.txt)
override ARGS+= -b
#override ARGS+= --elf=$(ELF)
# override ARGS+= --diff=$(NEMU_LIB)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@echo "$(VERILATOR_ROOT)"
	@echo "$(ARGS)"
	verilator  $(CFLAGS) -LDFLAGS "$(LDFLAGS)" --trace  --top-module $(TOP_NAME) $(VSRC) $(CSRC) 
	./obj_dir/V$(TOP_NAME) $(IMG) $(ARGS)
#gtkwave ./*.vcd

gdb : 
	@echo "DEBUG MODE"
	@echo "./obj_dir/V$(TOP_NAME)"
	verilator  $(CFLAGS) -LDFLAGS "$(LDFLAGS)" --trace  --top-module $(TOP_NAME) $(VSRC) $(CSRC) 
	valgrind ./obj_dir/V$(TOP_NAME) $(IMG) $(ARGS)

run : sim

include ../Makefile


clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
