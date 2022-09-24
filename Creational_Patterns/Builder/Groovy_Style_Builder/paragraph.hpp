/*!
 *  \file   paragraph.hpp
 *  \brief  Define a struct Paragraph, inherited from Tag.
 *
 */

#pragma once

#include "tag.hpp"

struct Paragraph : Tag
{
    explicit Paragraph(const std::string& text);
    Paragraph(std::initializer_list<Tag> children);
};
