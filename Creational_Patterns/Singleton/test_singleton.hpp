/*!
 *  \file       test_singleton.hpp
 *  \brief
 *
 */


#pragma once

class IFoo
{
public:
    virtual void do_foo() = 0;
};


class Foo : public IFoo
{
public:
    Foo() {}
    void do_foo() override
    {
    }
};
