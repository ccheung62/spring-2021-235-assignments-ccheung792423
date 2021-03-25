#include <iostream>
#include "stack.h"

void stack::push(int i){
    list.push_back(i);
}

bool stack::pop(){
    if (!list.empty()){
        list.pop_back();
        return true;
    }
    else {
        return false;
    }
}

int stack::top(){
    if (!list.empty()){
        return list.back();
    }
    else {
        std::cout << "The stack is currently empty" << std::endl;
        return -1;
    }
}

bool stack::isEmpty(){
    return list.empty();
}

std::string stack::toString(){
    std::string result = "";
    for (int i=0; i<list.size(); i++){
        result += std::to_string(list[i]) + " ";
    }
    return result;
}

