/*!
 *  \file       test_monostate.c++
 *  \brief
 *
 */


#include <gtest/gtest.h>
#include <iostream>

#include "monostate.hpp"


TEST(UTester4Monostate, CheckHowMonostateWorks)
{
    Printer hp_printer;
    Printer lenovo_printer;

    hp_printer.set_id(5);
    lenovo_printer.set_id(10);

    std::cout << "HP Printer's id = " << hp_printer.get_id() << std::endl;
    std::cout << "Lenovo Printer's id = " << lenovo_printer.get_id() << std::endl;

    EXPECT_TRUE(hp_printer.get_id() == lenovo_printer.get_id());
}
