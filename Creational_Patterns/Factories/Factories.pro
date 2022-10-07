TEMPLATE = app
CONFIG += console c++20
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lgtest -lgmock -lpthread

SOURCES += \
    Abstract_Factory/coffee.cpp \
    Abstract_Factory/coffee_factory.cpp \
    Abstract_Factory/drink_factory.cpp \
    Abstract_Factory/tea.cpp \
    Abstract_Factory/tea_factory.cpp \
    Factory/point_factory.cpp \
    Factory_Method/point.cpp \
    Functional_Factory/drink_with_volume_factory.cpp \
    Inner_Factory/inner_factory.cpp \
    main.cpp \
    utest_factories_pattern.c++


HEADERS += \
    Abstract_Factory/coffee.hpp \
    Abstract_Factory/coffee_factory.hpp \
    Abstract_Factory/drink_factory.hpp \
    Abstract_Factory/hot_drink.hpp \
    Abstract_Factory/hot_drink_factory.hpp \
    Abstract_Factory/tea.hpp \
    Abstract_Factory/tea_factory.hpp \
    Factory/point_factory.hpp \
    Factory_Method/point.hpp \
    Functional_Factory/drink_with_volume_factory.hpp \
    Inner_Factory/inner_factory.hpp
