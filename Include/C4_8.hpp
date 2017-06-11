//
// Created by vonking on 2017/6/3.
//

#ifndef LEARNCPP_C4_8_HPP
#define LEARNCPP_C4_8_HPP

#include <iostream>

using std::cout;
using std::endl;
void ShiftOperator();

void ShiftOperator()
{
    char c =-5;//0xfb
    cout<<(c<<3)<<endl;//-40

    char d = c<<3;//0xd8
    cout<<d<<endl;

    int e = c<<3;//0xffffffd8  -40
    cout<<e<<endl;

    c = 5;    //0x5
    cout<<(c<<3)<<endl;

    char d1 = c<<3;//0x28  '('
    cout<<d1<<endl;

    int e1 = c<<3;//0x28   40
    cout<<e1<<endl;
}

#endif //LEARNCPP_C4_8_HPP
