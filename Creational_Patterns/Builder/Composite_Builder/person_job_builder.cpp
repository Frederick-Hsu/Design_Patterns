/*!
 *  \file   person_job_builder.cpp
 *  \brief  Implement the concrete builder class PersonJobBuilder
 *
 */

#include "person_job_builder.hpp"

PersonJobBuilder::PersonJobBuilder(Person& person) : PersonBuilderBase(person)
{
}

PersonJobBuilder::self& PersonJobBuilder::at(std::string company_name)
{
    person.company_name = company_name;
    return *this;
}

PersonJobBuilder::self& PersonJobBuilder::as_a(std::string position)
{
    person.position = position;
    return *this;
}

PersonJobBuilder::self& PersonJobBuilder::earning(int annual_income)
{
    person.annual_income = annual_income;
    return *this;
}
