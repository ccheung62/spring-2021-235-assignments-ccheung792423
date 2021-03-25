#pragma once
#include <vector>

class stack{
    public:
        void push(int i);
        bool pop();
        int top();
        bool isEmpty();
        std::string toString();
    private:
        std::vector<int> list;
};