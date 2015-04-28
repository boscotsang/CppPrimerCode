#include <iostream>
#ifndef EX7_02_h
#define EX7_02_h

class Sales_data{
    public:
    std::string isbn() const;
    Sales_data& combine (const Sales_data&);
    double avg_price() const;
    private:
    std::string bookNo = "00000";
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif
