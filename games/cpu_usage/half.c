#include<stdio.h>
#include<sys/time.h>
#include<stdbool.h>

#define SLEEP_TIME 20000

int main()
{
  int run_time,i,k;
  struct timeval start, end;
  while (true){
    k = 0;
    for (i = 0; i < 6700000; i++){ //get the number by trying handy
      k++;
    }
    usleep(SLEEP_TIME);
  }
  return 0;
}
