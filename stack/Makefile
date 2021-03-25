main: main.o stack.o 
	g++ -o main main.o stack.o

tests: tests.o stack.o
	g++ -o tests tests.o stack.o

main.o: main.cpp stack.h

tests.o: tests.cpp doctest.h
	g++ -std=c++11 -c tests.cpp

stack.o: stack.cpp stack.h

clean:
	rm -f stack.o main.o tests.o