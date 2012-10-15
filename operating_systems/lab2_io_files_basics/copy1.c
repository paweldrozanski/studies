/*
 * copy1.c
 * 
 * based on: 
 *
 * Miscellaneous examples for Chap. 2
 * AUP2, Chap. 2
 *
 * modified by WTA
 */

/*[copy-with-bug]*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

#define BUFSIZE 512

void copy(char *from, char *to)  /* has a bug */
{
	int fromfd = -1, tofd = -1, errsv;
	ssize_t nread;
	char buf[BUFSIZE];
	
	fromfd = open(from, O_RDONLY);

  if (fromfd == -1){
    errsv = errno;

    printf( "Error opening file: %s\n", strerror( errsv) );
    if (errsv == ENOENT) {
      printf ("NO SUCH FILE!");
    }
    if (errsv == EACCES) {
      printf ("NO RIGHTS TO OPEN THE FILE");
    }
  }
  else {
  
    tofd = open(to, O_WRONLY | O_CREAT | O_TRUNC,
        S_IRUSR | S_IWUSR);
    while ((nread = read(fromfd, buf, sizeof(buf))) > 0)
      write(tofd, buf, nread);	

    close(fromfd);
    close(tofd);
    return;
  }
}

int main(int argc, char **argv){
	if (argc != 3)
	{
		fprintf(stderr,"usage: %s from_pathname to_pathname\n", argv[0]);
		return 1;
	}
	copy(argv[1], argv[2]);
	return 0;
}
