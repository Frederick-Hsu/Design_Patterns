/*!
 *  \file   person_address_builder.hpp
 *  \brief  Define the concrete builder class PersonAddressBuilder
 *
 */

#pragma once

#include "person_builder_base.hpp"

class PersonAddressBuilder : public PersonBuilderBase
{
    typedef PersonAddressBuilder    self;
public:
    explicit PersonAddressBuilder(Person& person);
public:
    self& at(std::string street_address);
    self& with_postcode(std::string post_code);
    self& in(std::string city);
};
