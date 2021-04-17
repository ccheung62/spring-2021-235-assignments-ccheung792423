main: main.o Node.o
	g++ -o main main.o Node.o
main.o: main.cpp Node.h
Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp
clean: 
	rm -f main.o Node.o