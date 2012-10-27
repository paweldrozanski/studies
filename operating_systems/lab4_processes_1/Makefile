CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: shell

shell: func.o shell.o
		gcc $(CFLAGS) func.o shell.o -o shell
shell.o: shell.c
		gcc -c $(CFLAGS) shell.c -o shell.o
func.o: func.c
		gcc -c $(CFLAGS) func.c -o func.o

clean:
		rm -f *o shell

.PHONY: clean

