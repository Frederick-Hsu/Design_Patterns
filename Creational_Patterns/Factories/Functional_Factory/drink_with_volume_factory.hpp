/*!
 *  \file   drink_with_volume_factory.hpp
 *  \brief
 *
 */

#pragma once

#include <map>
#include <string>
#include <memory>
#include <functional>

class HotDrink;

class DrinkWithVolumeFactory
{
private:
    std::map<std::string, std::function<std::unique_ptr<HotDrink>()>> factories;
public:
    DrinkWithVolumeFactory();
public:
    std::unique_ptr<HotDrink> make_drink(const std::string& name);
};
