/*!
 *  \file   drink_factory.cpp
 *  \brief
 *
 */

#include "drink_factory.hpp"
#include "hot_drink.hpp"
#include "coffee_factory.hpp"
#include "tea_factory.hpp"
#include "tea.hpp"
#include "coffee.hpp"

DrinkFactory::DrinkFactory()
{
    hot_factories["coffee"] = std::make_unique<CoffeeFactory>();
    hot_factories["tea"] = std::make_unique<TeaFactory>();
}

/*!
 *  \fn         DrinkFactory::make_drink(const std::string& name)
 *  \brief      Make the concrete beverage according to beverage name you ordered
 *
 *  \details    Here we've made an assumption that we want drinks despensed based
 *              on their \arg name rather than some integer or enum member.
 *              We simply make a map of strings and the associated factories:
 *              the actual factory type is \a HotDrinkFactory (our Abstract Factory),
 *              and we store them through smart pointers rather than directly
 *              (it makes sense, because we want to prevent object slicing).
 *
 *              Now, when someone wants a drink, we find the relevant factory (
 *              think of a coffee shop assistant walking to the right machine),
 *              create the beverage, prepare exactly the volume required, and then
 *              return the relevant drink.
 *
 *  \param[in]  name - indicates what kind of beverage you want to drink
 *  \return     the detailed beverage you want to drink
 */
std::unique_ptr<HotDrink> DrinkFactory::make_drink(const std::string& name)
{
    auto drink = hot_factories[name]->make();
    drink->prepare(500);
    return drink;
}

std::unique_ptr<HotDrink> make_drink(std::string type)
{
    std::unique_ptr<HotDrink> drink;
    if (type == "tea")
    {
        drink = std::make_unique<Tea>();
        drink->prepare(200);
    }
    else
    {
        drink = std::make_unique<Coffee>();
        drink->prepare(50);
    }
    return drink;
}


