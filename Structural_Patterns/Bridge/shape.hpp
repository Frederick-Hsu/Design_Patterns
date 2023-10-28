/*!
 *  \file       shape.hpp
 *  \brief
 *
 */


#pragma once

struct Renderer;

class Shape
{
protected:
    Renderer& renderer;
    Shape(Renderer& render);
public:
    virtual void draw() = 0;
    virtual void resize(float factor) = 0;
};

class Circle : public Shape
{
public:
    Circle(Renderer& renderer, float x, float y, float radius);
private:
    float x;
    float y;
    float radius;
public:
    void draw() override;
    void resize(float factor) override;
};
