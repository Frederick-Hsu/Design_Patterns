TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lgtest -lboost_iostreams -lboost_serialization

SOURCES += \
        Prototype_Factory/employee_factory.cpp \
        Prototype_Factory/test_employee_factory.c++ \
        main.cpp \
        prototype.cpp \
        serializable.cpp \
        test_prototype.c++ \
        test_serializable.c++

HEADERS += \
    Prototype_Factory/employee_factory.hpp \
    prototype.hpp \
    serializable.hpp
