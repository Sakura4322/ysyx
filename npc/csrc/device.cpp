#include "common.h"
#include "device.h"

uint64_t get_time(){
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  static uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return (now.tv_sec * 1000000 + now.tv_nsec / 1000)-us;
}

uint8_t p_space[1024*1024*2]={0};



uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}




static uint32_t screen_size() {
  return  SCREEN_W * SCREEN_H * sizeof(uint32_t);
}


static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;


static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;


static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv32e-npc");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
}


static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if(vgactl_port_base[1]){
    update_screen();
    vgactl_port_base[1]=0;
  }
}

void init_vga() {
  vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();
// #ifdef CONFIG_HAS_PORT_IO
//   add_pio_map ("vgactl", CONFIG_VGA_CTL_PORT, vgactl_port_base, 8, NULL);
// #else
//   add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);
// #endif

  vmem = new_space(screen_size());
  // add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
  init_screen();
  memset(vmem, 0, screen_size());
}

