/*!
 *  \file   html_element.hpp
 *  \brief  Building a component that renders the web pages.
 *  
 */

#pragma once

#include <string>
#include <vector>
#include <memory>


class HtmlBuilder;
/*!
 *  \class  HtmlElement
 *  \brief  Define an HtmlElement class to store information about each tag.
 *  
 */
class HtmlElement
{
public:
    HtmlElement();
    HtmlElement(const std::string& name, const std::string& text);
private:
    std::string name_;
    std::string text_;
    std::vector<HtmlElement> elements_;

    const std::size_t indent_size = 2;
public:
    std::string str(int indent = 4) const;
    std::vector<HtmlElement>& elements();
    static std::unique_ptr<HtmlBuilder> build(const std::string& root_name);
};

void RenderWebPages(void);
