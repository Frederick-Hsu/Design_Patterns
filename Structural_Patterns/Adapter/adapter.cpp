/*!
 *  \file       adapter.cpp
 *  \brief      
 *  
 */


#include "adapter.hpp"

#include <memory>
#include <utility>

using namespace std;

LineToPointAdapter::LineToPointAdapter(Line& line)
{
    int left = min(line.start.x, line.end.x);
    int right = max(line.start.x, line.end.x);
    int top = min(line.start.y, line.end.y);
    int bottom = max(line.start.y, line.end.y);

    int dx = right - left;
    int dy = line.end.y - line.start.y;

    if (dx == 0)    // only vertical or horizontal lines
    {
        for (int y = top; y <= bottom; ++y)     // vertical 
        {
            points.emplace_back(Point{left, y});
        }
    }
    else if (dy == 0)
    {
        for (int x = left; x <= right; ++x)
        {
            points.emplace_back(Point{x, top});
        }
    }
}

LineToPointAdapter::Points::iterator LineToPointAdapter::begin()
{
    return points.begin();
}

LineToPointAdapter::Points::iterator LineToPointAdapter::end()
{
    return points.end();
}

vector<shared_ptr<VectorObject>> vectorObjects{make_shared<VectorRectangle>(10, 10, 100, 100),
                                               make_shared<VectorRectangle>(30, 30, 60,  60)};