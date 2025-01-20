# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_24090015_top.mk

default: Vysyx_24090015_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/sakura/verilator/
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_24090015_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_24090015_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline -lLLVM-14 /home/sakura/ysyx-workbench/nemu/build/riscv32-nemu-interpreter -Wl,-rpath=/home/sakura/ysyx-workbench/nemu/build/ \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	DPI \
	cpu_exec \
	difftest_dut \
	disasm \
	monitor \
	sdb \
	verilog \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/sakura/ysyx-workbench/npc/csrc \


### Default rules...
# Include list of all generated classes
include Vysyx_24090015_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

DPI.o: /home/sakura/ysyx-workbench/npc/csrc/DPI.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu_exec.o: /home/sakura/ysyx-workbench/npc/csrc/cpu_exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest_dut.o: /home/sakura/ysyx-workbench/npc/csrc/difftest_dut.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/sakura/ysyx-workbench/npc/csrc/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/sakura/ysyx-workbench/npc/csrc/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/sakura/ysyx-workbench/npc/csrc/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilog.o: /home/sakura/ysyx-workbench/npc/csrc/verilog.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vysyx_24090015_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
