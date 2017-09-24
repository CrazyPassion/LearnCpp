//
// Created by vonking on 2017/6/10.
//

#pragma once
#include <iostream>
#include <string>
using std::cout; using std::endl;

using std::string;

void func(short a)
{
    //useless function, will replace by int version automaticlly.
    cout<<"int version"<<endl;
    cout<<a<<endl;
}

void func(int a)
{
    cout<<"int version"<<endl;
    cout<<a<<endl;
}

void func(float a)
{
    cout<<"float version"<<endl;
    cout<<a<<endl;
}

//manip('a','z');
//manip(55.4,60.0);
//these two methods for call manip ARE ok.
void manip(int a,int b){
    cout<<a<<" "<<b<<endl;
}


//decltype 作用于函数时，返回的是函数类型而不是指针类型
typedef bool FUNC(const string &s1, const string &s2);
//FUNC &f=isShorterString;  //should be a reference.
//cout<<f("sss","ww")<<endl;
typedef bool (*FUNCP)(const string &s1, const string &s2);
//FUNCP pf=isShorterString;
//cout<<pf("sss","ww")<<endl;

bool isShorterString(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}


