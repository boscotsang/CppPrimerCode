#include "Ex7_02.h"

Sales_data& Sales_data::combine(const Sales_data& rhs){
    this->units_sold = rhs.units_sold;
    this->revenue = rhs.revenue;
    return *this;
}

std::string Sales_data::isbn() const{
    return this->bookNo;
}
