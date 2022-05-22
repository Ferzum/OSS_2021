#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
  char **p;
  int sum = 0;
  for (p = environ; *p != NULL; p++)
    sum += 1;

  printf("Number of env var's: %d; args: %d\n", sum, argc);
}
