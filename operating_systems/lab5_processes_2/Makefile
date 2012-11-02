CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: hello

hello: hello.o
	$(CC) $(CFLAGS) hello.o -o $@ -pthread
hello.o: hello.c
	$(CC) -c $(CFLAGS) hello.c -o $@ -pthread

clean:
	rm -f *.o hello

.PHONY: clean
