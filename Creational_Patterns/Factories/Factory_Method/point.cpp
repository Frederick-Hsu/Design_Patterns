/*!
 *  \file   point.cpp
 *  \brief  Implement the class Point.
 *
 */

#include <cmath>
#include "point.hpp"

namespace factory_method
{
    Point::Point(const float x, const float y) : m_x(x), m_y(y)
    {
    }

    Point Point::NewCartesian(float x, float y)
    {
        return Point(x, y);
    }

    Point Point::NewPolar(float r, float theta)
    {
        return Point(r * std::cos(theta), r * sin(theta));
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
