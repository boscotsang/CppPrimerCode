#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item s1, s2;
    std::cin >> s1 >> s2;
    if (s1.isbn()==s2.isbn()){
        std::cout << (s1 + s2) << std::endl;
    }
    else
        std::cout << "Two item have no same ISBN" << std::endl;
    return 0;
}
