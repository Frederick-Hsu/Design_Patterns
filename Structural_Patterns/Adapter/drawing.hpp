/*!
 *  \file       drawing.hpp
 *  \brief      
 *  
 */


#pragma once

#include "geometry.hpp"

class CPaintDC
{
public:
    CPaintDC();
public:
    void SetPixel(int, int, int);
};

void DrawPoints(CPaintDC& dc, std::vector<Point>::iterator start, std::vector<Point>::iterator end);