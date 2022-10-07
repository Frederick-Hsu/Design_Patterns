/*!
 *  \file   tea_factory.cpp
 *  \brief
 *
 */


#include "tea_factory.hpp"
#include "tea.hpp"


std::unique_ptr<HotDrink> TeaFactory::make() const
{
    return std::make_unique<Tea>();
}
