#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(void)
{
  int pid = fork();

  int i;

  for (i = 0; i < 10; ++i) {
    if (pid) {
      fork();
    }
  }

  sleep(3);

  return 0;
}