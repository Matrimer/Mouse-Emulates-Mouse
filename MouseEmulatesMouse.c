#include <stdio.h>
#include <stdlib.h>
#include <xdo.h>
#include <unistd.h>

#include <EmulateMouse.c>

int main()
{
  bool running = true;
  while (running)
  {
    
  }
  return 0;
}

void signal(int sig)
{
  if (sig == SIGTERM || sig == SIGHUB || sig == SIGINT)
    running = false;
}
