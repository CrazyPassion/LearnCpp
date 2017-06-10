#include <iostream>
#include "C6_2.hpp"
using std::cout;
using std::endl;

int f(int i)
{
    if (i > 1)
        return f(--i)*i;
    return  1;
}
int main(void)
{
    cout<<f(5)<<endl;
    int res = f(5);
    cout<<res<<endl;
    return 0;
}

