/*!
 *  \file       prototype.hpp
 *  \brief
 *
 */


#pragma once


#include <string>


#define ORDINARY_DUPLICATION                1
#define DUPLICATION_VIA_COPY_CONSTRUCTION   2
#define DUPLICATION                         DUPLICATION_VIA_COPY_CONSTRUCTION


struct Address
{
    std::string street;
    std::string city;
    int suite;

    Address(const std::string& street, const std::string& city, const int suite);
};

#if (DUPLICATION == ORDINARY_DUPLICATION)
    struct Contact
    {
        std::string name;
        Address address;
    };
#elif (DUPLICATION == DUPLICATION_VIA_COPY_CONSTRUCTION)
    struct Contact
    {
        std::string name;
        Address* address;

        Contact(const std::string& name, Address* addr);
        Contact(const Contact& other);
        Contact& operator=(const Contact& other);
    };
#endif


template<typename T> struct ICloneable
{
    virtual T clone() const = 0;
};
