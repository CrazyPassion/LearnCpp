#pragma once
#include <iostream>
#include <string>
using std::string;

class Sales_data
{
public:
    Sales_data();
    virtual ~Sales_data();
    string GetIsbn(Sales_data &data);
    Sales_data &combine(Sales_data &data);
    Sales_data &add(Sales_data &data1, Sales_data &data2);
    void print(const Sales_data &data);

private:
    string booNO;
    unsigned int unit_sold;
    double revenue;
};