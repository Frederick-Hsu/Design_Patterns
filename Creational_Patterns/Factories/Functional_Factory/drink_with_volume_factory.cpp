/*!
 *  \file   drink_with_volume_factory.cpp
 *  \brief
 *
 */

#include "drink_with_volume_factory.hpp"
#include "../Abstract_Factory/tea.hpp"
#include "../Abstract_Factory/coffee.hpp"

DrinkWithVolumeFactory::DrinkWithVolumeFactory()
{
    factories["tea"] = [] {
        auto tea = std::make_unique<Tea>();
        tea->prepare(200);
        return tea;
    };

    factories["coffee"] = [] {
        auto coffee = std::make_unique<Coffee>();
        coffee->prepare(500);
        return coffee;
    };
}

std::unique_ptr<HotDrink> DrinkWithVolumeFactory::make_drink(const std::string& name)
{
    return factories[name]();
}
