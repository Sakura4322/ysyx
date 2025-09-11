#include <am.h>
#include "npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  //kbd->keydown = 0;
  //kbd->keycode = AM_KEY_NONE;
  // printf("input\n");
    uint32_t data = inl(KBD_ADDR);
    kbd->keydown = ((data & KEYDOWN_MASK)!=0);  // 检查第15位是否为1
    kbd->keycode = data & ~KEYDOWN_MASK;
  }
