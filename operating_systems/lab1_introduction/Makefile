CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: ex1open

ex1open: t.o ex1open.o
		gcc $(CFLAGS) t.o ex1open.o -o ex1open
ex1open.o: ex1open.c
		gcc -c $(CFLAGS) ex1open.c -o ex1open.o
t.o: t.c
		gcc -c $(CFLAGS) t.c -o t.o

clean:
		rm -f *o ex1open

.PHONY: clean
