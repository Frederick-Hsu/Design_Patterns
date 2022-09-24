/*!
 *  \file   paragraph.cpp
 *  \brief  Implement the struct Paragraph.
 *
 */

#include "paragraph.hpp"

Paragraph::Paragraph(const std::string& text) : Tag("p", text)
{
}

Paragraph::Paragraph(std::initializer_list<Tag> children) : Tag("p", children)
{
}
