#ifndef __MEMORY_HOST_H__
#define __MEMORY_HOST_H__

#include "common.h"

static inline unsigned int host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(unsigned int *)addr;
  }
}

static inline void host_write(void *addr, int len, unsigned int data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(unsigned int *)addr = data; return;
  }
}

#endif