#include <iostream>
#include "stack.h"


int main (){
    stack a;
    for(int i=0; i<10; i++){
        a.push(i);
    }
    std::cout << "The stack is :\n\t" << a.toString() << std::endl;
    a.push(5);
    std::cout << "After pushing the integer 5:\n\t" << a.toString() << std::endl;
    std::cout << "The current integer is " << a.top() << std::endl;
    a.pop();
    std::cout << "After poping an integer:\n\t" << a.toString() << std::endl;
    std::cout << "The current integer is " << a.top() << std::endl;
    return 0;
}