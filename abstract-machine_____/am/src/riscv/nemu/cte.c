#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // printf("irq_handle : \n\tmcause : %08x\n\tmstatus : %08x\n\tmepc : %08x\n",c->mcause,c->mstatus,c->mepc);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb: ev.event = EVENT_YIELD;
								c->mepc += 4;
								break;
      default: ev.event = EVENT_ERROR; printf("Unkonw event\n");break;
    }
    assert(ev.event != EVENT_ERROR);
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
//  printf("cte_init\n");
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	struct Context* context = kstack.end - sizeof(struct Context);
	context->mstatus = 0x1800;
	context->mepc = (uintptr_t)entry;                                                                                                                               
	context->gpr[10] = (uintptr_t)arg;
return context;
	 }

void yield() {
  // printf("yield\n");
#ifdef __riscv_e
  asm volatile("li a5, 0xb; ecall");
#else
  asm volatile("li a7, 0xb; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
