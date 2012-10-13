CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: ex1open ex2

ex1open: t.o ex1open.o
		gcc $(CFLAGS) t.o ex1open.o -o ex1open
ex1open.o: ex1open.c
		gcc -c $(CFLAGS) ex1open.c -o ex1open.o
t.o: t.c
		gcc -c $(CFLAGS) t.c -o t.o

ex2: ex2.o
		gcc $(CFLAGS) ex2.o -o ex2
ex2.o: ex2.c
		gcc -c $(CFLAGS) ex2.c -o ex2.o

clean:
		rm -f *o ex1open ex2

.PHONY: clean
