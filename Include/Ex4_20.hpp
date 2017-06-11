//
// Created by vonking on 2017/6/2.
//

#ifndef LEARNCPP4_20_HPP
#define LEARNCPP4_20_HPP
#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void Ex4_20()
{
    vector<string> strVec={"123","abc","d812"};
    cout<<"1"<<endl;
    vector<string>::iterator i = strVec.begin();
    while(i != strVec.end()) {
        cout << *i++ << " ";
    }
    cout<<"2"<<endl;
    i = strVec.begin();
    while(i != strVec.end()) {
        cout << (*i)++ << " ";
        //error: cannot increment value of type 'std::__1::basic_string<char>'
    }
    cout<<"3"<<endl;
    i = strVec.begin();
    while(i != strVec.end()) {
        cout << *i.empty() << " ";
        // error: no member named 'empty' in 'std::__1::__wrap_iter<std::__1::basic_string<char> *>'; did you mean to use '->' instead of '.'?
        //error: indirection requires pointer operand ('int' invalid)
    }
    cout<<"4"<<endl;
    i = strVec.begin();
    while(i != strVec.end()) {
        cout << i++->empty() << " ";
    }
    cout<<"5"<<endl;
    i = strVec.begin();
    while(i != strVec.end()) {
        cout << ++*i << " "; // error: cannot increment value of type 'std::__1::basic_string<char>'
    }
    cout<<"6"<<endl;
    i = strVec.begin();
    while(i != strVec.end()) {{
        cout << *i++->empty() << " "; // error: indirection requires pointer operand ('int' invalid)
    }
}

#endif //LEARNCPP4_20_HPP
