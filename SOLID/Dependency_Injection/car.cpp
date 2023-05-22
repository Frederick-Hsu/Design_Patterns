/*!
 *  \file       car.cpp
 *  \brief      
 *  
 */



#include "car.hpp"


Engine::Engine(float volume_, int horse_power_) : volume{volume_}, horse_power{horse_power_}
{
}

std::ostream& operator<<(std::ostream& os, const Engine& engine)
{
    os << "volume: " << engine.volume
       << ", horse_power: " << engine.horse_power
       << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Engine>& engine)
{
    os << "volume: " << engine->volume
       << ", horse_power: " << engine->horse_power
       << std::endl;
    return os;
}

Car::Car(std::shared_ptr<Engine> engine_, const std::shared_ptr<ILogger>& logger_) 
    : engine{std::move(engine_)}, logger{logger_}
{
    logger->Log("making a car");
}

std::ostream& operator<<(std::ostream& os, const Car& car)
{
    return os << "Car with engine: " << car.engine;
}

std::ostream& operator<<(std::ostream& os, const std::shared_ptr<Car>& car)
{
    return os << "Car with engine: " << car->engine;
}
