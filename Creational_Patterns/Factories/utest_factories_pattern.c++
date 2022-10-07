/*!
 *  \file   utest_factories_pattern.c++
 *  \brief  Carry out the unit testing for the factory patterns.
 *
 */

#include <gtest/gtest.h>
#include <cmath>
#include <tuple>

#include "Factory/point_factory.hpp"
#include "Factory_Method/point.hpp"
#include "Inner_Factory/inner_factory.hpp"
#include "Abstract_Factory/drink_factory.hpp"
#include "Abstract_Factory/hot_drink.hpp"
#include "Abstract_Factory/hot_drink_factory.hpp"
#include "Abstract_Factory/coffee.hpp"
#include "Functional_Factory/drink_with_volume_factory.hpp"


TEST(UTest4Factory, ApplyFactoryToCreateInstance)
{
    factory::Point my_point = factory::PointFactory::NewCartesian(3, 4);
    EXPECT_EQ(my_point.GetX(), 3);
    EXPECT_EQ(my_point.GetY(), 4);

    factory::Point point = factory::PointFactory::NewPolar(10, M_PI_4);
    EXPECT_FLOAT_EQ(point.GetX(), 10 * std::cos(M_PI_4));
    EXPECT_FLOAT_EQ(point.GetY(), 10 * std::sin(M_PI_4));
}

TEST(UTest4Factory, ApplyFactoryMethodToCreateInstance)
{
    factory_method::Point cartesianPoint = factory_method::Point::NewCartesian(3, 4);

    EXPECT_EQ(cartesianPoint.GetX(), 3);
    EXPECT_EQ(cartesianPoint.GetY(), 4);
}

TEST(UTest4Factory, ApplyInnerFactoryToCreateInstance)
{
    inner_factory::Point point = inner_factory::Point::factory.NewPolar(5, M_PI_2f);

    EXPECT_DOUBLE_EQ(point.GetX(), 5 * std::cos(M_PI_2f));
    EXPECT_DOUBLE_EQ(point.GetY(), 5 * std::sin(M_PI_2f));
}

TEST(UTest4Factory, ApplyAbstractFactoryToCreateInstance)
{
    std::cout << "sizeof(HotDrinkFactory) = " << sizeof(HotDrinkFactory) << std::endl;
    DrinkFactory factory = DrinkFactory();
    auto tea = factory.make_drink("tea");
    tea->drink();
    /*!
     *  \note   tea is the parent class "HotDrink" object, cannot call the method
     *          of child class "Tea"
     */
    // tea->tea_category();

    std::cout << "\n" << std::endl;

    std::unique_ptr<HotDrink> drink = factory.make_drink("coffee");
    /*!
     *  \note   Downward cast from the object pointer of parent class "HotDrink"
     *          to the child class "Coffee".
     *          It is not recommended, because of data loss.
     */
    Coffee *coffee = reinterpret_cast<Coffee*>(drink.get());
    std::cout << coffee->coffee_brand() << std::endl;
}

TEST(UTest4Factory, ApplyFunctionalFactoryToCreateInstance)
{
    DrinkWithVolumeFactory factory;
    auto tea = factory.make_drink("tea");
    auto coffee = factory.make_drink("coffee");

    tea->drink();
    coffee->drink();
}
