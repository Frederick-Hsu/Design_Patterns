TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
LIBS = -lgtest

SOURCES += \
        Database.cpp \
        main.cpp \
        monostate.cpp \
        singleton.cpp \
        test_monostate.c++ \
        test_singleton.cpp \
        thread_safe_singleton.cpp

HEADERS += \
    Database.hpp \
    monostate.hpp \
    singleton.hpp \
    test_singleton.hpp \
    thread_safe_singleton.hpp
