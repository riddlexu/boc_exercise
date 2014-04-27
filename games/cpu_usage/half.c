#include<sys/time.h>

#define SLEEP_TIME 10000

int main()
{
  int i;
  while (true){
    gettimeofday();
    while ((run_time - idle_time) < SLEEP_TIME){
    }
    usleep(SLEEP_TIME);
  }
  return 0;
}
