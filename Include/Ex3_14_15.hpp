//
// Created by vonking on 2017/5/21.
//

#ifndef LEARNCPP_EX3_14_15_HPP
#define LEARNCPP_EX3_14_15_HPP

#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

template <typename T>
void readData()
{
    T data;
    vector<T> storeData;
    while (cin>>data)
    {
        storeData.push_back(data);
    }

    for(auto a:storeData)
    {
        cout<<a<<endl;
    }
}


#endif //LEARNCPP_EX3_14_15_HPP
