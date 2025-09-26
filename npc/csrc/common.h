#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>
#include "verilated.h"
#include "Vysyx_24090015_top.h"
#include <verilated_vcd_c.h>
#include "debug.h"
#include <getopt.h>
#include <string>
#include <dlfcn.h>
#include <sys/time.h>
#include <SDL2/SDL.h>
#include "host.h"
#include <signal.h>


extern FILE* log_fp;
extern bool itrace_on;
extern bool etrace_on;
extern bool dtrace_on;
extern bool mtrace_on;
extern bool ftrace_on;
extern bool wave_load;


void init_device();

#endif