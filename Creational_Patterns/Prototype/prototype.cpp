/*!
 *  \file       prototype.cpp
 *  \brief
 *
 */


#include "prototype.hpp"

Address::Address(const std::string& street, const std::string& city, const int suite)
    : street{street}, city{city}, suite{suite}
{
}

#if (DUPLICATION == ORDINARY_DUPLICATION)
#elif (DUPLICATION == DUPLICATION_VIA_COPY_CONSTRUCTION)
    #if 0
    Contact::Contact(const Contact& other) : name(other.name)
                                             //, address{new Address{*other.address}}
    {
        address = new Address{other.address->street,
                              other.address->city,
                              other.address->suite};
    }
    #else
    Contact::Contact(const Contact& other) : name{other.name},
                                             address{new Address(*other.address)}
    {
    }
    #endif

    Contact& Contact::operator=(const Contact& other)
    {
        if (this != &other)
        {
            name = other.name;
            address = other.address;
        }
        return *this;
    }

    Contact::Contact(const std::string& name, Address* addr) : name{name}, address{addr}
    {
    }
#endif
