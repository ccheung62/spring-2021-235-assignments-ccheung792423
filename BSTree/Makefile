main: main.o Node.o BSTree.o
	g++ -o main main.o Node.o BSTree.o
main.o: main.cpp Node.h
Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp
BSTree.o: BSTree.o BSTree.h
clean: 
	rm -f main.o Node.o