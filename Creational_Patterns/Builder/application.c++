/*!
 *  \file   application.c++
 *  \brief  Apply with the Builder pattern
 *
 */

#include <iostream>

#include "application.h++"
#include "html_builder.hpp"

#include "Groovy_Style_Builder/paragraph.hpp"
#include "Groovy_Style_Builder/Img.hpp"

void apply_builder_pattern(void)
{
    auto builder = HtmlElement::build("ul");
    builder->add_child("li", "hello").add_child("li", "world");
    std::cout << builder->str() << std::endl;
}

void create_uniform_DSL(void)
{
    std::cout <<
        Paragraph {
                 Img {"http://pokemon.com/pikachu.png"}.stringify()
        }.stringify()
    << std::endl;
}
