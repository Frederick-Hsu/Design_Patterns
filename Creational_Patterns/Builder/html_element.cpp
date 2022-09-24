/*!
 *  \file   html_element.cpp
 *  \brief  Building a component that renders the web pages.
 *  
 */

#include "html_element.hpp"
#include "html_builder.hpp"

#include <sstream>

HtmlElement::HtmlElement() : name_(std::string()),
                             text_(std::string()),
                             elements_(0UL)
{
}

HtmlElement::HtmlElement(const std::string& name, const std::string& text)
    : name_(name), text_(text)
{
}

std::string HtmlElement::str(int indent) const
{
    std::ostringstream oss;
    oss << "<" << name_ << ">\n";
    for (const auto& html_element : elements_)
    {
        for (auto i = 0; i < indent; ++i)
        {
            oss << " ";
        }
        oss << "<"  << html_element.name_ << ">" << html_element.text_
            << "</" << html_element.name_ << ">\n";
    }
    oss << "</" << name_ << ">" << std::endl;
    return oss.str();
}

std::vector<HtmlElement>& HtmlElement::elements()
{
    return elements_;
}

std::unique_ptr<HtmlBuilder> HtmlElement::build(const std::string& root_name)
{
    return std::make_unique<HtmlBuilder>(root_name);
}
