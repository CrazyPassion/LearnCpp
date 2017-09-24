#pragma once
#include <string>

class Person
{
    std::string name;
    std::string address;
public:
    Person(const std::string &name);
    std::string const& get_name();
    std::string const&  get_addr();
};