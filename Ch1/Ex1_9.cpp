#include <iostream>

int main(){
    int i = 50, sum = 0;
    while (i <= 100){
        sum += i++;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;
    return 0;
}
