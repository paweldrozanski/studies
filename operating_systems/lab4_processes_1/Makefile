CC=gcc
CFLAGS=-Wall -ansi -pedantic

all: shell save

shell: func.o shell.o
		$(CC) $(CFLAGS) func.o shell.o -o shell
shell.o: shell.c
		$(CC) -c $(CFLAGS) shell.c -o shell.o
func.o: func.c
		$(CC) -c $(CFLAGS) func.c -o func.o

save: save.o
		$(CC) $(CFLAGS) save.o -o $@
save.o: save.c
		$(CC) $(CFLAGS) -c save.c -o $@

clean:
		rm -f *o shell save

.PHONY: clean

