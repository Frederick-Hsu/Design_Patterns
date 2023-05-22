/*!
 *  \file       logger.hpp
 *  \brief      
 *  
 */


#pragma once


#include <string>

struct ILogger
{
    virtual ~ILogger();
    virtual void Log(const std::string& str) = 0;
};

struct ConsoleLogger : ILogger
{
    ConsoleLogger();

    void Log(const std::string& str) override;
};