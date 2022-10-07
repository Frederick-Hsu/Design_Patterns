/*!
 *  \file   Img.hpp
 *  \brief  Define the struct Img, inherited from Tag.
 *
 */

#pragma once

#include "tag.hpp"

struct Img : Tag
{
    explicit Img(const std::string& url);
};
