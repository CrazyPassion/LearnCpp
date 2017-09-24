//
// Created by vonking on 2017/6/10.
//

#pragma once 

int odd[] = {1,3,5,7,9};
int even[] = {0, 2,4,6,8};

decltype(odd)& Ex6_38(int i)
{
    return (i%2)? odd:even;
}
