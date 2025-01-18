
extern long load_img();
extern uint32_t *vaddr;
extern char *img_file;
extern void sdb_mainloop();
extern void step_and_dump_wave();
extern void cpu_exec(uint64_t n);
extern VerilatedContext *contextp;
extern Vysyx_24090015_top* top;
extern VerilatedVcdC *tfp;
extern int reg_value[32];
extern void read_regs();
extern void isa_reg_display();
