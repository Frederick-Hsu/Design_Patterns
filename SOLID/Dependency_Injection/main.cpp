/*!
 *  \file       main.cpp
 *  \brief      This file implements the main() portal function for current project.
 *  
 */


#include <boost/di.hpp>

#include "car.hpp"

int main(int argc, char* argv[])
{
    auto injector = boost::di::make_injector(boost::di::bind<ILogger>().to<ConsoleLogger>(),
                                             boost::di::bind<Engine>().to(std::make_shared<Engine>(5, 100)));
    auto car = injector.create<std::shared_ptr<Car>>();
    std::cout << car << std::endl;

    return 0;
}