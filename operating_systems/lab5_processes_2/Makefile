CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: hello

hello: hello.o
	$(CC) $(CFLAGS) hello.o -o $@
hello.o: hello.c
	$(CC) -c $(CFLAGS) hello.c -o $@

clean:
	rm -f *.o hello

.PHONY: clean
