#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  char **names;
  names = (char**)malloc(3 * sizeof(char*));
  names[0] = "Ala";
  names[1] = "Bartek";
  names[2] = "Cecylia";

  printf("%s %s %s", names[0], names[1], names[2]);
  return 0;
}
