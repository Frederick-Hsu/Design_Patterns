/*!
 *  \file       test_serializable.c++
 *  \brief      Make the unit test for the serializable/deserializable objects.
 *
 */


#include "serializable.hpp"

#include <gtest/gtest.h>


TEST(UTester4Serializable, CheckWhetherClassIsSerializable)
{
    serializable::Contact john{"John Doe", new serializable::Address{"123 East Dr", "London", 10}};
    serializable::Contact jane = serializable::clone(john);
    jane.name = "Jane";
    jane.address->suite = 121;

    EXPECT_EQ(john.name, "John Doe");
    EXPECT_EQ(jane.name, "Jane");
    EXPECT_TRUE(john.address->suite == 10 && jane.address->suite == 121);

    EXPECT_EQ(john.address->city, jane.address->city);
    EXPECT_NE(john.address, jane.address);
}
