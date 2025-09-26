#include "map.h"

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
#define IO_SPACE_MAX (2 * 1024 * 1024)


#define SCREEN_W 400
#define SCREEN_H 300


#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#define TIMER_HZ 60
extern void vga_update_screen();

typedef void (*alarm_handler_t) ();
void add_alarm_handle(alarm_handler_t h);
void send_key(uint8_t scancode, bool is_keydown);

extern uint64_t get_time();


extern void init_vga();
extern void init_serial();
extern void init_timer();
extern void init_i8042();
extern void init_alarm();
extern void init_map();
extern void device_update();
 