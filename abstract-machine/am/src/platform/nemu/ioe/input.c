#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

extern int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

//kbd->keydown = 0;
//kbd->keycode = AM_KEY_NONE;

// uint32_t status = (inl(KBD_ADDR));

  // kbd->keydown = status;
  
  uint16_t status = inw(KBD_ADDR);  // 读取键盘状态寄存器
  printf("%08x\n",status);
  kbd->keydown = (status & KEYDOWN_MASK) ? true : false;  // 检查第15位是否为1
  kbd->keycode = inl(KBD_ADDR+4);
}
