#include <iostream>
#include "queue.h"

void queue::enqueue(int i){
    list.push_back(i);
}

bool queue::dequeue(){
    if (!list.empty()){
        list.erase(list.begin());
        return true;
    }
    else {
        return false;
    }   
}

bool queue::isEmpty(){
    return list.empty();
}

int queue::front(){
    if(!list.empty()){
        return list.front();
    }
    else {
        std::cout << "The queue is currently empty" << std::endl;
        return -1;
    }
}

std::string queue::toString(){
    std::string result;
    for(int i=0; i<list.size(); i++){
        result += std::to_string(list[i]) + " ";
    }
    return result;
}