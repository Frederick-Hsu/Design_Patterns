/*!
 *  \file   coffee_factory.cpp
 *  \brief
 *
 */

#include "coffee_factory.hpp"
#include "coffee.hpp"

std::unique_ptr<HotDrink> CoffeeFactory::make() const
{
    return std::make_unique<Coffee>();
}
