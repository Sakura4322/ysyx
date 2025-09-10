#include "../common.h"
#include "../device.h"


#define MAX_HANDLER 8
#define TIMER_HZ 60

static alarm_handler_t handler[MAX_HANDLER] = {};
static int idx = 0;

void add_alarm_handle(alarm_handler_t h) {
  assert(idx < MAX_HANDLER);
  handler[idx ++] = h;
}

static void alarm_sig_handler(int signum) {
  int i;
  for (i = 0; i < idx; i ++) {
    handler[i]();
  }
}

void init_alarm() {
  struct sigaction s;
  memset(&s, 0, sizeof(s));
  s.sa_handler = alarm_sig_handler;
  int ret = sigaction(26, &s, NULL);
  printf("Can not set signal handler");
  assert(ret == 0);

  struct itimerval it = {};
  it.it_value.tv_sec = 0;
  it.it_value.tv_usec = 1000000 / TIMER_HZ;
  it.it_interval = it.it_value;
  ret = setitimer(ITIMER_VIRTUAL, &it, NULL);
  printf("Can not set timer");
  assert(ret == 0);
}