CC=gcc
CFLAGS=-Wall -ansi 
LINK=-lpthread

default: hello

hello: hello.o
	$(CC) $(CFLAGS) hello.o -o $@ $(LINK)
hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c -o $@ $(LINK)

func: func.o
	$(CC) $(CFLAGS) func.o -o $@ $(LINK)
func.o: func.c
	$(CC) -c $(CFLAGS) func.c -o $@ $(LINK)

clean:
	rm -rf *.o hello
