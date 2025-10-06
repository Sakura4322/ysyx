all: sim gdb
	@echo "Write this Makefile by your self."

TOP_NAME=ysyx_24090015
# TOP_NAME=ysyxSoCFull
# TOP_NOME_PATH=$(shell find $(abspath ./vsrc) -name ysyx_24090015)

IMG?=
ELF?=
NEMU_LIB=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

VSRC = $(shell find $(abspath ./vsrc) -name *.v)
# VSRC += $(shell find $(abspath ../ysyxSoC/perip) -name *.v)
# VSRC += $(YSYXSOC)/ready-to-run/D-stage/ysyxSoCFull.v

# CSRC = $(shell find $(abspath ./csrc) -name *.cpp *.cc)	
CSRC = $(shell find ./csrc -name "*.cpp" -o -name "*.cc" -o -name "*.c")
# CSRC = $(abspath ./csrc/verilog.cpp) $(abspath ./csrc/DPI.cpp) $(abspath ./csrc/monitor.cpp) $(abspath ./csrc/sdb.cpp) $(abspath ./csrc/cpu_exec.cpp)
# CSRC +=$(abspath ./csrc/disasm.cc)
# CSRC +=$(abspath ./csrc/difftest_dut.cpp)
INCLUDE_PATH ?=
INCLUDE_PATH += -I$(YSYXSOC)/perip/uart16550/rtl -I$(YSYXSOC)/perip/spi/rtl
CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal 
LDFLAGS= -lreadline 
LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += -lSDL2

# LDFLAGS += $(NEMU_LIB)
#LDFLAGS += -lgetopt
#LDFLAGS += -l$(VERILATOR_ROOT)/verilator/include/vltstd


override ARGS?= --log=$(abspath ./npc-log.txt)
override ARGS+= -b
# override ARGS+= -i 			#itrace
#override ARGS+= -t 			#etrace
# override ARGS+= -m 			#mtrace
#override ARGS+= -y 			#dtrace
# override ARGS+= -f 			#ftrace
# override ARGS+= -w 			#wave_load
#override ARGS+= --elf=$(ELF)
# override ARGS+= --diff=$(NEMU_LIB)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	echo "$(CSRC)"
	@echo "$(VERILATOR_ROOT)"
	@echo "$(ARGS)"
	verilator  $(INCLUDE_PATH) --timescale "1ns/1ns" --no-timing $(CFLAGS) -LDFLAGS "$(LDFLAGS)" --trace-fst  --top-module $(TOP_NAME) $(VSRC) $(CSRC) 
	./obj_dir/V$(TOP_NAME) $(IMG) $(ARGS)
#gtkwave ./*.vcd

gdb : 
	@echo "DEBUG MODE"
	@echo "./obj_dir/V$(TOP_NAME)"
	verilator  $(CFLAGS) -LDFLAGS "$(LDFLAGS)" --trace  --top-module $(TOP_NAME) $(VSRC) $(CSRC) 
	valgrind ./obj_dir/V$(TOP_NAME) $(IMG) $(ARGS)

run : sim

include ../Makefile

sta : 
	$(MAKE) -C $(YOSYS) sta DESIGN=$(TOP_NAME) RTL_FILES="$(VSRC)" CLK_FREQ_MHZ=100

clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
