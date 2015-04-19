#include <iostream>

int main(){
    int i = 10, sum = 0;
    while (i >= 0){
        sum += i--;
    }
    std::cout << "The sum from 10 to 0 is " << sum << std::endl;
    return 0;
}
