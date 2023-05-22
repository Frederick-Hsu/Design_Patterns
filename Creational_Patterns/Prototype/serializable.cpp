/*!
 *  \file       serializable.cpp
 *  \brief      Make the serialization for user-defined classes.
 *
 */


#include "serializable.hpp"

namespace serializable
{
    template<class Ar> void Address::serialize(Ar& ar, const unsigned int /* version */)
    {
        ar & street;
        ar & city;
        ar & suite;
    }

    template<class Ar> void Contact::serialize(Ar& ar, const unsigned int /* version */)
    {
        ar & name;
        ar & address;
    }

    Contact clone(const Contact& contact)
    {
        std::ostringstream oss;
        boost::archive::text_oarchive oa(oss);
        oa << contact;
        std::string str = oss.str();

        std::istringstream iss(oss.str());
        boost::archive::text_iarchive ia(iss);
        Contact result;
        ia >> result;
        return result;
    }
}
