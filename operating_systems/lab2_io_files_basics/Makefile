CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: copy1 own_cat backward tail extra_task

copy1: copy1.o
		gcc $(CFLAGS) copy1.o -o copy1
copy1.o: copy1.c
		gcc -c $(CFLAGS) copy1.c -o copy1.o

own_cat: own_cat.o
		gcc $(CFLAGS) own_cat.o -o own_cat
own_cat.o: own_cat.c
		gcc -c $(CFLAGS) own_cat.c -o own_cat.o

backward: backward.o
		gcc $(CFLAGS) backward.o -o backward
backward.o: backward.c
		gcc -c $(CFLAGS) backward.c -o backward.o

tail: tail.o 
		gcc $(CFLAGS) tail.o -o tail
tail.o: tail.c
		gcc -c $(CFLAGS) tail.c -o tail.oO

extra_task: extra_task.o
		gcc $(CFLAGS) extra_task.o -o extra_task
extra_task.o: extra_task.c
		gcc -c $(CFLAGS) extra_task.c -o extra_task.o
clean:
		rm -f *o copy1 own_cat backward tail extra_task

.PHONY: clean
