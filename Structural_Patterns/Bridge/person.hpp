/*!
 *  \file       pimpl_idiom.hpp
 *  \brief
 *
 */



#pragma once

#include <string>

class Person
{
private:
    std::string name;
public:
    Person();
    ~Person();

    void greet();
private:
    class PersonImpl;
    PersonImpl* impl;
};
