/*!
 *  \file   person.cpp
 *  \brief  Implement the class Person
 *
 */

#include <iostream>

#include "person.hpp"
#include "person_builder.hpp"

Person::Person(const std::string& person_name) : name(person_name)
{
#if defined (DEBUG)
    std::cout << "Called default constructor Person::Person() to create person instance."
              << std::endl;
#endif
}

Person::~Person()
{
#if defined (DEBUG)
    std::cout << "Called destructor Person::~Person() to destroy person instance."
              << std::endl;
#endif
}

Person::Person(Person&& other_person)
    : name(std::move(other_person.name)),
      street_address(std::move(other_person.street_address)),
      post_code(std::move(other_person.post_code)),
      city(std::move(other_person.city)),
      company_name(std::move(other_person.company_name)),
      position(std::move(other_person.position)),
      annual_income(other_person.annual_income)
{
#if defined (DEBUG)
    std::cout << "Called move constructor Person::Person(Person&& other_person) "
                 "to create person instance."
              << std::endl;
#endif
}

Person& Person::operator=(Person&& other_person)
{
#if defined (DEBUG)
    std::cout << "Called move assignment constructor Person& Person::operator="
                 "(Person&& other_person) to create person instance."
              << std::endl;
#endif
    if (this == &other_person)
        return *this;
    name = std::move(other_person.name);
    street_address = std::move(other_person.street_address);
    post_code = std::move(other_person.post_code);
    city = std::move(other_person.city);
    company_name = std::move(other_person.company_name);
    position = std::move(other_person.position);
    annual_income = other_person.annual_income;
    return *this;
}

#if !defined (ENABLE_DELETE_COPY_CTORS)
    Person::Person(const Person& other_person)
        : name(other_person.name),
          street_address(other_person.street_address),
          post_code(other_person.post_code),
          city(other_person.city),
          company_name(other_person.company_name),
          position(other_person.position),
          annual_income(other_person.annual_income)
    {
    #if defined (DEBUG)
        std::cout << "Called copy constructor Person::Person(const Person& other_person) "
                     "to create person instance."
                  << std::endl;
    #endif
    }

    Person& Person::operator=(const Person& other_person)
    {
    #if defined (DEBUG)
        std::cout << "Called assignment constructor Person& Person::operator="
                     "(const Person& other_person) to create person instance."
                  << std::endl;
    #endif
        if (this == &other_person)
            return *this;
        name = other_person.name;
        street_address = other_person.street_address;
        post_code = other_person.post_code;
        city = other_person.city;
        company_name = other_person.company_name;
        position = other_person.position;
        annual_income = other_person.annual_income;
        return *this;
    }
#endif

PersonBuilder Person::create(const std::string& person_name)
{
    return PersonBuilder(person_name);
}

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person name \t\t: " << person.name << std::endl
        << "street_address \t\t: " << person.street_address << std::endl
        << "post_code \t\t: " << person.post_code << std::endl
        << "city \t\t\t: " << person.city << std::endl
        << "company_name \t\t: " << person.company_name << std::endl
        << "position \t\t: " << person.position << std::endl
        << "annual_income \t\t: " << person.annual_income << std::endl;
    return out;
}
