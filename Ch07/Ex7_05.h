#ifndef Ex7_05_h
#define Ex7_05_h

#include <string>

class Person{
    public:
    std::string getName() const;
    std::string getAddress() const;
    private:
    std::string name;
    std::string address;
};

#endif
