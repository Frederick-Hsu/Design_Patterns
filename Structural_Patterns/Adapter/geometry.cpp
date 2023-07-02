/*!
 *  \file       geometry.cpp
 *  \brief      
 *  
 */


#include "geometry.hpp"

VectorRectangle::VectorRectangle(int x, int y, int width, int height)
{
    //                      start                   end
    lines.emplace_back(Line{Point{x, y},            Point{x + width, y}         }   );
    lines.emplace_back(Line{Point{x + width, y},    Point{x + width, y + height}}   );
    lines.emplace_back(Line{Point{x, y},            Point{x, y + height}        }   );
    lines.emplace_back(Line{Point{x, y + height},   Point{x + width, y + height}}   );
}

std::vector<Line>::iterator VectorRectangle::begin()
{
    return lines.begin();
}

std::vector<Line>::iterator VectorRectangle::end()
{
    return lines.end();
}