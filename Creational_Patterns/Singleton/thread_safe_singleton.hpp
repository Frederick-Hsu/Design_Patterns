/*!
 *  \file       thread_saft_singleton.hpp
 *  \brief      Make a singleton which is thread-saft, even though prior to C++11
 *
 */


#pragma once


/*!
 *  \note       How to use the C++ boost library?
 *
 *  \details    If you install the boost library on Ubuntu Linux system as below:
 *              `$ sudo apt install libboost-all-dev`
 *              then no need to link any boost shared library like:  -lboost, when you compile the code.
 *              just directly include the corresponding boost header files in your source file.
 */
#include <boost/atomic.hpp>
#include <boost/thread/pthread/mutex.hpp>

namespace thread_safe_singleton
{
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
}

/* Singletons and Inversion of Control ===========================================================*/


