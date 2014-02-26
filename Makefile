
CC ?= gcc
CFLAGS = -std=c99 -Wall -Wextra
SRC = assertion-macros.h

test: example
	@./example

example: example.c $(SRC)
	$(CC) $(CFLAGS) example.c -o $@

bail: bail.c $(SRC)
	$(CC) $(CFLAGS) bail.c -o $@

clean:
	rm -f bail example

.PHONY: test clean
