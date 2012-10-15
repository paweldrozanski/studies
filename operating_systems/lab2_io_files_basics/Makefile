CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: copy1

copy1: copy1.o
		gcc $(CFLAGS) copy1.o -o copy1
copy1.o: copy1.c
		gcc -c $(CFLAGS) copy1.c -o copy1.o

clean:
		rm -f *o copy1

.PHONY: clean
