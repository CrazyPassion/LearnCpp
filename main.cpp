
#include <iostream>
#include "Include/C13_1.hpp"


int main()
{
    int i = 0;
    int *pi = &i;
    ++*pi;
    cout<<i<<endl;
    if (--*pi == 0)
    {
        cout<<"--pi "<<i<<endl;
    }
    cout<<"after"<<i<<endl;
    return 0;
}