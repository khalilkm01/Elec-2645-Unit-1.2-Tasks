# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-std=c++11 -c -Wall

all: main.bin

main.bin: main.o student.o person.o footballer.o
	$(CC) main.o student.o person.o footballer.o -o main.bin

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

student.o: student.cpp
	$(CC) $(CFLAGS) student.cpp

footballer.o: footballer.cpp
	$(CC) $(CFLAGS) footballer.cpp

person.o: person.cpp
	$(CC) $(CFLAGS) person.cpp



clean:
	rm *.o main.bin