#pragma once
#include <stdio.h>
#include <unistd.h>
#include <iostream>

using std::cout;

void fflushPrint();

void fflushPrint() {
    for (int i = 0; i < 100; i++)
    {
        printf("percent : %d%%.\r", i);
        sleep(1);
        fflush(stdout);
    }
}

void fflushCout()
{
    cout<<std::unitbuf;
    for (int i = 0; i < 100; i++)
    {
        cout<<"percent : "<<i<<"%."<<'\r';
        sleep(1);
    }
    cout<<std::nounitbuf;
}