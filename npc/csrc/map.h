#ifndef MAP_H
#define MAP_H
void    difftest_skip_ref();


typedef void(*io_callback_t)(unsigned int, int, bool);
uint8_t* new_space(int size);

typedef struct {
  const char *name;
  // we treat ioaddr_t as unsigned int here
  unsigned int low;
  unsigned int high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, unsigned int addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, unsigned int addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_pio_map(const char *name, unsigned int addr,
        void *space, unsigned int len, io_callback_t callback);
void add_mmio_map(const char *name, unsigned int addr,
        void *space, unsigned int len, io_callback_t callback);

unsigned int map_read(unsigned int addr, int len, IOMap *map);
void map_write(unsigned int addr, int len, unsigned int data, IOMap *map);

#endif