#include <iostream>
#include "Include/C6_6.hpp"

int main()
{
    FUNC &f=isShorterString;
    cout<<f("sss","ww")<<endl;

    FUNCP pf=isShorterString;
    cout<<pf("sss","ww")<<endl;
    return 0;
}
