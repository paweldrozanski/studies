#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>


#define BUFSIZE 10

int cat_file(char *filename)  
{
	int fromfd;
	ssize_t nread;
	char*buf = (char*)malloc(BUFSIZE);
	fromfd = open(filename, O_RDONLY);
	if (fromfd==-1)
	{
		printf("Problem with openning file%s", strerror(errno));
    close(fromfd);
    return -1;
	}
	
	while ((nread = read(fromfd, buf, sizeof(buf)-1)) > 0)
	{
    if (nread==-1)
    {
      printf("Problem with reading the file%s", strerror(errno));
      close(fromfd);
      return -1;
    }

		printf("%s",buf);
		free(buf);
		buf=(char*)malloc(BUFSIZE);
	
	}
  close(fromfd);
	return 0;
}

int cat_stdin()  
{
	int readbytes = -1;
	char*buf = (char*)malloc(BUFSIZE);
	while ((readbytes = read(STDIN_FILENO, buf, sizeof(buf)-1)) >0 )
	{
    write(STDOUT_FILENO, buf, readbytes);
	}
	return 0;
}

int main(int argc, char **argv){
	if (argc == 1)	{
		cat_stdin();
	}
	else if(argc==2)	{
		cat_file(argv[1]);
	}
	return 0;
}
