/*!
 *  \file       main.cpp
 *  \brief      Verify whether GoogleTest library can run in this GitHub.Docker cloud environment.
 *  \author     Frederique Hsu
 *  \date       Mon.    29 May 2023
 *  
 */


#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Current C++ standard number is " << __cplusplus << std::endl;
    std::cout << "Current program is " << sizeof(void*) * 8 << "-bits.\n" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}