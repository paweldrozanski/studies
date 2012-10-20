#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
int encrypt(char *from, char *to){
  static const char alphanum[] =
    "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
  FILE *stfrom, *stto;
  int c,i,random_number;
  char random_number_casted_to_char, random_char;

  srand ( time(NULL) );
  if ((stfrom = fopen(from, "r")) == NULL){}
  if (( stto = fopen(to, "w")) == NULL) {}

  while ((c = getc(stfrom)) != EOF){

    putc(c, stto);
    if (c != '\n'){
      random_number = 1 + (double)rand () * 9 / RAND_MAX;
      random_number_casted_to_char = (char)(((int)'0')+random_number);
      putc(random_number_casted_to_char, stto);

      printf("Character: %c\n", random_number_casted_to_char);
      for (i=0; i<random_number; i++){
        random_char = alphanum[rand() % (sizeof(alphanum) - 1)];
        putc(random_char, stto);
      }
    }
  }

  fclose(stfrom);
  fclose(stto);
  return 0;
}

int decrypt(char *from, char *to){

  FILE *stfrom, *stto;
  int c, tmp_int,i;
  char tmp_char;

  if ((stfrom = fopen(from, "r")) == NULL){}
  if (( stto = fopen(to, "w")) == NULL) {}

  while ((c = getc(stfrom)) != EOF){
    
    putc(c,stto);
    if (c != '\n'){
      tmp_int = (int)getc(stfrom)-48;
      for (i=0; i<tmp_int; i++){
        tmp_char = getc(stfrom);
      }
    }
    
  }
  return 0;
}

int main(int argc, char** argv){
  if (argc == 4){
    if (strcmp(argv[1], "-e") == 0){
      printf("Encrypting ...\n");
      encrypt(argv[2], argv[3]);
      printf("Encryption done !!\n");
      return 0;
    }
    else if (strcmp(argv[1], "-d") == 0){
      printf("Decrypting ...\n");
      decrypt(argv[2], argv[3]);
      printf("Decryption done !!\n");
      return 0;
    }
    else{
      printf("Please choose option between \"-e\" or \"-d\"\n");
      return -1;
    }
  }
  else{
    printf("Wrong amount of args...");
    return -1;
  }
  return 0;
}
