#include <iostream>
#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}

void BSTree::insert(int d){

}

std::string BSTree::getDebugR(){
    return getDebugRHelper(root);
}

std::string BSTree::getDebugRHelper(Node *l){
    if (l == nullptr){
        return "";
    }
    else {
        return "->" + std::to_string(l->getData())+ getDebugRHelper(l->getLeft()) + getDebugRHelper(l->getRight());
    }
}

void BSTree::setup(){
    Node *n = new Node(10);
    root = n;
    n = new Node(20);
    root->setRight(n);
    Node *n2 = new Node(30);
    n->setRight(n2);
    n2 = new Node(25);
    n->setLeft(n2);
    n2 = new Node(5);
    root->setLeft(n2);
    n = new Node(3);
    n2->setLeft(n);
    n2 = new Node(7);
    n->setLeft(n2);
}