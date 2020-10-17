
CC = gcc
CFLAGS = -g -Wall

all:
		$(CC) $(CFLAGS) -c discreteStructures.c
		ar -cvrs discreteStructures.a discreteStructures.o
		$(CC) $(CFLAGS)  m.c -o m discreteStructures.a


clean:
		rm m
		rm -f discreteStructures.a discreteStructures.o
