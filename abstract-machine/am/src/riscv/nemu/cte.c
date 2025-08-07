#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
	// printf("%d,%d,%d,%d,%d,%d\n",1,2,3,4,5,6);
   //printf("irq_handle : \nmcause : %x\n mstatus : %x\n mepc : %x\n",c->mcause,c->mstatus,c->mepc);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb: ev.event = EVENT_YIELD;break;
      default: ev.event = EVENT_ERROR; printf("Unkonw event\n");break;
    }
    assert(ev.event != EVENT_ERROR);
		putch('q');
    assert(c != NULL);
		//for(int i=0;i<30;i++){

		//printf("gpr[%d] : %x\n",i,(uintptr_t)c->gpr[i]);
		//}
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  //printf("cte_init\n");
  // initialize exception entry
  int ini_value = 0x1800;
  asm volatile("csrw mstatus, %0" : : "r"(ini_value));    //给mstatus 初始化为0x1800来通过difftest
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
	struct Context *context = (struct Context*)kstack.start+sizeof(struct Context);
	memset(context,0,sizeof(struct Context));
	context->mstatus = 0x1800;
	//printf("ret addr : %x\n",(uintptr_t)entry);
	context->mepc = (uintptr_t)entry;
	//context->gpr[2] = (uintptr_t)kstack.start;
  return context;
}

void yield() {
   //printf("yield\n");
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, 0xb; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
