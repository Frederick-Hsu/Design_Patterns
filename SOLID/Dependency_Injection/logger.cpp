/*!
 *  \file       logger.cpp
 *  \brief      
 *  
 */


#include "logger.hpp"


#include <iostream>

ILogger::~ILogger()
{
}

ConsoleLogger::ConsoleLogger()
{
}

void ConsoleLogger::Log(const std::string& str)
{
    std::cout << "LOG: " << str << std::endl;
}
