/* Created by vonking on 2017/9/24. Copyright (c) 2017 Steven Fung. All rights reserved. */

#include "gtest/gtest.h"
#include <Singleton.hpp>

TEST(singleton_test,test_eq)
{
    Singleton &s = Singleton::GetInstance();
    EXPECT_EQ(1, s.GetNum());
}