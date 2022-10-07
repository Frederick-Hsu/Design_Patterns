/*!
 *  \file   tea.cpp
 *  \brief
 *
 */

#include <iostream>

#include "tea.hpp"


void Tea::prepare(int volume)
{
    std::cout << "Take tea bag, boil water, pour " << volume
              << "ml, add some lemon." << std::endl;
}

void Tea::drink()
{
    std::cout << "I am drinking a bottle of tea." << std::endl;
}

std::string Tea::tea_category()
{
    return std::string("Jasmine Tea");
}
