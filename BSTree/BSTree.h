#pragma once
#include <stdio.h>

class BSTree{
    private:
        Node *root;
    public:
        BSTree();
        int search(int value);
        bool searchHelper(Node *n, int value);
        void insert(int d);
        void insertHelper(int d, Node *prev, Node *cur);
        std::string getDebugR();
        std::string getDebugRHelper(Node *l);
        void setup();
};