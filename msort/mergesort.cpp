#include <iostream>
#include <vector>
#include <cstdlib>

//Sarah Sookoo
std::vector<int> merge(std::vector<int> one, std::vector<int> two){
  std::vector<int> result;
  while (one.size() > 0 || two.size() > 0) {

    if (one.size() > 0 && two.size() > 0) {
      if (one[0] <= two[0]) {
	result.push_back(one[0]);
	one.erase(one.begin());
      }
      else {
	result.push_back(two[0]);
	two.erase(two.begin());
      }
    }  
    else if (one.size() > 0) {
      for (int i = 0; i < one.size(); i++)
	result.push_back(one[i]);
      break;
    }  
    else if (two.size() > 0) {
      for (int i = 0; i < two.size(); i++)
	result.push_back(two[i]);
      break;
    }
  }
  return result;
}

//Shanie Ho
std::vector<int> msort(std::vector <int> a){
// as long as size is greater than one
// split into two halves and call function on the halves
//final result you merge them and call merge function
    std::vector <int> left;
    std::vector <int> right;
    std::vector <int> result1;
    std::vector <int> result2;
    std::vector <int> finalResult;

    if (a.size() > 1){
        for (int i = 0; i < a.size()/2; i++){
            left.push_back(a.at(i));
        }
        for (int i = a.size()/2; i < a.size(); i++){
            right.push_back(a.at(i));
        }

        result1 = msort(left);
        result2 = msort(right);

        finalResult = merge(result1, result2);
        return finalResult;
    }
    else{
        return a;
    }
}


int main(){
    srand(0);
    std::vector<int> list;
    for (int i=0; i<10; i++){
        list.push_back(rand()%100);
    }
    std::cout << "The original vector:\n\t";
    for(int i=0; i<list.size()-1; i++){
        std::cout << list[i] << ", ";
    }
    std::cout << list[list.size()-1] << std::endl;
    std::cout << "After merge sorting the list...\n\t"; 
    list = msort(list);
    for(int i=0; i<list.size()-1; i++){
        std::cout << list[i] << ", ";
    }
    std::cout << list[list.size()-1] << std::endl;
    return 0;
}