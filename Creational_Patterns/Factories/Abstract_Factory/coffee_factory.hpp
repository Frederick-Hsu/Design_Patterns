/*!
 *  \file   coffee_factory.hpp
 *  \brief
 *
 */

#pragma once

#include "hot_drink_factory.hpp"

/*!
 *  \class  CoffeeFactory
 *  \brief  A concrete class to make the coffee drink
 */
class CoffeeFactory : public HotDrinkFactory
{
public:
    std::unique_ptr<HotDrink> make() const override;
};
