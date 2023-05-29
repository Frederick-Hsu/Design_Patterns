/*!
 *  \file       drawing.cpp
 *  \brief      
 *  
 */


#include "drawing.hpp"

CPaintDC::CPaintDC() {}

void CPaintDC::SetPixel(int, int, int)
{
}

void DrawPoints(CPaintDC& dc, std::vector<Point>::iterator start, std::vector<Point>::iterator end)
{
    for (auto i = start; i != end; ++i)
    {
        dc.SetPixel(i->x, i->y, 0);
    }
}