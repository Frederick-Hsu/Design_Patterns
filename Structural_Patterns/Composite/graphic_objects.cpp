/*!
 *  \file       graphic_objects.cpp
 *  \brief
 *
 */


#include "graphic_objects.hpp"

#include <iostream>

void Circle::draw()
{
    std::cout << "Circle" << std::endl;
}

Group::Group(const std::string& name) : name(name)
{
}

void Group::draw()
{
    std::cout << "Group " << name << " contains:" << std::endl;

    for (auto& object : objects)
    {
        object->draw();
    }
}

void Rectangle::draw()
{
    std::cout << "Rectangle" << std::endl;
}

void Triangle::draw()
{
    std::cout << "Triangle" << std::endl;
}

void Ellipse::draw()
{
    std::cout << "Ellipse" << std::endl;
}
