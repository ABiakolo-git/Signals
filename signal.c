/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "timer.h"

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  printf("Turing was right!\n");
  alarm(1);
  alarm_count();
}

int main(int argc, char * argv[])
{
  signal(SIGINT, timer);  //register timer to handle SIGINT
  signal(SIGALRM, handler); //register handler to handle SIGALRM
  alarm(1); //Schedule a SIGALRM for 1 second
  while(1); //busy wait for signal to be delivered 
  return 0; //never reached
}

