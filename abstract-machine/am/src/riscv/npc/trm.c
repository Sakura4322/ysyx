#include <am.h>
#include <klib-macros.h>
#include "npc.h"

extern char _heap_start;
int main(const char *args);

extern int printf    (const char *format, ...);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS




void uart_init(uintptr_t uart_base);
uint8_t  uart_status_read(uintptr_t addr);
void  uart_status_write(uintptr_t addr,uint8_t  wdata);


void putch(char ch) {
  
  uintptr_t addr = UART_BASE + UART_LSR;   // C 里算好地址
  uint8_t LSR_state=0;

  LSR_state = uart_status_read(addr);

  while((LSR_state & 0x20) == 0){
      LSR_state = uart_status_read(addr);
  }

  uart_status_write(UART_BASE,ch);
  // outb(SERIAL_PORT,ch);
}

void halt(int code) {
	nemu_trap(code);
  while (1);
}

void _trm_init() {

  uart_init(UART_BASE);


  uint32_t march , verdor;
    asm volatile("csrr %0, marchid"   : "=r"(march));
    asm volatile("csrr %0, mvendorid" : "=r"(verdor));

    char name[4];
    name[0] = (char)(march >> 24);
    name[1] = (char)(march >> 16);
    name[2] = (char)(march >> 8);
    name[3] = (char)(march);

    printf("学号 : %c%c%c%c%x-%d\n",
           name[0],
           name[1],
           name[2],
           name[3],
           march,
           verdor);




  int ret = main(mainargs);
  halt(ret);
}


void uart_init(uintptr_t uart_base)
{
    /* 1. 设置除数锁存访问位（DLAB=1） */
    outb(uart_base + UART_LCR, 0x80);   // bit7 = 1

    /* 2. 写入除数（50 MHz → 115200） */
    outb(uart_base + UART_DLL, 0x1B);   // 低字节 = 27
    outb(uart_base + UART_DLM, 0x00);   // 高字节 = 0

    /* 3. 恢复 LCR，设置 8-N-1，DLAB=0 */
    outb(uart_base + UART_LCR, 0x03);   // 8 data, 1 stop, no parity

    /* 4. 使能 FIFO，清除 TX/RX */
    outb(uart_base + UART_FCR, 0x07);   // FIFO on, clear both

    /* 5. 打开中断（可选） */
    outb(uart_base + UART_IER, 0x01);   // 接收数据中断
}


uint8_t uart_status_read(uintptr_t addr){
    uint8_t uart_reg;
    asm volatile("lbu %0, 0(%1)" : "=r"(uart_reg) : "r"(addr));
    return uart_reg;
}


void uart_status_write(uintptr_t addr, uint8_t wdata)
{
    asm volatile("sb %0, 0(%1)"
                 :                    // 无输出
                 : "r"(wdata),       // value  → %0
                   "r"(addr));       // base   → %1
}


