#include <iostream> 
/* Tower of Hanoi
Rules:
1. can only move one disc at a time
2. discs must be either in transit or on a tower (never on the ground)
3. you can never place a larger disc on a smaller disc
*/

/* 
This function prints the way each disc should move to transport them
from the source tower to the destination tower
*/ 
void hanoi(int n, char src, char dst, char tmp){
    // n is the amount of discs
    // src is the source tower
    // dst is the destination tower
    // tmp is the temporary tower
    int disc = n-1;
    if (n < 1){
        std::cout << "Number of disc must be at least 1" << std::endl;
    }
    else if (n == 1){
        std::cout << "   Moved disc #" << disc << " from " << src << " to " << dst << std::endl;
        disc-- ;
    }
    else {
        hanoi(n-1, src, tmp, dst);
        std::cout << "   Moved disc #" << disc << " from " << src << " to " << dst << std::endl;
        hanoi(n-1, tmp, dst, src);
    }
}

int main (){
    for (int i=1; i<6; i++){
        std::cout << "For " << i << " discs:" << std::endl;
        hanoi(i, 'S', 'D', 'T');
        std::cout << std::endl;
    }
    return 0;
}