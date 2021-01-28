CC=gcc
CCFLAGS=-Wall -Wextra -Wpedantic
INCLUDE=-I include/
LIB=-L lib
OPT=-O3

all: lib/libprime-pi.so bin/prime-pi

obj/prime-pi.o: include/constants.h include/prime-pi.h
	$(CC) $(CCFLAGS) $(INCLUDE) $(OPT) -fpic -c src/prime-pi.c -o obj/prime-pi.o

lib/libprime-pi.so: obj/prime-pi.o
	$(CC) $(CCFLAGS) -shared obj/prime-pi.o -o lib/libprime-pi.so

bin/prime-pi: lib/libprime-pi.so src/main.c
	$(CC) $(CCFLAGS) $(INCLUDE) $(LIB) $(OPT) src/main.c -o bin/prime-pi -lprime-pi

clean:
	rm -f bin/* lib/* obj/*

.PHONY=all clean
