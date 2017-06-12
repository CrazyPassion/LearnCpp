//
// Created by vonking on 2017/6/11.
//

#include "../Include/Sales_data.hpp"

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
