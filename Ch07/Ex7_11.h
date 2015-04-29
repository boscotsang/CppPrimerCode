#ifndef Ex7_11_h
#define Ex7_11_h

#include <string>
#include <iostream>

class Sales_data{
    public:
    Sales_data() = default;
    Sales_data(std::string bookNo, int units_sold, double price):
        bookNo(bookNo), units_sold(units_sold), revenue(units_sold*price){}
    Sales_data(std::string bookNo):bookNo(bookNo), units_sold(0), revenue(0){}
    Sales_data(std::istream&);

    std::istream &read(std::istream &is, Sales_data &);
    std::string bookNo;
    int units_sold;
    double revenue;
};

Sales_data::Sales_data(std::istream& is){
    read(is, *this);
}

std::istream& Sales_data::read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

#endif
