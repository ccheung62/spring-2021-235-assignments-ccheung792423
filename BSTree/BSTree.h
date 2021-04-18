#pragma once
#include <stdio.h>

class BSTree{
    private:
        Node *root;
    public:
        BSTree();
        void insert(int d);
        std::string getDebugR();
        std::string getDebugRHelper(Node *l);
        void setup();
};