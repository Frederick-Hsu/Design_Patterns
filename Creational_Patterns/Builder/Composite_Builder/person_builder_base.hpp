/*!
 *  \file   person_builder_base.hpp
 *  \brief  Define a base class \class PersonBuilderBase
 *
 */

#pragma once

#include "person.hpp"

class PersonAddressBuilder;
class PersonJobBuilder;

class PersonBuilderBase
{
protected:
    Person& person;
protected:
    explicit PersonBuilderBase(Person& person);
public:
    operator Person();
    // builder facets
    PersonAddressBuilder lives() const;
    PersonJobBuilder works() const;
};
