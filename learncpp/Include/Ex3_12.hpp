//
// Created by vonking on 2017/5/20.
//

#ifndef LEARNCPP_EX3_12_HPP
#define LEARNCPP_EX3_12_HPP

#include <iostream>
#include <vector>

using std::vector;
using std::string;

void initVector()
{
    vector<vector<int>> ivec;
//    vector<string> svec = ivec;
    vector<string> svec(10, "null");
}

#endif //LEARNCPP_EX3_12_HPP
