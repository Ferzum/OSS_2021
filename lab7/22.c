#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(void)
{
  
  fork();
  sleep(3);

  return 0;
}