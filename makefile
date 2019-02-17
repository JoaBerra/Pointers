CC = gcc
CFLAGS = -g -Wall
default = main

LDFLAGS = -lstdc++

MiscUtils.o: ./src/MiscUtils.c ./headers/MyFunctions.h
	$(CC) $(CFLAGS) -o ./obj/MiscUtils.o -c ./src/MiscUtils.c

ArithmeticUtilities.o: ./src/ArithmeticUtilities.c ./headers/MyFunctions.h
	$(CC) $(CFLAGS) -o ./obj/ArithmeticUtilities.o -c ./src/ArithmeticUtilities.c

main.o: ./src/main.c ./headers/MyFunctions.h
	$(CC) $(CFLAGS) -o ./obj/main.o -c ./src/main.c

main: main.o ArithmeticUtilities.o MiscUtils.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o main ./obj/main.o ./obj/ArithmeticUtilities.o ./obj/MiscUtils.o

clean:
	-rm ./obj/*.o main
