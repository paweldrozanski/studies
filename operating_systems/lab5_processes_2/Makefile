CC=gcc
CFLAGS=-Wall -ansi -pedantic
LINK=-lpthread

all: hello1

hello1: hello1.o
	$(CC)  hello1.o -o $@ $(LINK)
hello1.o: hello1.c
	$(CC) -c  hello1.c -o $@ $(LINK)

hello2: hello2.o
	$(CC) hello2.o -o $@ $(LINK)
hello2.o: hello2.c
	$(CC) -c hello2.c -o $@ $(LINK)

hello2_simple: hello2_simple.o
	$(CC) hello2_simple.o -o $@ $(LINK)
hello2_simple.o: hello2_simple.c
	$(CC) -c hello2_simple.c -o $@ $(LINK)

func: func.o
	$(CC) func.o -o $@ $(LINK)
func.o: func.c
	$(CC) -c func.c -o $@ $(LINK)

cond: cond.o
	$(CC) cond.o -o $@ $(LINK)
cond.o: cond.c
	$(CC) -c cond.c -o $@ $(LINK)

clean:
	rm -f *.o hello1 hello2 hello2_simple func cond

.PHONY: clean
