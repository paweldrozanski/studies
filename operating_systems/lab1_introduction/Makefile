CC=gcc
CFLAGS=-Wall -ansi -pedantic

ex1open: ex1open.o
		gcc $(CFLAGS) ex1open.o -o ex1open
ex1open.o: ex1open.c
		gcc -c $(CFLAGS) ex1open.c -o ex1open.o

clean:
		rm -f *.o

.PHONY: clean
