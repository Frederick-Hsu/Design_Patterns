/*!
 *  \file       renderer.cpp
 *  \brief
 *
 */


#include "renderer.hpp"

#include <iostream>

void Renderer::render_circle(float x,  float y, float radius)
{
    std::cout << "Rasterizing circle of radius " << radius << std::endl;
}

void RasterRenderer::render_circle(float x, float y, float radius)
{
    std::cout << "Drawing a vector circle of radius " << radius << std::endl;
}
