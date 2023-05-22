/*!
 *  \file       main.cpp
 *  \brief      This file implements the main() portal function.
 *
 */


#include <gtest/gtest.h>


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
