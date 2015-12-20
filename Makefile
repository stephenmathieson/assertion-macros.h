
CC ?= gcc
CFLAGS = -std=c99 -Wall -Wextra

test: example; @./example

example: example.o
example.o: example.c assertion-macros.h

bail: bail.o
bail.o: bail.c assertion-macros.h

clean:; rm -f bail example *.o

.PHONY: test clean
