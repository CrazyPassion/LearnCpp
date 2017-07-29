//
// Created by vonking on 2017/7/18.
//

#pragma once 

#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(const HasPtr &rhs_hp) {
        if(this != &rhs_hp){
            std::string *temp_ps = new std::string(*rhs_hp.ps);
            delete ps;
            ps = temp_ps;
            i = rhs_hp.i;
        }
        return *this;
    }
    ~HasPtr( ){delete ps;}
private:
    std::string *ps;
    int i;
};


struct X {
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }
    X& operator=(const X&) { std::cout << "X& operator=(const X&)" << std::endl; return *this; }
    ~X() { std::cout << "~X()" << std::endl; }
};

void f(const X &rx, X x)//rx no copy-constructor x have
{
    std::cout<<"f p1"<<endl;
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
    vec.push_back(x);
}

void Ex13_13()
{
    X *px = new X;
    std::cout<<"p1"<<endl;
    f(*px, *px);
    delete px;
}


class numbered {
public:
    numbered() {
        std::cout << "numbered()" << std::endl;
        mysn = unique++;
    }

    numbered(const numbered& n) {
        std::cout << "numbered(const numbered&)" << std::endl;
        mysn = unique++;
    }
//    numbered(numbered &r);//copy constructor must pass its first argument by reference
    int mysn;
    static int unique;
};

int numbered::unique = 10;


void f(const numbered &s)
{
    std::cout << s.mysn << std::endl;
}
void Ex13_14()
{
    //just s in f, the res is 13,14,15, if rerference of s in f(), the res is 10,11,12
    numbered a;
    std::cout << "p1" << std::endl;
    numbered b = a;
    std::cout << "p2" << std::endl;
    numbered c = b;
    std::cout << "p3" << std::endl;
    f(a);
    f(b);
    f(c);
}
