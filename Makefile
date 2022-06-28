
all: HelloClass

HelloClass: main.o Rectangle.o
	g++ -o HelloClass main.o Rectangle.o

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp

.o: main.cpp
	g++ -c main.cpp

.phony: clean

clean:
	rm -f HelloClass
	rm -f *.o
