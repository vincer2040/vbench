CC = gcc
CFLAGS = -Wall -Werror -pedantic -O2 -g

.PHONY: all
all:
	$(CC) $(CFLAGS) -o main main.c

.PHONY: clean
clean:
	rm -f main
