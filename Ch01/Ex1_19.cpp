#include <iostream>

int main(){
    int tmp =0, low = 0, high=0, sum = 0;
    std::cout << "Enter an interval" << std::endl;
    std::cin >> low >> high;
    if (low > high){
        tmp = low;
        low = high;
        high = tmp;
    }
    while (low <= high){
        std::cout << low++ << std::endl;
    }
}
