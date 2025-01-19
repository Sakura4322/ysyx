#ifndef DISASM_H
#define DISASM_H

#include <stdint.h>

extern "C" {
    void init_disasm(const char *triple);
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
}

#endif // DISASM_H
