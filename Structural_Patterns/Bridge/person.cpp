/*!
 *  \file       person.cpp
 *  \brief
 *
 */


#include "person.hpp"

#include <iostream>

class Person::PersonImpl
{
public:
    void greet(Person* p);
};


Person::Person() : impl(new PersonImpl)
{
}

Person::~Person()
{
    delete impl;
}

void Person::greet()
{
    impl->greet(this);
}

void Person::PersonImpl::greet(Person* p)
{
    std::cout << "Hello " << p->name << std::endl;
}
