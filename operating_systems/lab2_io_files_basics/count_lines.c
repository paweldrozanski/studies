#include <stdio.h>
#include <string.h>

#define BUFSIZE 1024

int main(int argc, char** argv)
{
  int newlines = 0;
  char buf[BUFSIZE];
  FILE* file;

  if (argc != 2)
    return 1;

  file = fopen(argv[1], "r");
  while (fgets(buf, BUFSIZE, file))
  {
    if (!(strlen(buf) == BUFSIZE-1 && buf[BUFSIZE-2] != '\n'))
      newlines++;
  }

  printf("Number of lines in %s: %d\n", argv[1], newlines);

  return 0;
}
