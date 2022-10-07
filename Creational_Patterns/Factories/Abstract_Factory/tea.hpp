/*!
 *  \file   tea.hpp
 *  \brief
 *
 */

#pragma once

#include <string>
#include "hot_drink.hpp"

/*!
 *  \class  Tea
 */
class Tea : public HotDrink
{
public:
    void prepare(int volume) override;
    void drink() override;

    std::string tea_category();
};
