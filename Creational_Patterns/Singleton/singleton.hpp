/*!
 *  \file       singleton.hpp
 *  \brief
 *
 */


#pragma once

#include <string>
#include <map>
#include <vector>

namespace singleton
{
class Database
{
public:
    virtual int get_population(const std::string& city_name) = 0;
};

class SingletonDatabase : public Database
{
private:
    SingletonDatabase();
    std::map<std::string, int> capitals;
public:
    SingletonDatabase(const SingletonDatabase&) = delete;
    SingletonDatabase& operator=(SingletonDatabase const&) = delete;

    static SingletonDatabase& get();
    int get_population(const std::string& city_name) override;
};

class SingletonRecordFinder
{
public:
    int total_population(std::vector<std::string> names);
};

class ConfigurableRecordFinder
{
public:
    explicit ConfigurableRecordFinder(Database& db);

    int total_population(std::vector<std::string>& names);
private:
    Database& database;
};

class DummyDatabase : public Database
{
private:
    std::map<std::string, int> capitals;
public:
    DummyDatabase();

    int get_population(const std::string& city_name) override;
};
}
