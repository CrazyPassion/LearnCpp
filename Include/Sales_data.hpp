#pragma once
#include <iostream>
#include <string>

struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p=0.0):bookNo(s), units_sold(n), revenue(n*p){ }
    Sales_data(std::istream &is);
    Sales_data(const Sales_data &rhs){this->bookNo=rhs.bookNo;this->units_sold=rhs.units_sold;this->revenue=rhs.revenue;}
    //copy constructor must pass its first argument by const reference
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

    static void Ex7_7();
    static void Ex7_11();
    static int Ex7_13();
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
