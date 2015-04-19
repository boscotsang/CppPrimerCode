#include <iostream>

int main(){
    int i = 10;
    int *p = &i;
    std::cout << i << std::endl;
    i = 20;
    std::cout << i << std::endl;
    *p = 30;
    std::cout << i << std::endl;
    return 0;
}
