CC=gcc
CCFLAGS=-Wall -Wextra -Wpedantic
INCLUDE=-I include/
OPT=-O3

all: obj/prime-pi.o bin/prime-pi

obj/prime-pi.o: include/constants.h include/prime-pi.h
	$(CC) $(CCFLAGS) $(INCLUDE) $(OPT) -c src/prime-pi.c -o obj/prime-pi.o

bin/prime-pi: obj/prime-pi.o src/main.c
	$(CC) $(CCFLAGS) $(INCLUDE) $(OPT) src/main.c obj/prime-pi.o -o bin/prime-pi

clean:
	rm -f bin/* obj/*

.PHONY=all clean
