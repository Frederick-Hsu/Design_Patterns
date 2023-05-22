/*!
 *  \file       employee_factory.hpp
 *  \brief
 *
 */


#include "employee_factory.hpp"


Contact EmployeeFactory::main{"main", new Address{"123 East Dr", "London", 0}};
Contact EmployeeFactory::aux{"aux", new Address{"123 East Dr", "London", 0}};

std::unique_ptr<Contact> EmployeeFactory::NewMainOfficeEmployee(std::string name, int suite)
{
    return NewEmployee(name, suite, main);
}

std::unique_ptr<Contact> EmployeeFactory::NewAuxOfficeEmployee(std::string name, int suite)
{
    return NewEmployee(name, suite, aux);
}

std::unique_ptr<Contact> EmployeeFactory::NewEmployee(std::string name, int suite, Contact& proto)
{
    auto result = std::make_unique<Contact>(proto);
    result->name = name;
    result->address->suite = suite;

    return result;
}
