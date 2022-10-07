/*!
 *  \file   person_builder_base.cpp
 *  \brief  Implement the base class PersonBuilderBase
 *
 */

#include <memory>

#include "person_builder_base.hpp"
#include "person_address_builder.hpp"
#include "person_job_builder.hpp"

PersonBuilderBase::PersonBuilderBase(Person& person) : person(person)
{
}

PersonBuilderBase::operator Person()
{
    return std::move(person);
}

PersonAddressBuilder PersonBuilderBase::lives() const
{
    return PersonAddressBuilder(person);
}

PersonJobBuilder PersonBuilderBase::works() const
{
    return PersonJobBuilder(person);
}
