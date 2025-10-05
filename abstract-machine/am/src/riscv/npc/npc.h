#include "../riscv.h"

# define DEVICE_BASE 0xa0000000

#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)



#define UART_BASE       0x10000000
#define UART_RBR        0   // 接收缓冲 / 发送保持（DLAB=0）
#define UART_DLL        0   // 除数锁存低（DLAB=1）
#define UART_IER        1   // 中断使能（DLAB=0）
#define UART_DLM        1   // 除数锁存高（DLAB=1）
#define UART_LCR        3   // 线路控制
#define UART_MCR        4   // 调制解调器控制
#define UART_FCR        2   // FIFO 控制（写-only）
#define UART_LSR        5   // 线路状态（读-only）

#define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code));
