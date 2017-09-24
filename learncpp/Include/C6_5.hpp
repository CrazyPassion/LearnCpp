//
// Created by vonking on 2017/6/10.
//

#pragma once 

#include <iostream>
using std::cout;
using std::endl;

void Screen(int, int,char = 'a');
void Screen(int, int=6,char);


void Screen(int a, int b, char c)
{
    cout<<"a:"<<a<<"b: "<<b<<"c "<<c<<endl;
}
