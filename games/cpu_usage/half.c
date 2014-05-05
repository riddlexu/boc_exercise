#include<stdio.h>
#include<sys/time.h>
#include<stdbool.h>

#define SLEEP_TIME 20000

int main()
{
  int run_time,i,k;
  struct timeval start, end;
  while (true){
    gettimeofday(&start, NULL);
    k = 0;
    for (i = 0; i < 6700000; i++){ //get the number by trying handy
      k++;
    }
    gettimeofday(&end, NULL);
    run_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
    usleep(SLEEP_TIME);
  }
  return 0;
}
