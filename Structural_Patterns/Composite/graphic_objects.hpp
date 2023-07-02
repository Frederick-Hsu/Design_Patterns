/*!
 *  \file       graphic_objects.hpp
 *  \brief
 *
 */


#pragma once

#include <string>
#include <vector>

#define interface struct

interface GraphicObject
{
    virtual void draw() = 0;
};

class Circle : public GraphicObject
{
public:
    void draw() override;
};

class Rectangle : public GraphicObject
{
public:
    void draw() override;
};

class Triangle : public GraphicObject
{
public:
    void draw() override;
};

class Ellipse : public GraphicObject
{
public:
    void draw() override;
};

class Group : public GraphicObject
{
private:
    std::string name;
public:
    std::vector<GraphicObject*> objects;
public:
    explicit Group(const std::string& name);

    void draw() override;
};
