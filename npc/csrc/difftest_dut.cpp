#include "difftest.h"
#include "my_share.h"


void (*ref_difftest_memcpy)(uint32_t addr, uint32_t *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(CPU_state *dut_regs, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  ref_difftest_memcpy = reinterpret_cast<void (*)(uint32_t, uint32_t*, size_t, bool)>(dlsym(handle, "difftest_memcpy"));
  assert(ref_difftest_memcpy);
  ref_difftest_regcpy = reinterpret_cast<void (*)(CPU_state*, bool)>(dlsym(handle, "difftest_regcpy"));
  assert(ref_difftest_regcpy);

  ref_difftest_exec = reinterpret_cast<void (*)(uint64_t)>(dlsym(handle, "difftest_exec"));
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = reinterpret_cast<void (*)(uint64_t)>(dlsym(handle, "difftest_raise_intr"));
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = reinterpret_cast<void (*)(int)>(dlsym(handle, "difftest_init"));
  assert(ref_difftest_init);
/*
  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
*/
  ref_difftest_init(port);
  ref_difftest_memcpy(0x80000000, vaddr , img_size, 1);
  ref_difftest_regcpy(&cpu, 1);
}

static void checkregs(CPU_state *ref, uint32_t pc) {
  for(int i=0;i<32;i++){
  	if (ref->gpr[i]!=cpu.gpr[i]) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    npc_reg_display();
  }
  	}
}


void difftest_step(uint32_t pc, uint32_t npc) {
  CPU_state ref_r;
/*
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
*/
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, 0);

  checkregs(&ref_r, pc);
}
