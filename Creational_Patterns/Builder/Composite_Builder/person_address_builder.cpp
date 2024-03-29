/*!
 *  \file   person_address_builder.cpp
 *  \brief  Implement the concrete builder class PersonAddressBuilder
 *
 */

#include "person_address_builder.hpp"

PersonAddressBuilder::PersonAddressBuilder(Person& person) : PersonBuilderBase(person)
{
}

PersonAddressBuilder::self&  PersonAddressBuilder::at(std::string street_address)
{
    person.street_address = street_address;
    return *this;
}

PersonAddressBuilder::self& PersonAddressBuilder::with_postcode(std::string post_code)
{
    person.post_code = post_code;
    return *this;
}

PersonAddressBuilder::self& PersonAddressBuilder::in(std::string city)
{
    person.city = city;
    return *this;
}
