#include "common.h"
#include "device.h"
// extern void init_vga();



void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  vga_update_screen();
  // printf("is update \n");
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    // printf("is event : %d\n",event.type);
    switch (event.type) {
      case SDL_QUIT:
        nemu_state.state = NEMU_QUIT;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}


void init_device(){

  init_map();

  init_serial();
  init_timer();
  init_vga();

  init_alarm();
}