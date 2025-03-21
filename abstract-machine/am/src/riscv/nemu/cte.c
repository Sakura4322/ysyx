#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // printf("irq_handle : \n\tmcause : %08x\n\tmstatus : %08x\n\tmepc : %08x\n",c->mcause,c->mstatus,c->mepc);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case -1: ev.event = EVENT_YIELD;break;
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
  printf("cte_init\n");
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = kstack.start;
  // printf("start : %x\n",kstack.start);
  // printf("enrty : %x\n",entry);
  asm volatile("mv sp, %0" : : "r"((kstack.start)+sizeof(Context)));
  
  asm volatile("jalr %0" : : "r"(entry));
  
  return c;
}

void yield() {
  // printf("yield\n");
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
