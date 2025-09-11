#include "common.h"
#include "device.h"
// extern void init_vga();




void init_device(){

  init_map();
  
  init_serial();
  init_timer();
  init_vga();

  init_alarm();
}