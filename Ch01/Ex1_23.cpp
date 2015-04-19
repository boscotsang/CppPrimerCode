#include <iostream>
#include <map>
#include "Sales_item.h"

int main(){
    Sales_item s;
    std::map<std::string, int> result;
    while (std::cin >> s) {
        if (result.find(s.isbn())==result.end()){
            result[s.isbn()] = 1;
        }
        else result[s.isbn()]++;
    }
    for (auto it = result.begin(); it!=result.end(); ++it){
        std::cout << it->first << " occurs "
                  << it->second << " times "
                  << std::endl;
    }
}
