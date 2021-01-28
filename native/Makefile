CC=gcc
CCFLAGS=-Wall -Wextra -Wpedantic
INCLUDE=-I include/
LIB=-L lib
SHARED=-shared -fPIC
OPT=-O3

all: lib/libprime-pi.so bin/prime-pi

lib/libprime-pi.so: include/constants.h include/prime-pi.h
	$(CC) $(CCFLAGS) $(INCLUDE) $(SHARED) $(OPT) -c src/prime-pi.c -o lib/libprime-pi.so

bin/prime-pi: lib/libprime-pi.so src/main.c
	$(CC) $(CCFLAGS) $(INCLUDE) $(LIB) $(OPT) src/main.c -o bin/prime-pi -lprime-pi

clean:
	rm -f bin/* lib/* obj/*

.PHONY=all clean
