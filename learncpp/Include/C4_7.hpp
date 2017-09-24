//
// Created by vonking on 2017/6/2.
//

#ifndef LEARNCPP_C4_7_HPP
#define LEARNCPP_C4_7_HPP
#include <vector>
#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

void bracketForConditionOperator()
{
    int grade;
    cin>>grade;
    cout<<((grade<60)?"fail":"pass");
        cout<<endl;
//    cout<<(grade<60)?"fail":"pass";
//    warning: expression result unused [-Wunused-value]
//    warning: operator '?:' has lower precedence than '<<'; '<<' will be evaluated first [-Wparentheses]
//    note: place parentheses around the '<<' expression to silence this warning
//    note: place parentheses around the '?:' expression to evaluate it first
    cout<<endl;
    cout<<grade<60?"fail":"pass";
//    warning: overloaded operator << has higher precedence than comparison operator [-Woverloaded-shift-op-parentheses]
//    note: place parentheses around the '<<' expression to silence this warning
//    note: place parentheses around comparison expression to evaluate it first
    //    error: invalid operands to binary expression ('std::__1::basic_ostream<char>' and 'int')
    cout<<endl;
    string s = grade<60?"fail":"pass";
    cout<<s<<endl;
}

void Ex4_23()
{
    string str = "word";
    string p1 = str + str[str.size()-1] == 's' ? "" :"s";
//    error: invalid operands to binary expression ('std::__1::basic_string<char>' and 'int')
//    string p1 = str + str[str.size()-1] == "s" ? "" :"s"; will no error
    cout<<p1;
}

#endif //LEARNCPP_C4_7_HPP
