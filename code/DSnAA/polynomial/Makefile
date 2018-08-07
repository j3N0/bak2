CFLAGS=-Wall -g

all:main

main:listlib.o

listlib.o:
	gcc -c listlib.c -o listlib.o

.PHONY:clean

clean:
	rm -rf *.o main vgcore*
