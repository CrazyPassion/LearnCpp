//
// Created by vonking on 2017/5/22.
//

#ifndef LEARNCPP_C3_4_HPP
#define LEARNCPP_C3_4_HPP
#include <iostream>
#include <vector>

using std::vector;
using std::string;

using std::cin;
using std::cout;
using std::endl;

void PrintString()
{
    string str = "some thing";
    for (auto c = str.cbegin(); c != str.cend() ; ++c)
    {
        cout<<*c;
    }
}

#endif //LEARNCPP_C3_4_HPP
