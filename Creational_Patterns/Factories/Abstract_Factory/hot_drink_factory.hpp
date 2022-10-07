/*!
 *  \file   hot_drink_factory.hpp
 *  \brief
 *
 */

#pragma once

#include <memory>

#define interface   struct

class HotDrink;

/*!
 *  \note   Remember that different drinks are made by different machinery.
 *          In our case, we are interested in hot drinks, which we will model
 *          through the aptly named \interface HotDrinkFactory
 *
 *  \interface  HotDrinkFactory
 *  \brief      This is an abstract factory, with a specific interface.
 */
interface HotDrinkFactory
{
    virtual std::unique_ptr<HotDrink> make() const = 0;
};
