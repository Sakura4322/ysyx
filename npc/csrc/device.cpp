#include "common.h"
#include "device.h"
// extern void init_vga();


uint64_t get_time(){
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  static uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return (now.tv_sec * 1000000 + now.tv_nsec / 1000)-us;
}

void init_device(){

  init_map();

  init_vga();
}