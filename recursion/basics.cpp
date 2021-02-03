#include <iostream>

int fib(int n){  //original recursive fib number function
  if (n < 2){
    return 1;
  }
  else {
    return fib(n-1) + fib(n-2);
  }
}

int fib_iter(int n){  //fib number function using loops
    int pre = 0;
    int nex = 1;
    int fib = 1;
    for(int i=0; i<n; i++){
        fib = nex + pre;   //adds the previous two terms
        pre = nex;  //keeps track of the last two terms
        nex = fib;
    }
    return fib;
}

int main(){
   int i;
   for (i=0; i < 10 ; i++){
      std::cout << "recursive- " << "i:" << i << " = " << fib(i) << "\n ";
      std::cout << "   loops- i:" << i << " = " << fib_iter(i) << "\n";
      std::cout << "---------------------" << std::endl;
    }
  return 0;
}