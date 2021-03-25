main: main.o queue.o 
	g++ -o main main.o queue.o

tests: tests.o queue.o
	g++ -o tests tests.o queue.o

main.o: main.cpp queue.h

tests.o: tests.cpp doctest.h
	g++ -std=c++11 -c tests.cpp

queue.o: queue.cpp queue.h

clean:
	rm -f queue.o main.o tests.o