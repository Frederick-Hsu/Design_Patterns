/*!
 *  \file   person_job_builder.hpp
 *  \brief  Define the concrete builder class PersonJobBuilder
 *
 */

#pragma once

#include "person_builder_base.hpp"

class PersonJobBuilder : public PersonBuilderBase
{
    typedef PersonJobBuilder    self;
public:
    explicit PersonJobBuilder(Person& person);
public:
    self& at(std::string company_name);
    self& as_a(std::string position);
    self& earning(int annual_income);
};
