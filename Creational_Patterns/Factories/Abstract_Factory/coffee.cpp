/*!
 *  \file   coffee.cpp
 *  \brief
 *
 */

#include <iostream>

#include "coffee.hpp"

void Coffee::prepare(int volume)
{
    std::cout << "Grind the coffee beans, boil water, pour " << volume
              << "ml, plus some milk." << std::endl;
}

void Coffee::drink()
{
    std::cout << "I am drinking a cup of coffee." << std::endl;
}

std::string Coffee::coffee_brand()
{
    return std::string("Nestle Coffee");
}
