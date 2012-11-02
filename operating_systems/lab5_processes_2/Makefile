CC=gcc
CFLAGS=-Wall -ansi -pedantic
LINK=-lpthread

all: hello

hello: hello.o
	$(CC) $(CFLAGS) hello.o -o $@ $(LINK)
hello.o: hello.c
	$(CC) -c $(CFLAGS) hello.c -o $@ $(LINK)

func: func.o
	$(CC) $(CFLAGS) func.o -o $@ $(LINK)
func.o: func.c
	$(CC) -c $(CFLAGS) func.c -o $@ $(LINK)

clean:
	rm -f *.o hello func

.PHONY: clean
