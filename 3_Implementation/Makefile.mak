CC=cc
CXX=cc
CCFLAGS = -g -std=c99 -Wall -Werror

all: main test

%.o : %.c
	$(CC) -c $(CCFLAGS) $<



main: main.o mymath.o
	$(CC) -o main.o mymath.o

test: main
	./main


