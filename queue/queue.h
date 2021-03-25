#pragma once
#include <vector>

class queue{
    public:
        void enqueue(int i);
        bool dequeue();
        bool isEmpty();
        int front();
        std::string toString();
    private:
        std::vector<int> list;
};