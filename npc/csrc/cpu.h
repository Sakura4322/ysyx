enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
	int state;
	uint32_t halt_pc;
	uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;

typedef struct {
	uint32_t pc;
	uint32_t inst;
	uint32_t dnpc;
	char logbuf[128];
}Decode;

typedef struct{
uint32_t gpr[32];
uint32_t pc;	
	}CPU_state;
