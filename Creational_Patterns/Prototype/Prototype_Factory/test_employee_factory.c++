/*!
 *  \file       test_employee_factory.c++
 *  \brief
 *
 */


#include <gtest/gtest.h>

#include "employee_factory.hpp"


TEST(UTester4EmployeeFactory, CheckHowPrototypeFactoryWorks)
{
    auto john = EmployeeFactory::NewAuxOfficeEmployee("John F. Kennedy", 123);
    auto joe = EmployeeFactory::NewMainOfficeEmployee("Joe Biden", 125);

    EXPECT_EQ(john->address->city, joe->address->city);
    EXPECT_EQ(john->address->city, "London");

    EXPECT_EQ(john->name, "John F. Kennedy");
    EXPECT_EQ(joe->address->suite, 125);
}
