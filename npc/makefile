all:
	@echo "Write this Makefile by your self."


VSRC=$(shell find$(abspath ./vsrc) --name *.v)
CSRC=$(shell find$(abspath ./csrc) --name *.c)

CFLAGS= --cc --build --exe -j 0 -Wall --Wno-fatal

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator  $(CFLAGS) $(VSRC) $(CSRC)
	
	 gtkwave /*.vcd
include ../Makefile


clean:
	rm -rf ./obj_dir *.vcd

.PHONY : clean 
