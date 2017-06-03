#include <iostream>
#include "C4_8.hpp"
int main(void)
{
    int cnt =5;
    int arr[5];
    for (int i = 0; i < 5; ++i,--cnt)
    {
        arr[i] = cnt;
        cout <<arr[i]<<endl;
    }
    cnt = 5;
    for (int i = 0; i < 5; i++,cnt--)
    {
        arr[i] = cnt;
        cout <<arr[i]<<endl;
    }
    return 0;
}

