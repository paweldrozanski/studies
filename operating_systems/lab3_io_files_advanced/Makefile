
CC=gcc
CFLAGS=-Wall -ansi -pedantic -lrt

all: stat_info

stat_info: stat_info.o
		gcc -lrt stat_info.o -o stat_info
stat_info.o: stat_info.c
		gcc -c -lrt stat_info.c -o stat_info.o

clean:
		rm -f *o stat_info

.PHONY: clean
