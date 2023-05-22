/*!
 *  \file       employee_factory.hpp
 *  \brief
 *
 */


#pragma once

#include <string>
#include <memory>

struct Address
{
    std::string street;
    std::string city;
    int suite;
};


struct Contact
{
    std::string name;
    Address* address;
};


class EmployeeFactory
{
public:
    static Contact main;
    static Contact aux;

    static std::unique_ptr<Contact> NewMainOfficeEmployee(std::string name, int suite);
    static std::unique_ptr<Contact> NewAuxOfficeEmployee(std::string name, int suite);
private:
    static std::unique_ptr<Contact> NewEmployee(std::string name, int suite, Contact& proto);
};
