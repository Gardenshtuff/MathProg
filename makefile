
CC = gcc
CFLAGS = -g -Wall
LDFLAGS= -lcurses

all:
	$(CC) $(CFLAGS) -c bigmathlib.c
	ar -cvrs BML.a bigmathlib.o
	$(CC) $(CFLAGS) m.c -o m BML.a

clean:
	rm bigmathlib.a bigmathlib.o
	rm m