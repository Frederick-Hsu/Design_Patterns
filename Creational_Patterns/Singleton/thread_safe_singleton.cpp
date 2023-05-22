/*!
 *  \file       thread_safe_singleton.cpp
 *  \brief      Implement such a singleton to make sure it is thread-safe, even though prior to C++11
 *
 */


#include "thread_safe_singleton.hpp"

namespace thread_safe_singleton
{
    boost::mutex Database::mtx{};
    boost::atomic<Database*> Database::instance_ptr{new Database()};

    Database::Database()
    {
        /* here do what you need */
    }

    Database& Database::instance()
    {
        Database* db = instance_ptr.load(boost::memory_order_consume);
        if (!db)
        {
            boost::mutex::scoped_lock lock(mtx);
            db = instance_ptr.load(boost::memory_order_consume);
            if (!db)
            {
                db = new Database();
                instance_ptr.store(db, boost::memory_order_release);
            }
        }
        return *db;
    }
}
