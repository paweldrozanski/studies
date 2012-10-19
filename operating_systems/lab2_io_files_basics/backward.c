#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
/*[backward]*/
void backward(char *path)
{
	char s[256], c;
	int i, fd;
	off_t where, file_size;
	
	fd = open(path, O_RDONLY);
	file_size = lseek(fd, 0, SEEK_END);
	i = sizeof(s) - 1;
	s[i] = '\0';
  for (where = file_size -1; where >= 0; where--)
		switch (pread(fd, &c, 1,where)) {
			case 1:
				if (c == '\n') {
					printf("%s", &s[i]);
					i = sizeof(s) - 1;
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
	printf("%s", &s[i]);
	close(fd);
	return;
}

int main(int argc, char** argv){
  if (argc == 2){
    backward(argv[1]);
  }
  else {
    printf("Wrong number of args...\n");
  }
  return 0;
}
