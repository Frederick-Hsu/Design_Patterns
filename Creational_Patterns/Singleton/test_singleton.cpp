/*!
 *  \file       test_singleton.cpp
 *  \brief
 *
 */


#include <gtest/gtest.h>
#include <boost/di.hpp>

#include "singleton.hpp"
#include "test_singleton.hpp"

TEST(UTester4SingletonRecordFinder, CheckDummyTotalPopulation)
{
    using namespace singleton;
    using namespace std;

    DummyDatabase db{};
    ConfigurableRecordFinder rf(db);

    vector<string> dummy_names{"alpha", "gamma"};
    EXPECT_EQ(4, rf.total_population(dummy_names));
}


TEST(UTester4IoCSingleton, CheckHowToUseDependencyInjectionToInstantiateSingletonObject)
{
    GTEST_SKIP();
    using namespace boost;
#if 0
    auto injector = di::make_injector(di::bind<IFoo>.to<Foo>().in(di::singleton),
                                      std::string("dummy"));
#endif
}
