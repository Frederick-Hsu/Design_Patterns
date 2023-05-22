/*!
 *  \file       Database.hpp
 *  \brief      Define the singleton pattern for Database object.
 *
 */


#pragma once

#include <string>

class Database
{
private:
    Database();
public:
    Database(const Database&) = delete;
    Database(Database&&) = delete;
    Database& operator=(const Database&) = delete;
    Database& operator=(Database&&) = delete;
public:
    static Database& get();
};
