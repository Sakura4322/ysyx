#include <am.h>
#include "npc.h"


#define SYNC_ADDR (VGACTL_ADDR + 4)
void __am_gpu_init() {
      // int i;
      // int w = 400;  // TODO: get the correct width
      // int h = 300;  // TODO: get the correct height
      // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
      // for (i = 0; i < w * h; i ++) fb[i] = i;
      // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t get_width = (uint32_t)inw(VGACTL_ADDR+2);
  uint32_t get_height = (uint32_t)inw(VGACTL_ADDR);

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = get_width, .height = get_height,
    .vmemsz = get_width * get_height
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  uint32_t get_width = (uint32_t)inw(VGACTL_ADDR+2);
  // uint32_t get_height = (uint32_t)inw(VGACTL_ADDR);
  uint32_t *pixels_ptr =(uint32_t *)ctl->pixels;
  int cnt=0;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for(int i=0;i<ctl->h;i++){
    for(int j=0;j<ctl->w;j++){
      int addr=(get_width*(ctl->y+i)+ctl->x+j);
      // outl(addr,pixels_ptr[cnt]);
      fb[addr] = pixels_ptr[cnt];
      cnt++;
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
