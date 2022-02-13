/*!
 *  \file       LSP.hpp
 *  \brief      Liskov Substitution Principle
 *  \details    Demo how the LSP works in the program, and how to apply the LSP.
 *  
 */

#pragma once

/*!
 *  \remarks What is Liskov Substitution Principle?
 *
 *  \note       LSP states: if an interface takes an object of type Parent, \n
 *                          it should equally take an object of type Child  \n 
 *                          without anything breaking.
 * 
 */

/*================================================================================================*/
/*!< Prototypes: */
class Rectangle;
class Square;

/*================================================================================================*/
/*!< Definitions: */
class Rectangle
{
protected:
    int width;
    int height;
public:
    Rectangle(const int width, const int height);
public:
    int get_width() const;
    virtual void set_width(const int width);
    int get_height() const;
    virtual void set_height(const int height);
    int area() const;
};

class Square : public Rectangle
{
public:
};