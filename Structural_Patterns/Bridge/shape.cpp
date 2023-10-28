/*!
 *  \file       shape.cpp
 *  \brief
 *
 */


#include "shape.hpp"
#include "renderer.hpp"

Shape::Shape(Renderer& renderer) : renderer{renderer}
{
}

Circle::Circle(Renderer& renderer, float x, float y, float radius)
    : Shape(renderer), x(x), y(y), radius(radius)
{
}

void Circle::draw()
{
    renderer.render_circle(x, y, radius);
}

void Circle::resize(float factor)
{
    radius *= factor;
}
