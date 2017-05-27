//
// Created by vonking on 2017/5/26.
//

#ifndef LEARNCPP_C3_6_HPP
#define LEARNCPP_C3_6_HPP

#include <iostream>
#include <iterator>
using std::cout;
using std::endl;

int size()
{
    return -1;
}

void IntArr()
{
    int a[size()];
}

void TwoDimensionArr()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (auto &row : ia)
    {
        for (auto &col : row)
        {
            col = cnt;
            cnt ++;
        }
    }

    for (auto p = std::begin(ia);p!=std::end(ia);++p)
    {
        for (auto q = std::begin(*p);q!=std::end(*p);++q)
        {
            cout<<*q<<endl;
        }
    }
}
#endif //LEARNCPP_C3_6_HPP
