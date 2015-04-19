#include <iostream>

int main(){
    int low = 0, high=0, sum = 0;
    std::cout << "Enter an interval" << std::endl;
    std::cin >> low >> high;
    while (low <= high){
        std::cout << low++ << std::endl;
    }
    return 0;
}
