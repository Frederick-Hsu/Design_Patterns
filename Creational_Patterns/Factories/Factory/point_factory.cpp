/*!
 *  \file   point_factory.cpp
 *  \brief
 *
 */

#include <cmath>

#include "point_factory.hpp"

namespace factory
{
    Point::Point(float x, float y) : m_x(x), m_y(y)
    {
    }

    float Point::GetX() const
    {
        return m_x;
    }

    float Point::GetY() const
    {
        return m_y;
    }

    Point PointFactory::NewCartesian(float x, float y)
    {
        return Point(x, y);
    }

    Point PointFactory::NewPolar(float r, float theta)
    {
        return Point(r * std::cos(theta), r * sin(theta));
    }
}
