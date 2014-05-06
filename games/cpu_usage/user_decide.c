#include<stdio.h>
#include<sys/time.h>
#include<stdbool.h>

const int SLEEP_TIME = 20000;

int main()
{
  int i,k,run,sleep;
  struct timeval start, end;
  printf("please input the ratio:\n");
  printf("the runtime occupy:");
  scanf("%d",&run);
  printf("the sleeptime occupy:");
  scanf("%d",&sleep);
  while (true){
    k = 0;
    for (i = 0; i < 6800000*run; i++){
      k++;
    }
    usleep(SLEEP_TIME*sleep);
  }
  return 0;
}
