CFLAGS=-Wall -g

all:main

main:heaplib.o

listlib.o:
	gcc -c heaplib.c -o heaplib.o

.PHONY:clean

clean:
	rm -rf *.o main vgcore*
