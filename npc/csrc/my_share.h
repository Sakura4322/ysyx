#define MAX_SRAM_SIZE 128
#include "cpu.h"
extern uint32_t *vaddr;
extern void sdb_mainloop();
extern void step_and_dump_wave(Decode *s);
extern void cpu_exec(uint64_t n);
extern VerilatedContext *contextp;
extern Vysyx_24090015_top* top;
extern VerilatedVcdC *tfp;


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6" 
};

extern uint32_t reg_value[32];
extern uint32_t sram[MAX_SRAM_SIZE];



extern void read_regs();
extern void isa_reg_display();


extern void sdb_set_batch_mode();

extern char *img_file;
extern char *log_file;
extern int parse_args(int argc,char *argv[]);
extern long load_img();
