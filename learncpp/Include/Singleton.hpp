// Created by vonking on 2017/9/24. Copyright (c) 2017 Steven Fung. All rights reserved.

#pragma once

class Singleton {
public:
    static Singleton &GetInstance();
    int GetNum();

private:
    Singleton(){}
    virtual ~Singleton(){}
};
