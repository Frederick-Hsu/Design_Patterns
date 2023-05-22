/*!
 *  \file       monostate.cpp
 *  \brief
 *
 */


#include "monostate.hpp"

int Printer::id{};


int Printer::get_id() const
{
    return id;
}

void Printer::set_id(int value)
{
    id = value;
}
