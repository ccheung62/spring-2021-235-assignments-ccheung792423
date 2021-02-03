# include <iostream>
int stepPerms (int n){
    if (n <= 2){ //base cases
        return n; //number of possible ways to walk up given n steps
    }
    else if (n == 3) { 
        return 4;
    }
    else {
        return stepPerms(n-1) + stepPerms(n-2) + stepPerms(n-3);
        //the three possible way the person could walk up the stairs
    }
}
int main(){
    std::cout << "There are "<< stepPerms(5) << " possible ways to walk up 5 steps." << std::endl;
    std::cout << "There are "<< stepPerms(7) << " possible ways to walk up 7 steps." << std::endl;
    std::cout << "There are "<< stepPerms(8) << " possible ways to walk up 8 steps." << std::endl;
}