/*!
 *  \file   point.hpp
 *  \brief  Define the class Point
 *
 */

#ifndef POINT_H
#define POINT_H

    namespace factory_method
    {
        class Point
        {
        protected:
            Point(const float x, const float y);
        public:
            static Point NewCartesian(float x, float y);
            static Point NewPolar(float r, float theta);

            float GetX() const;
            float GetY() const;
        private:
            float m_x;
            float m_y;
        };
    }

#endif  /* POINT_H */
