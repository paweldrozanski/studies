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
	off_t where;
	
	fd = open(path, O_RDONLY);
	where = lseek(fd, 1, SEEK_END);
	i = sizeof(s) - 1;
	s[i] = '\0';
	do {
		where = lseek(fd, -2, SEEK_CUR);
    printf("SEEK_CUR: %zu\n", where);
		switch (read(fd, &c, 1)) {
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
        printf("c = %c, i = %d\n", c,i);
        printf("%s", &s[i]);
				break;
			case -1:
				/* handle the error */
				break;
			default: /* impossible */
				errno = 0;
				/* handle the error */
		}
	} while (where > 0);
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
