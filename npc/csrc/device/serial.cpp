#include "../common.h"
#include "../device.h"


#define CH_OFFSET 0

static uint8_t *serial_base = NULL;



static void serial_io_handler(uint32_t offset, int len, bool is_write) {
    assert(len == 1);
    switch (offset) {
      /* We bind the serial port with the host stderr in NEMU. */
      case CH_OFFSET:
        if (is_write) put(serial_base[0]);
        else log_write("do not support read");
        break;
      default: log_write("do not support offset = %d", offset);
    }
  }

  void init_serial() {
    serial_base = new_space(8);

    add_mmio_map("serial", SERIAL_PORT, serial_base, 8, serial_io_handler);
  
  }