// Created by vonking on 2017/9/24. Copyright (c) 2017 Steven Fung. All rights reserved.

#include "Singleton.hpp"

Singleton &Singleton::GetInstance() {
    static Singleton singleton;
    return singleton;
}

int Singleton::GetNum() {
    return 10;
}
