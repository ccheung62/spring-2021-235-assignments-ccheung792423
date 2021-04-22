OBJECTS=
CXXFLAGS= -g
LDFLAGS=
CXX=g++

main: main.o Node.o BSTree.o
	g++ -g -o main main.o Node.o BSTree.o

Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp

BSTree.o: BSTree.cpp BSTree.h Node.h
	g++ -std=c++11 -c BSTree.cpp

main.o: main.cpp Node.h BSTree.h

clean: 
	rm -f main.o Node.o BSTree.o