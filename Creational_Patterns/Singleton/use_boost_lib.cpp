/*!
 *  \file       use_boost_lib.cpp
 *  \brief
 *  
 */


#include <boost/array.hpp>
#include <iostream>
#include <boost/atomic.hpp>
#include <boost/thread/pthread/mutex.hpp>


class Database
{
private:
    Database();
public:
    static Database& instance();
private:
    static boost::atomic<Database*> instance_ptr;
    static boost::mutex mtx;
};

boost::atomic<Database*> Database::instance_ptr{new Database()};
boost::mutex Database::mtx{};

int main(int argc, char* argv[])
{
    boost::array<int, 10> arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Geek Rank is: " << arr[i] << std::endl;
    }

    return 0;
}

Database::Database()
{
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