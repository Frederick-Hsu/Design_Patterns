/*!
 *  \file       Dependency_Injection_Principle.cpp
 *  \brief      
 *  
 */


#include "Dependency_Injection_Principle.hpp"

#include <utility>
#include <iostream>

coffee_maker::coffee_maker(const std::shared_ptr<iheater>& heater_,
                           std::unique_ptr<ipump> pump_)
    : heater{heater_}, pump(std::move(pump_))
{
}

void coffee_maker::brew()
{
    heater->on();
    pump->pump();
    std::clog << "coffee!" << std::endl;
    heater->off();
}


void electric_heater::on()
{
    state = true;
}

void electric_heater::off()
{
    state = false;
}

bool electric_heater::is_on() const
{
    return state;
}

void heat_pump::pump()
{
}
