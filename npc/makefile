all: sim
	@echo "Write this Makefile by your self."

TOP_NAME=ysyx_24090015_top

VSRC = $(shell find $(abspath ./vsrc) -name *.v)
#CSRC = $(shell find $(abspath ./csrc) -name *.cpp)	
CSRC = $(abspath ./csrc/verilog.cpp) $(abspath ./csrc/DPI.cpp) $(abspath ./csrc/monitor.cpp) $(abspath ./csrc/sdb.cpp) $(abspath ./csrc/cpu_exec.cpp)

CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal
LDFLAGS= -lreadline
LDFLAGS += -l/$(VERILATOR_ROOT)/verilator/include/vltstd
IMG?=
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@echo "$(VERILATOR_ROOT)"
	verilator  $(CFLAGS) -LDFLAGS "$(LDFLAGS)" --trace  --top-module $(TOP_NAME) $(VSRC) $(CSRC) 
	./obj_dir/V$(TOP_NAME) $(IMG)
	 gtkwave ./*.vcd

run : sim

include ../Makefile


clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
