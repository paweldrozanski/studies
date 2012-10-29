CC=gcc
CFLAGS=-Wall -ansi 
LINK=-lncurses

default: hello

hello: hello.o
	$(CC) $(CFLAGS) hello.o -o $@ $(LINK)
hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c -o $@ 

clean:
	rm -rf *.o hello
