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
        void del(int d);
        void deleteHelper(int d, Node* pre, Node* cur);
        int numNode();
        int numNodeHelper(Node *cur);
        int numLeave();
        int numLeaveHelper(Node *cur);
        int sumLv(int l);
        int sumLvHelper(int l, Node *cur, int lv);
        int height();
        int heightHelper(Node *cur, int lv);
        void setup();
};