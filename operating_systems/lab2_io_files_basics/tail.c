#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
/*[backward]*/
void backward(char *path, char arg, int num)
{
	char s[256], c;
	int i, fd, rows = arg;
	off_t where, file_size;
  char** lines;
 
  lines = (char**)malloc(num * sizeof(char*));
	fd = open(path, O_RDONLY);
	file_size = lseek(fd, 0, SEEK_END);
	i = sizeof(s) - 1;
	s[i] = '\0';
  for (where = file_size -1; where >= 0 && num >=0; where--){
		switch (pread(fd, &c, 1,where)) {
			case 1:
				if (c == '\n') {
          num--;
					printf("S[i] %s", &s[i]);
          lines[num] = &s[i];
					i = sizeof(s) - 1;
          printf("NUM = %d\n", num);
          printf("Line = %s\n", lines[num]);
				}
				if (i <= 0) {
					errno = E2BIG;
					/* handle the error */
				}
				s[--i] = c;
				break;
			case -1:
				/* handle the error */
				break;
			default: /* impossible */
				errno = 0;
				/* handle the error */
		}
  }
  /*
   * printf("!!");
   * printf("%s", &s[i]);
   */
  printf("%s", lines[0]);
	close(fd);
	return;
}

int main(int argc, char** argv){
  backward("test_file", 'c', 3);
  return 0;
}
