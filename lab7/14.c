#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[])
{
  char **p;
  int k = 0;
  int to = atoi(argv[1]);
  for (p = environ; *p != NULL && k < to; p++, k++)
    printf("%d - %s\n", k, *p );
}