#include "../../common.h"
#include "../../map.h"
#include "../../device.h"



#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, uint32_t addr) {
  if (map == NULL) {
    assert(map != NULL);
  } else {
    assert(addr <= map->high && addr >= map->low);
  }
}

static void invoke_callback(io_callback_t c, uint32_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = (uint8_t *)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

uint32_t map_read(uint32_t addr, int len, IOMap *map) {

  assert(len >= 1 && len <= 8);
  // printf("read : %s\n",map->name);
  // printf("map read\n");
  check_bound(map, addr);
  log_write("dtrace : read_name : %s addr : %08x\n",map->name,addr);

  uint32_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  uint32_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(uint32_t addr, int len, uint32_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  //printf("write : %s\n",map->name);
 // printf("map write\n");
  check_bound(map, addr);
  log_write("dtrace : write_name : %s addr : %08x len : %d\n",map->name,addr,len);
  uint32_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);

}
