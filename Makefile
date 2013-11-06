
test: example bail
	./example
	./bail

example: example.c
	$(CC) -std=c99 $^ -o $@

bail: bail.c
	$(CC) -std=c99 $^ -o $@

.PHONY: example
