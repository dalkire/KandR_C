P = 1-16
CC = gcc
CFLAGS = -g -Wall -Werror -std=gnu11

$(P): $(P).c
	$(CC) $(P).c $(CFLAGS) -o bin/$(P)

.PHONY: clean
clean:
	rm -rf bin/*
