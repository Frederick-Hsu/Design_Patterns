/*!
 *  \file   Img.cpp
 *  \brief  Implement the struct Img.
 *
 */

#include "Img.hpp"

Img::Img(const std::string& url) : Tag("img", "")
{
    attributes.emplace_back(std::pair{"src", url});
}
