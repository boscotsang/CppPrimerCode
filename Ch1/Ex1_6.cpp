#include <iostream>

int main(){
    int v1 = 0, v2 = 0;
    std::cout << "Enter two number" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The sum of "
              << v1
              << " and "
              << v2
              << " is "
              << (v1 + v2)
              << std::endl;
    return 0;
}
