TEMPLATE = app
CONFIG += console c++2a
CONFIG -= app_bundle qt

LIBS += -lgtest -lpthread

HEADERS += \
    creature.hpp \
    graphic_objects.hpp \
    neural_networks.hpp \
    test_creature.h++

SOURCES += \
    creature.cpp \
    graphic_objects.cpp \
    main.cpp \
    neural_networks.cpp \
    test_composite_pattern.c++ \
    test_creature.c++ \
    test_neural_networks.c++
