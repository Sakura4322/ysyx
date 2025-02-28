#include "common"
#include "my_share"



uint64_t get_time(){
    struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}