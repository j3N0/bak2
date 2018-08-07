CFLAGS=-Wall -g

all:main

main:stacklib.o

stacklib.o:
	gcc -c stacklib.c -o stacklib.o

.PHONY:clean

clean:
	rm -rf *.o main vgcore*
