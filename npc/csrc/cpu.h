enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
	int state;
	uint32_t halt_pc;
	uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;

typedef struct {
	uint32_t pc;
	uint32_t inst;
	uint32_t dnpc;
	char logbuf[128];
}Decode;
