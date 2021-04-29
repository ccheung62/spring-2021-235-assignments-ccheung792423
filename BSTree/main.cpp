#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main(){
    //Video 2 task
    std::cout << "Video 2" << std::endl;
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

    //Video 4 task
    std::cout << "\nVideo 4\n";
    BSTree *t = new BSTree();
    t->setup();
    std::cout << t->getDebugR() << std::endl;

    //Recursive search & insert function
    std::cout << "\nRecursive search & insert function\n";
    BSTree *recur = new BSTree();
    recur->insert(-10);
    recur->insert(20);
    recur->insert(30);
    recur->insert(5);
    recur->insert(17);
    recur->insert(22);
    recur->insert(35);
    recur->insert(40);
    recur->insert(8);
    recur->insert(3);
    recur->insert(9);
    std::cout << recur->getDebugR() << std::endl;
    try {
        int x  = t->search(6);
        std::cout << x << "\n";
    } 
    catch (int e){
        std::cout << "6 not found\n";
    }
    try {
        int x  = t->search(16);
        std::cout << x << "\n";
    } 
    catch (int e){
        std::cout << "16 not found\n";
    }
    std::cout << recur->search(-10) << " is found" << std::endl;
    std::cout << recur->search(40) << " is found" << std::endl;
    std::cout << recur->search(17) << " is found" << std::endl;

    //Delete function 
    std::cout << "\nDelete function\n";
    std::cout << "\t" << recur->getDebugR() << std::endl;
    std::cout << "Deleting 9, a leave" << std::endl;
    recur->del(9);
    std::cout << "\t" << recur->getDebugR() << std::endl;
    std::cout << "Deleting 35, a node with one child" << std::endl;
    recur->del(35);
    std::cout << "\t" << recur->getDebugR() << std::endl;
    std::cout << "Deleting 20, a node with two children" << std::endl;
    recur->del(20);
    std::cout << "\t" << recur->getDebugR() << std::endl;

    //Sum of nodes function 
    std::cout << "\nSum of Nodes function\n";
    std::cout << "The number of nodes in this tree is " << recur->numNode() << std::endl;

    //Sum of leave function 
    std::cout << "\nSum of leave function\n";
    std::cout << "The number of leave in this tree is " << recur->numLeave() << std::endl;

    //Sum of node at a given level function 
    std::cout << "\nSum at given level function\n";
    std::cout << "The sum of nodes at level 0 is " << recur->sumLv(0) << std::endl;
    std::cout << "The sum of nodes at level 2 is " << recur->sumLv(2) << std::endl;
    std::cout << "The sum of nodes at level 3 is " << recur->sumLv(3) << std::endl;

    //Height function
    std::cout << "\nHeight function\n";
    std::cout << "The height of this tree is " << recur->height() << std::endl;
}