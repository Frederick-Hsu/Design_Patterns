/*!
 *  \file   html_builder.hpp
 *  \brief  Define the class \a HtmlBuilder
 *  
 */

#pragma once

#include "html_element.hpp"

class HtmlBuilder
{
public:
    HtmlBuilder(const std::string& root_name);
private:
    HtmlElement root_;
public:
    HtmlBuilder& add_child(const std::string& child_name, const std::string& child_text);
    std::string str();

    operator HtmlElement() const;
    HtmlElement build() const;
};
