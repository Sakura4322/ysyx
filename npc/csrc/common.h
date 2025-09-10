#include <stdio.h>
#include "verilated.h"
#include "Vysyx_24090015_top.h"
#include <verilated_vcd_c.h>
#include "debug.h"
#include <getopt.h>
#include <string>
#include <dlfcn.h>
#include <time.h>
#include <SDL2/SDL.h>


extern FILE* log_fp;

void init_device();