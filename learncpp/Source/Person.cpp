//
// Created by vonking on 2017/6/13.
//

#include "../Include/Person.hpp"

std::string const &Person::get_name()
{
    return name;
}

std::string const &Person::get_addr()
{
    return address;
}

Person::Person(const std::string &name) : name(name)
{
}
