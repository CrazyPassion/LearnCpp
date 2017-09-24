//
// Created by vonking on 2017/7/9.
//

#pragma once 
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::vector; using std::cout; using std::endl; using std::list; using std::cin; using std::fill_n;

void EX10_6()
{
    vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    fill_n(vec.begin(), vec.size(), 0);

    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}

template<typename Sequence>
void print(Sequence const& seq)
{
    for (const auto& i : seq)
        cout << i << " ";
    cout << endl;
}

void EX10_7()
{
    // (a)
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);

    copy(lst.cbegin(), lst.cend(), back_inserter(vec));
    // Fixed: the vec.begin() was replaced by a back_inserter iterator, capable of
    // insert new elements automatically at the end of the container.

    // (b)
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);
    // ^ (b)No error, but not any sense. v.size() still equal zero.
    // Fixed: 1. use `v.resize(10);`
    //    or  2. use `fill_n(std::back_inserter(v), 10, 0)`

    print(v);
    print(vec);
}

template<typename Sequence>
auto println(Sequence const& seq) -> std::ostream&
{
    for (auto const& elem : seq)
        std::cout << elem << " ";
    return std::cout << std::endl;
}

auto eliminate_duplicates(std::vector<std::string> &vs) -> std::vector<std::string>&
{
    std::sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = std::unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}

void EX10_9()
{
    std::vector<std::string> vs{ "a", "v", "a", "s", "v", "a", "a" };
    println(vs);
    println(eliminate_duplicates(vs));
}