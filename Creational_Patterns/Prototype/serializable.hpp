/*!
 *  \file       serializable.hpp
 *  \brief      Try to define such classes, which can be serializable.
 *
 */


#pragma once

#include <string>
#include <iostream>
#include <boost/serialization/access.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

namespace serializable
{
    struct Address
    {
        std::string street;
        std::string city;
        int suite;
    private:
        friend class boost::serialization::access;

        template<class Ar> void serialize(Ar& ar, const unsigned int version);
    };

    struct Contact
    {
        std::string name;
        Address* address = nullptr;
    private:
        friend class boost::serialization::access;

        template<class Ar> void serialize(Ar& ar, const unsigned int version);
    };

#if 0
    auto clone = [](const serializable::Contact& contact)
    {
        /* 1. Serialize the contact */
        std::ostringstream oss;
        boost::archive::text_oarchive oa(oss);
        oa << contact;
        std::string str = oss.str();

        /* 2. Deserialize the contact */
        std::istringstream iss(oss.str());
        boost::archive::text_iarchive ia(iss);
        Contact result;
        ia >> result;
        return result;
    };
#else
    Contact clone(const Contact& contact);
#endif
}
