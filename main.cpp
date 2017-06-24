#include <iostream>
#include "Include/Struct.hpp"


using std::cin; using std::cout; using std::endl;

int main()
{
    Test A;
    A.init();
    cout<<A.a<<" "<<A.b<<endl;
}
