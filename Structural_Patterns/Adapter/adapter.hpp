/*!
 *  \file       adapter.hpp
 *  \brief      
 *  
 */


#pragma once

#include "geometry.hpp"

class LineToPointAdapter
{
public:
    typedef std::vector<Point> Points;

    LineToPointAdapter(Line& line);
private:
    Points points;
public:
    virtual Points::iterator begin();
    virtual Points::iterator end();
};