#include <iostream>
#include "Node.h"

int main(){
    Node *n = new Node(10);
    Node *n2 = new Node(20); 
    n->setLeft(n2);
    Node *n3 = new Node(30); 
    n2->setLeft(n3);
    n2 = new Node(40);
    n3->setLeft(n2);
    n3 = new Node(50);
    n->setRight(n3);
    n2 = new Node(60);
    n3->setLeft(n2);
    n2 = new Node(70);
    n3 ->setRight(n2);
    std::cout << n->getData() << std::endl;
    std::cout << n->getLeft()->getData() << "  " << n->getRight()->getData() << std::endl;
    std::cout << n->getLeft()->getLeft()->getData() << "  " << n->getRight()->getLeft()->getData() << "  " << n->getRight()->getRight()->getData() << std::endl;
    std::cout << n->getLeft()->getLeft()->getLeft()->getData() << std::endl;
    std::cout << n->getLeft()->getLeft()->getLeft()->getData() << std::endl;
}