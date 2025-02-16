#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x80000000
#define MAX_SRAM_SIZE 1024
#include "cpu.h"
#include "disasm.h"
#include <elf.h>

extern uint8_t *vaddr;


extern void sdb_mainloop();
extern void step_and_dump_wave(Decode *s);
extern void cpu_exec(uint64_t n);
extern VerilatedContext *contextp;
extern Vysyx_24090015_top* top;
extern VerilatedVcdC *tfp;

/*
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6" 
};
*/
extern const char *regs[];
extern uint32_t reg_value[32];
extern uint32_t sram[MAX_SRAM_SIZE];



extern void read_regs();
extern void npc_reg_display();


extern void sdb_set_batch_mode();

extern char *img_file;
extern char *log_file;
extern char *elf_file;
extern char *diff_so_file;
extern bool diff_on;
extern int difftest_port;


extern int parse_args(int argc,char *argv[]);
extern long load_img();

extern void init_disasm(const char *triple);

 Elf32_Ehdr* parse_elf(char *elf_file);
 Elf32_Shdr *parse_shdr(Elf32_Ehdr *ehdr, char *elf_file);
char *parse_strtab(Elf32_Shdr *shdr,char *elf_file);
Elf32_Sym* parse_sym(Elf32_Shdr *shdr,char *elf);
/*
extern Elf32_Ehdr *ehdr_globle;
extern Elf32_Shdr *shdr_globle;
extern Elf32_Sym  *sym_globle;
extern char *str_globle;
*/

extern int cnt_globle;         //real num of sym(the num of str_char)
extern int sym_globle_indx;

typedef struct{
		char *func_name;
		int start;
		int end;	
}Addr_Imfo;


extern "C" int pmem_read(int raddr);






