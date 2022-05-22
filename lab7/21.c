#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
  int pid = fork();

  if (pid == 0) {
    printf("Это сообщение из дочернего процесса\n");
    printf("pid: %d; ppid: %d", getpid(), getppid());
  } 
  return 0;
}