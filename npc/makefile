all:
	@echo "Write this Makefile by your self."

TOP_NAME=ysyx_24090015_top

VSRC = $(shell find $(abspath ./vsrc) --name *.v)
CSRC = $(shell find $(abspath ./csrc) --name *.c)
CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator  $(CFLAGS) --trace  $(VSRC) $(CSRC)
	./obj_dir/V$(TOP_NAME)
	 gtkwave ./*.vcd
include ../Makefile


clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
