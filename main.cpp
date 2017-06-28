#include <iostream>
#include "Include/Struct.hpp"
#include "Include/fflush.hpp"

using std::cin; using std::cout; using std::endl;

int main()
{
    cout<<"hi1"<<endl;
    cout<<"hi2"<<std::flush;
    cout<<"hi3"<<std::ends;

//    fflushPrint();
    cout<<std::unitbuf;
    for (int i = 0; i < 100; i++)
    {
        cout<<"percent : "<<i<<"%."<<'\r';
        sleep(1);
//        fflush(stdout);
    }
    cout<<std::nounitbuf;
    cout<<"real end";
}
