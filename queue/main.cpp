#include <iostream>
#include "queue.h"

int main(){
    queue a;
    for(int i=0; i<10; i++){
        a.enqueue(i);
    }
    std::cout << "The queue is:\n\t" << a.toString() << std::endl;
    a.enqueue(18);
    std::cout << "After adding 18 into the queue using the enqueue function:\n\t" << a.toString() << std::endl;
    std::cout << "The front of the queue is " << a.front() << std::endl;
    a.dequeue();
    std::cout << "After deleting an integer using the dequeue function:\n\t" << a.toString() << std::endl;
    std::cout << "The front of queue is " << a.front() << std::endl;
    return 0;
}