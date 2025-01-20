#include "common.h"
#include "my_share.h"


extern void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);
extern void difftest_regcpy(uint32_t *dut_regs, bool direction);
extern void difftest_exec(uint64_t n);
extern void difftest_raise_intr(word_t NO);



static void checkregs(CPU_state *ref, uint32_t pc) {
for (int i=0;i<32;i++){
  if (ref[i]!=cpu.gpr[i]) {
    nemu_state.state = NEMU_ABORT;
    nemu_state.halt_pc = pc;
    npc_reg_display();
  	}
  }
}


void difftest_step(uint32_t pc, uint32_t npc) {
  CPU_state ref_r;

  difftest_exec(1);
  difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
