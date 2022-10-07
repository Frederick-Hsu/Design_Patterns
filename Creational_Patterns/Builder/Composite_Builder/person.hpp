/*!
 *  \file   person.hpp
 *  \brief  Define the class Person
 *
 */

#pragma once

#include <string>

#define ENABLE_DELETE_COPY_CTORS

class PersonBuilder;

class Person
{
    friend class PersonBuilder;
    friend class PersonAddressBuilder;
    friend class PersonJobBuilder;
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
private:
    std::string name;
    // address
    std::string street_address;
    std::string post_code;
    std::string city;
    // employment
    std::string company_name;
    std::string position;
    int annual_income = 0;
private:
    explicit Person(const std::string& person_name);
#if defined (ENABLE_DELETE_COPY_CTORS)
    Person(const Person& other_person) = delete;
    Person& operator=(const Person& other_person) = delete;
#else
    Person(const Person& other_person);
    Person& operator=(const Person& other_person);
#endif
public:
    ~Person();
    Person(Person&& other_person);
    Person& operator=(Person&& other_person);
public:
    static PersonBuilder create(const std::string& person_name);
};
