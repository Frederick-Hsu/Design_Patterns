/*!
 *  \file   tea_factory.hpp
 *  \brief
 *
 */

#pragma once

#include "hot_drink_factory.hpp"

/*!
 *  \class  TeaFactory
 *  \brief  A concrete class to make the tea drink.
 */
class TeaFactory : public HotDrinkFactory
{
public:
    std::unique_ptr<HotDrink> make() const override;
};

