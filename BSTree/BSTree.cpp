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

void BSTree::del(int d){
    deleteHelper(d, root, root);
}

void BSTree::deleteHelper(int d, Node* pre, Node* cur){
    if (cur == nullptr){
        return;
    }
    if (d > cur->getData()){
        deleteHelper(d, cur, cur->getRight());
    }
    else if (d < cur->getData()){
        deleteHelper(d, cur, cur->getLeft());
    }
    else{
        // Deleting node with 2 children
        if (cur->getLeft() != nullptr && cur->getRight() != nullptr){
            Node* walker = cur->getRight();
            Node* walkerPrev = cur;
            while (walker->getLeft() != nullptr){
                walkerPrev = walker;
                walker = walker->getLeft();
            }
            if (walker->getRight() != nullptr){
                if (walkerPrev->getLeft() == walker){
                    walkerPrev->setLeft(walker->getRight());
                }
                else {
                    walkerPrev->setRight(walker->getRight());
                }
            }
            else{
                walkerPrev->setLeft(nullptr);
            }
            if (pre->getLeft() == cur){
                pre->setLeft(walker);
            }
            else{
                pre->setRight(walker);
            }
            walker->setLeft(cur->getLeft());
            walker->setRight(cur->getRight());
            delete cur;
        }
        // Deleting a node with only one child (left)
        else if (cur->getLeft() != nullptr){
            if (pre->getLeft() == cur){
                pre->setLeft(cur->getLeft());
            }
            else{
                pre->setRight(cur->getLeft());
            }
            delete cur;
        }
        // Deleting a node with only one child (right)
        else if (cur->getRight() != nullptr){
            if (pre->getLeft() == cur){
                pre->setLeft(cur->getRight());
            }
            else{
                pre->setRight(cur->getRight());
            }
            delete cur;
        }
        // Deleting a leaf
        else{
            if (pre->getLeft() == cur){
                pre->setLeft(nullptr);
            }
            else{
                pre->setRight(nullptr);
            }
            delete cur;
        }
    }  
}

int BSTree::numNode(){
    return numNodeHelper(root);
}
int BSTree::numNodeHelper(Node *cur){
    if (cur == nullptr){
        return 0;
    }
    return 1 + numNodeHelper(cur->getLeft()) + numNodeHelper(cur->getRight());
}

int BSTree::numLeave(){
    return numLeaveHelper(root);
}
int BSTree::numLeaveHelper(Node *cur){
    if (cur == nullptr){
        return 0;
    }
    if (cur->getRight() == nullptr && cur->getLeft() == nullptr){
        return 1;
    }
    return numLeaveHelper(cur->getLeft()) + numLeaveHelper(cur->getRight());
}

int BSTree::sumLv(int l){
    return sumLvHelper(l, root, 0);
}
int BSTree::sumLvHelper(int l, Node* cur, int lv){
    if (cur == nullptr || lv > l){
        return 0;
    }
    if (lv == l){
        return cur->getData();
    }
    return sumLvHelper(l, cur->getLeft(), lv+1) + sumLvHelper(l, cur->getRight(), lv+1);
}

int BSTree::height(){
    return heightHelper(root, 0);
}
int BSTree::heightHelper(Node *cur, int lv){
    if (cur == nullptr){
        return lv;
    }
    if (heightHelper(cur->getLeft(), lv+1) > heightHelper(cur->getRight(), lv+1)){
        return heightHelper(cur->getLeft(), lv+1);
    }
    else {
        return heightHelper(cur->getRight(), lv+1);
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