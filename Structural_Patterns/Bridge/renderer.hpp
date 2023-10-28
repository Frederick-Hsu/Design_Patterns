/*!
 *  \file       renderer.hpp
 *  \brief
 *
 */



#pragma once


struct Renderer
{
    virtual void render_circle(float x, float y, float radius) = 0;
};


class VectorRenderer : public Renderer
{
public:
    void render_circle(float x, float y, float radius) override;
};

class RasterRenderer : public Renderer
{
public:
    void render_circle(float x, float y, float radius) override;
};
