/*!
 *  \file   hot_drink.hpp
 *  \brief
 *
 */


#pragma once


#define interface   struct

/*!
 *  \details    Here is a simple scenario.
 *              Suppose you are working at a cafe that serves tea and coffee.
 *              These two hot beverages are made through entirely different
 *              apparatus that we can both model as factories, of some certain sorts.
 *              Tea and coffee can actually be served both hot or cold.
 *              But let us focus on the hot variety.
 *
 *              We define firstly what a \a HotDrink is.
 */

/*!
 *  \interface  HotDrink
 */
interface HotDrink
{
    /*!
     *  \brief  The function \fn prepare is what we would call to prepare a \n
     *          hot drink with a specific volume.
     */
    virtual void prepare(int volume) = 0;
    virtual void drink() = 0;
};
