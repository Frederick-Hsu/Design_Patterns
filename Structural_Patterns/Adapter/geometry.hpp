/*!
 *  \file       geometry.hpp
 *  \brief      
 *  
 */


#pragma once

#include <vector>

struct Point
{
    int x;
    int y;
};

struct Line
{
    Point start;
    Point end;
};

class VectorObject
{
public:
    virtual std::vector<Line>::iterator begin() = 0;
    virtual std::vector<Line>::iterator end() = 0;
};

class VectorRectangle : public VectorObject
{
public:
    VectorRectangle(int x, int y, int width, int height);
private:
    std::vector<Line> lines;
public:
    std::vector<Line>::iterator begin() override;
    std::vector<Line>::iterator end() override;
};