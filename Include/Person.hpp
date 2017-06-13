#pragma once
#include <string>

class Person
{
    std::string name;
    std::string address;
public:
    std::string const& get_name();
    std::string const&  get_addr();
};