#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(void)
{
  int pid = fork();

  int i;

  for (i = 0; i < 1000; ++i) {
    if (pid > 0) {
      pid = fork();
      printf("my pid is %d -- %d\n", pid, i);
    }
  }

  sleep(3);

  return 0;
}