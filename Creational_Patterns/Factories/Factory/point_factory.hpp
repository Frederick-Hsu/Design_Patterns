/*!
 *  \file   point_factory.hpp
 *  \brief
 *
 */

#ifndef POINT_FACTORY_HPP
#define POINT_FACTORY_HPP

    namespace factory
    {
        class Point;
        class PointFactory;

        class Point
        {
            friend class PointFactory;
        private:
            Point(float x, float y);
        private:
            float m_x;
            float m_y;
        public:
            float GetX() const;
            float GetY() const;
        };

        class PointFactory
        {
        public:
            static Point NewCartesian(float x, float y);
            static Point NewPolar(float r, float theta);
        };
    }

#endif  /* POINT_FACTORY_HPP */
