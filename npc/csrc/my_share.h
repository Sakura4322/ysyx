#define MAX_SRAM_SIZE 128
extern uint32_t *vaddr;
extern char *img_file;
extern void sdb_mainloop();
extern void step_and_dump_wave();
extern void cpu_exec(uint64_t n);
extern VerilatedContext *contextp;
extern Vysyx_24090015_top* top;
extern VerilatedVcdC *tfp;



extern uint32_t reg_value[32];
extern uint32_t sram[MAX_SRAM_SIZE];



extern void read_regs();
extern void isa_reg_display();


extern void sdb_set_batch_mode();

extern int parse_args(int argc,char *argv[]);
extern long load_img();
