/*!
 *  \file   drink_factory.hpp
 *  \brief
 *
 */

#pragma once

#include <string>
#include <memory>
#include <map>

class HotDrinkFactory;
class HotDrink;

/*!
 *  \note   Now suppose we want to difine a higher level interface for making
 *          different drinks. We could make a type \a DrinkFactory that would
 *          itself contain references to the various factories that are available.
 *
 *  \class  DrinkFactory
 */
class DrinkFactory
{
private:
    using DrinkType = std::string;
    using PointerToDrinkFactory = std::unique_ptr<HotDrinkFactory>;

    std::map<DrinkType, PointerToDrinkFactory> hot_factories;
public:
    DrinkFactory();
public:
    std::unique_ptr<HotDrink> make_drink(const std::string& name);
};

std::unique_ptr<HotDrink> make_drink(std::string type);

