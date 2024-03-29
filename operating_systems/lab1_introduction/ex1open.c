#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include "t.h"
 
#define BUFSIZE 1024
 
int main (int argc, char **argv) {
    int f1, c;
    char b[BUFSIZE], *n1;
    int open_return, read_return;
 
    c = 10;
    n1 = argv[1];
 
    f1 = open (n1, O_RDONLY);
    timestart();
    open_return = f1;
    timestop("Stop:");
    if (open_return == -1){
      perror("Blad otwarcia");
      exit(EXIT_FAILURE);
    }
    else {
      printf("Open zakonczyl sie bez bledow\n");
    }
    read_return = read (f1, b, c);
    if (read_return == -1){
      perror("Blad odczytu");
      exit(EXIT_FAILURE);
    }
    else {
      printf("Read zakonczyl sie bez bledow\n");
    }

    printf("%s: Przeczytano %d znakow z pliku %s: \"%s\"\n",
	   argv[0], c, n1, b);
    close(f1);
 
    return(0);
}
