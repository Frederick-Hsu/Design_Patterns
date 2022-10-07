/*!
 *  \file   tag.hpp
 *  \brief  Define a new struct Tag
 *
 */

#pragma once

#include <string>
#include <vector>

struct Tag
{
    std::string name;
    std::string text;

    std::vector<Tag>    children;
    std::vector<std::pair<std::string, std::string>>    attributes;

    friend std::ostream& operator<<(std::ostream& os, const Tag& tag);
protected:
    Tag(const std::string& name, const std::string& text);
    Tag(const std::string& name, const std::vector<Tag>& children);
public:
    std::string stringify();
};
