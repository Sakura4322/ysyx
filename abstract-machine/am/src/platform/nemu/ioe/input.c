#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

extern int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
// printf("%08x\n",KBD_ADDR);
// kbd->keydown = 0;
//kbd->keycode = AM_KEY_NONE;
  kbd->keydown = inl(KBD_ADDR)|KEYDOWN_MASK;
  kbd->keycode = inl(KBD_ADDR+4);
}
