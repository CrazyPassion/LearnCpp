//
// Created by vonking on 2017/5/20.
//

#ifndef LEARNCPP_C3_3_HPP
#define LEARNCPP_C3_3_HPP

#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void sizeofVector()
{
    vector<int> v1;
    cout << "v1 size: " << v1.size() << endl;

    vector<int> v1Test(v1);
    cout<<"v1Test size: "<<v1Test.size()<<endl;

    vector<int> v2(10);
    cout << "v2 size: " << v2.size() << endl;

    vector<int> v3(10, 42);
    cout << "v3 size: " << v3.size() << endl;

    vector<int> v4{10};
    cout << "v4 size: " << v4.size() << endl;

    vector<int> v5{10, 42};
    cout << "v5 size: " << v5.size() << endl;

    vector<string> v6{10};
    cout << "v6 size: " << v6.size() << endl;

    vector<string> v7{10, "hi"};
    cout << "v7 size: " << v7.size() << endl;

    return;
}
#endif //LEARNCPP_C3_3_HPP
