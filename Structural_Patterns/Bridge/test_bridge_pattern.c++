/*!
 *  \file       test_bridge_pattern.c++
 *  \brief
 *
 */


#include <gtest/gtest.h>

#include "renderer.hpp"
#include "shape.hpp"

TEST(UTester4BridgePattern, CheckRendererRole)
{
    RasterRenderer rr;
    Circle raster_circle(rr, 5, 5, 5);

    raster_circle.draw();
    raster_circle.resize(2);
    raster_circle.draw();
}
