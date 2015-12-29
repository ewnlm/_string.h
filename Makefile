CC = gcc

COMPILE_FLAGS = -std=c99 -Wall -Wextra -g

SCR = main.c

cpl:
	$(CC) $(COMPILE_FLAG) $(SCR)
run:
	./a.out
