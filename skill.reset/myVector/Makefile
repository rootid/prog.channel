OBJS = main.o MyVector.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -pedantic $(DEBUG)

myVector : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o myVector 

main.o: MyVector.h main.cpp
	$(CC) -c $(CFLAGS) main.cpp

MyVector.o: MyVector.h MyVector.cpp
	$(CC) -c $(CFLAGS) MyVector.cpp

clean:
	rm -f *.o a.out myVector 
