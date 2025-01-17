enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
	int state;
	vaddr_t halt_pc;
	uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;
