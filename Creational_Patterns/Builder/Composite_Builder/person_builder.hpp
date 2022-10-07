/*!
 *  \file   person_builder.hpp
 *  \brief  Define the concrete class PersonBuilder
 *
 */

#pragma once

#include "person_builder_base.hpp"


class PersonBuilder : public PersonBuilderBase
{
private:
    Person p;   // object being built
public:
    PersonBuilder(const std::string& person_name);
};
