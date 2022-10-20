# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.bin

main.bin: main.o circle.o square.o
	$(CC) main.o circle.o square.o -o main.bin

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

circle.o: circle.cpp
	$(CC) $(CFLAGS) circle.cpp

square.o: square.cpp
	$(CC) $(CFLAGS) square.cpp

clean:
	rm *.o main.bin