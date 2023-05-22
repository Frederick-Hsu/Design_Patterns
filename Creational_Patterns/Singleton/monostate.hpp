/*!
 *  \file       monostate.hpp
 *  \brief
 *
 */


#pragma once

/*!
 *  \note       Monostate is a variation pn the Singleton pattern.
 *              It is a class that behaves like a singleton
 *              while appearing as an ordinary class.
 *
 */


class Printer
{
    static int id;
public:
    int get_id() const;
    void set_id(int value);
};
