#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
  char **p;
  int k = 0;
  for (p = environ; *p != NULL && k < 10; p++, k++)
    printf("%d - %s\n", k, *p );
}