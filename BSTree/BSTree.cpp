#include <iostream>
#include "Node.h"
#include "BSTree.h"

BSTree::BSTree(){
    root = nullptr;
}
void BSTree::insert(int d){
    Node *nnode = new Node(d);
    if (root == nullptr){
        root = nnode;
        return;
    }
    insertHelper(d, root, root);
}
void BSTree::insertHelper(int d, Node* prev, Node* cur){
    if (cur == nullptr){
        Node *nnode = new Node(d);
        if (d < prev->getData()){
            prev->setLeft(nnode);
        } 
        else {
            prev->setRight(nnode);
        }
        return;
    }
    if (d > cur->getData()){
        insertHelper(d, cur, cur->getRight());
    }
    else{
        insertHelper(d, cur, cur->getLeft());
    }
}
int BSTree::search(int value){
    if(searchHelper(root, value)){
        return value;
    }
    else {
        throw(-1);
        return 0;
    }
}

bool BSTree::searchHelper(Node* n, int value){
    if (n == nullptr){
        return false;
    } 
    if (n->getData() == value){
        return true;
    }
    else if (value > n->getData()){
        return searchHelper(n->getRight(), value);
    } 
    else {
        return searchHelper(n->getLeft(), value);
    }
}

std::string BSTree::getDebugR(){
    return getDebugRHelper(root);
}

std::string BSTree::getDebugRHelper(Node *l){
    if (l == nullptr){
        return "";
    }
    else {
        return "->" + std::to_string(l->getData()) + getDebugRHelper(l->getLeft()) + getDebugRHelper(l->getRight());
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