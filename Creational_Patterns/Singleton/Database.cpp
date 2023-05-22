/*!
 *  \file       Database.cpp
 *  \brief      Implement the singleton class Database.
 *
 */


#include "Database.hpp"

Database::Database()
{
    /* do what you need to do */
}

Database& Database::get()
{
    // thread-safe in C++11
    static Database* database = new Database();
    /*!
     *  \remark     Using a pointer to database, rather than a reference of database, it relies \n
     *              the assumption that Database lives until the end of the program and ensures \n
     *              that a destructor, even if you make on, is never called. \n
     *              This actually does not cause the memory leak.
     */
    return *database;
}
