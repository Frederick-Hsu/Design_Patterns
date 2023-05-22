/*!
 *  \file       singleton.cpp
 *  \brief
 *
 */


#include "singleton.hpp"

namespace singleton
{
SingletonDatabase::SingletonDatabase()
{
    /* read the data from database */
}

SingletonDatabase& SingletonDatabase::get()
{
    static SingletonDatabase db;
    return db;
}

int SingletonDatabase::get_population(const std::string& city_name)
{
    return capitals[city_name];
}

int SingletonRecordFinder::total_population(std::vector<std::string> names)
{
    int result = 0;
    for (auto& name : names)
    {
        result += SingletonDatabase::get().get_population(name);
    }
    return result;
}

ConfigurableRecordFinder::ConfigurableRecordFinder(Database& db) : database{db}
{
}

int ConfigurableRecordFinder::total_population(std::vector<std::string>& names)
{
    int result = 0;
    for (auto& name : names)
    {
        result += database.get_population(name);
    }
    return result;
}

DummyDatabase::DummyDatabase()
{
    capitals["alpha"] = 1;
    capitals["beta"] = 2;
    capitals["gamma"] = 3;
}

int DummyDatabase::get_population(const std::string& city_name)
{
    return capitals[city_name];
}
}
