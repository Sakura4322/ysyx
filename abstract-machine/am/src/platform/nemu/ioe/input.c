#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

extern int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

//kbd->keydown = 0;
//kbd->keycode = AM_KEY_NONE;

uint32_t status = (uint32_t)(inl(KBD_ADDR)&KEYDOWN_MASK)>>31;

  kbd->keydown = status;
  printf("%08x\n",status);
  kbd->keycode = inl(KBD_ADDR+4);
}
