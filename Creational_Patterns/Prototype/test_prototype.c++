/*!
 *  \file       test_prototype.c++
 *  \brief      Make the unit test for prototype.
 *
 */


#include "prototype.hpp"

#include <gtest/gtest.h>


#if (DUPLICATION == ORDINARY_DUPLICATION)
    TEST(UTester4Prototype, CheckOrdinaryObjectDuplication)
    {
        /* here is a prototype */
        Contact worker{"", Address{"123 East Dr", "London", 0}};

        /* make a copy of prototype and customize it */
        Contact john = worker;
        john.name = "John Doe";
        john.address.suite = 10;

        EXPECT_EQ(worker.name, "");
        EXPECT_EQ(worker.address.suite, 0);

        EXPECT_EQ(john.name, "John Doe");
        EXPECT_EQ(john.address.suite, 10);
    }
#elif (DUPLICATION == DUPLICATION_VIA_COPY_CONSTRUCTION)
    #include <iostream>
    #include <stdio.h>

    TEST(UTester4Prototype, CheckDuplicateObjectViaCopyConstruction)
    {
        Contact worker{"", new Address("123 East Dr", "London", 0)};
        // Contact john{worker};
        Contact john = worker;

        john.name = "John Doe";
        john.address->suite = 10;

        EXPECT_EQ(worker.name, "");
        EXPECT_EQ(worker.address->suite, 0);

        EXPECT_EQ(john.name, "John Doe");
        EXPECT_EQ(john.address->suite, 10);

        EXPECT_EQ(worker.address->city, john.address->city);
        EXPECT_EQ(john.address->city, "London");

        EXPECT_NE(john.address, worker.address);

        // std::cout << "&john.address = " << std::ios_base::hex << john.address << std::endl;
        printf("&john.address \t= 0x%016X\n", john.address);
        printf("&worker.address \t= 0x%016X\n", worker.address);
    }
#endif
