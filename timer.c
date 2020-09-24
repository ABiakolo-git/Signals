#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int num_alarms = 0;
void alarm_count() {
  num_alarms += 1;
}
void timer(int signum)
{ 
  printf("\nNumber of alarms that occured: %d\n\n", num_alarms);
  exit(0);
}
