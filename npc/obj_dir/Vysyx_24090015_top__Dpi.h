// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24090015_TOP__DPI_H_
#define VERILATED_VYSYX_24090015_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/sakura/ysyx-workbench/npc/vsrc/RegisterFile.v:17:46
    extern long long get_gpr_ptr();

    // DPI IMPORTS
    // DPI import at /home/sakura/ysyx-workbench/npc/vsrc/top.v:2:29
    extern int ebreak(int a);

#ifdef __cplusplus
}
#endif

#endif  // guard
