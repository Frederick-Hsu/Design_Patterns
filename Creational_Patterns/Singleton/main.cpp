/*!
 *  \file       main.cpp
 *  \brief      This project will study the Singleton pattern.
 *  \author     Frederique Hsu
 *  \date       Tue.    16 May 2023
 *  \copyright  2023    All rights reserved.
 *
 */



#include <gtest/gtest.h>

int main(int argc, char* argv[])
{
    std::cout << "Current C++ standard number is: " << __cplusplus << std::endl;
    std::cout << "Current program is " << sizeof(void*) * 8 << "-bits.\n" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


/*!
 *  \note       Summary
 *
 *  \details    Singletons are not totally evil, but when used carelessly, they will mess up
 *              the testability and refactorability of your application.
 *
 *              If you really must use a singleton, try avoiding using it directly
 *              `getInstance()` and instead keep specifying it as a dependency where all
 *              dependencies are satisfied from a single location in your application
 *              (e.g.  an inversion of control container)
 */
