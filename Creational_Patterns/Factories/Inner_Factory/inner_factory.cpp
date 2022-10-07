/*!
 *  \file   point.cpp
 *  \brief
 *
 */

#include <cmath>
#include "inner_factory.hpp"

namespace inner_factory
{
    Point::Point(float x, float y) : m_x(x), m_y(y)
    {
    }

    Point::PointFactory::PointFactory()
    {
    }

    Point Point::PointFactory::NewCartesian(float x, float y)
    {
        return Point(x, y);
    }

    Point Point::PointFactory::NewPolar(float r, float theta)
    {
        return Point(r*std::cos(theta), r*std::sin(theta));
    }

    float Point::GetX() const
    {
        return m_x;
    }

    float Point::GetY() const
    {
        return m_y;
    }
}
