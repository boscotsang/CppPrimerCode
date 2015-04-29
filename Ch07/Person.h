#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{
    public:
    Person() = default;
    Person(std::string name, std::string address):
        name(name), address(address){}
    private:
    std::string name;
    std::string address;
};

#endif
