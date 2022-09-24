/*!
 *  \file   html_builder.cpp
 *  \brief  Implement the class \a HtmlBuilder
 *  
 */

#include "html_builder.hpp"

HtmlBuilder::HtmlBuilder(const std::string& root_name) : root_(root_name, "")
{
}

HtmlBuilder::operator HtmlElement() const
{
    return root_;
}

HtmlBuilder& HtmlBuilder::add_child(const std::string& child_name, const std::string& child_text)
{
    HtmlElement elem{child_name, child_text};
    root_.elements().emplace_back(elem);
    return *this;
}

std::string HtmlBuilder::str()
{
    return root_.str();
}

HtmlElement HtmlBuilder::build() const
{
    return root_;
}
