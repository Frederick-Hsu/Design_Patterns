/*!
 *  \file   point.hpp
 *  \brief  Define a class Point, with a inner factory
 *
 */

#pragma once

namespace inner_factory
{

    class Point
    {
    private:
        Point(float x, float y);

        class PointFactory
        {
        private:
            PointFactory();
        public:
            static Point NewCartesian(float x, float y);
            static Point NewPolar(float r, float theta);
        };
    private:
        float m_x;
        float m_y;
    public:
        static PointFactory factory;
    public:
        float GetX() const;
        float GetY() const;
    };

}
