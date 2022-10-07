/*!
 *  \file   coffee.hpp
 *  \brief
 *
 */


#pragma once

#include <string>
#include "hot_drink.hpp"

/*!
 *  \class  Coffee
 */
class Coffee : public HotDrink
{
public:
    void prepare(int volume) override;
    void drink() override;

    std::string coffee_brand();
};
