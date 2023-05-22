/*!
 *  \file       car.hpp
 *  \brief      
 *  
 */


#pragma once


#include "logger.hpp"

#include <iostream>
#include <memory>

struct Engine
{
    float volume = 5;
    int horse_power = 400;

    Engine(float volume_, int horse_power_);

    friend std::ostream& operator<<(std::ostream& os, const Engine& engine);
    friend std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Engine>& engine);
};

struct Car
{
    std::shared_ptr<Engine> engine;
    std::shared_ptr<ILogger> logger;

    Car(std::shared_ptr<Engine> engine, const std::shared_ptr<ILogger>& logger);

    friend std::ostream& operator<<(std::ostream& os, const Car& car);
    friend std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Car>& car);
};