/*!
 *  \file   tag.cpp
 *  \brief  Implement the struct Tag
 *
 */

#include <sstream>

#include "tag.hpp"

Tag::Tag(const std::string& name, const std::string& text)
    : name(name), text(text)
{
}

Tag::Tag(const std::string& name, const std::vector<Tag>& children)
    : name(name), children(children)
{
}

std::ostream& operator<<(std::ostream& os, const Tag& tag)
{
    os << tag;
    return os;
}

std::string Tag::stringify()
{
    std::ostringstream oss;
    oss << "<" << name;
    for (const auto& attribute : attributes)
    {
        oss << " " << attribute.first << "=\"";
        oss << attribute.second << "\"";
    }
    oss << ">\n";

    oss << "\t" << text << "\n";
    for (const auto& child : children)
    {
        oss << "\t<" << child.name << ">\n";
        oss << "\t\t" << child.text << "\n";
        oss << "\t</" << child.name << ">\n";
    }
    oss << "</" << name << ">" << std::endl;
    return oss.str();
}
