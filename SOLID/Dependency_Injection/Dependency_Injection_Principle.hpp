/*!
 *  \file       Dependency_Injection_Principle.hpp
 *  \brief      
 *  
 */



#pragma once

#include <memory>

class iheater
{
public:
    virtual void on() = 0;
    virtual void off() = 0;
    virtual bool is_on() const = 0;
protected:
    bool state;
};

class ipump
{
public:
    virtual void pump() = 0;
};

class electric_heater : public iheater
{
public:
    void on() override;
    void off() override;
    bool is_on() const override;
};

class heat_pump : public ipump
{
public:
    void pump() override;
};

class coffee_maker
{
public:
    coffee_maker(const std::shared_ptr<iheater>& heater,
                 std::unique_ptr<ipump> pump);
private:
    std::shared_ptr<iheater> heater;
    std::unique_ptr<ipump> pump;
public:
    void brew();
};
