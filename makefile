CC = gcc
CFLAGS = -g -Wall
default = main

LDFLAGS = -lstdc++

MiscUtils.o: MiscUtils.c MyFunctions.h
	$(CC) $(CFLAGS) -c MiscUtils.c

ArithmeticUtilities.o: ArithmeticUtilities.c MyFunctions.h
	$(CC) $(CFLAGS) -c ArithmeticUtilities.c

main.o: main.c MyFunctions.h
	$(CC) $(CFLAGS) -c main.c

main: main.o ArithmeticUtilities.o MiscUtils.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o main main.o ArithmeticUtilities.o MiscUtils.o

clean:
	-rm *.o main
