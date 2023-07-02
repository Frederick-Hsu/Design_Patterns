/*!
 *  \file       test_composite_pattern.c++
 *  \brief
 *
 */


#include <gtest/gtest.h>

#include "graphic_objects.hpp"

TEST(UTester4GraphicObjects, CheckHowToCompositeObjects)
{
    Group root("root");

    Circle circle1, circle2;
    root.objects.push_back(&circle1);

    Group subgroup("sub");
    subgroup.objects.push_back(&circle2);

    Ellipse ellipse;
    Rectangle rectangle;
    Triangle triangle;

    root.objects.push_back(&rectangle);
    subgroup.objects.push_back(&ellipse);
    subgroup.objects.push_back(&triangle);

    root.objects.push_back(&subgroup);

    root.draw();
}
