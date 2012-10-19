CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: copy1 own_cat

copy1: copy1.o
		gcc $(CFLAGS) copy1.o -o copy1
copy1.o: copy1.c
		gcc -c $(CFLAGS) copy1.c -o copy1.o
own_cat: own_cat.o
		gcc $(CFLAGS) own_cat.o -o own_cat
own_cat.o: own_cat.c
		gcc -c $(CFLAGS) own_cat.c -o own_cat.o

clean:
		rm -f *o copy1 own_cat

.PHONY: clean
