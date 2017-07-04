//
// Created by vonking on 2017/7/4.
//

#pragma once 
#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>

using std::deque; using std::list; using std::cout; using std::cin; using std::endl;
using std::vector; using std::forward_list;

void Ex9_20()
{
    list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> odd, even;
    for (auto i : l)
        (i & 0x1 ? odd : even).push_back(i);

    for (auto i : odd) cout << i << " ";
    cout << endl;
    for (auto i : even)cout << i << " ";
    cout << endl;
}

void Ex9_24()
{
    //compile pass
    std::vector<int> v;
    std::cout << v.at(0);       // terminating with uncaught exception of type std::out_of_range
    std::cout << v[0];          // Segmentation fault: 11
    std::cout << v.front();     // Segmentation fault: 11
    std::cout << *v.begin();    // Segmentation fault: 11
}

void Ex9_25()
{
    list<int> l{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto &sec = ++ l.begin();
    l.erase(sec,sec);
    for(auto ele:l)
        cout<<ele<<" ";
}

void Ex9_26()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> vec(a,std::end(a));
    list<int> l(vec.begin(),vec.end());
    for(auto e:vec)
        cout<<e<<" ";
    cout<<endl;
    for(auto b:l)
        cout<<b<<" ";
    cout<<endl;
    for(auto begin = vec.begin(); begin != vec.end();)
    {
        if(!(*begin & 0x1))
            begin = vec.erase(begin);//this will point to the next of delete element.
        else
            begin++;
    }

    for(auto begin = l.begin(); begin != l.end();)
    {
        if(*begin & 0x1)
            begin = l.erase(begin);
        else
            begin++;
    }
    for(auto e:vec)
        cout<<e<<" ";
    cout<<endl;
    for(auto e:l)
        cout<<e<<" ";
}

void Ex9_27()
{
    forward_list<int> fl = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end())
        if (*curr & 0x1)
            curr = fl.erase_after(prev);
        else
        {
            prev = curr;
            curr++;
        }
    for(auto e:fl)
        cout<<e<<" ";
}

void Ex9_34()
{
    vector<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(auto cur = data.begin(); cur != data.end(); ++cur)
        if(*cur & 0x1)
        {
            cur = data.insert(cur, *cur);
            ++cur;
        }

    for (auto i : data)
        cout << i << " ";
}