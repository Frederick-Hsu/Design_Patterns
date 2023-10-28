TEMPLATE = app
CONFIG += console c++2a
CONFIG -= app_bundle qt

LIBS += -lgtest -lpthread

HEADERS +=  \
    adapter.hpp \
    drawing.hpp \
    geometry.hpp


SOURCES +=  \
    adapter.cpp \
    drawing.cpp \
    geometry.cpp \
    main.cpp
