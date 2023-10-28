TEMPLATE = app
CONFIG += -std=c+=11
LIBS += -lgtest -lpthread

HEADERS += \
    person.hpp \
    renderer.hpp \
    shape.hpp

SOURCES += \
    bridge_main.cpp \
    person.cpp \
    renderer.cpp \
    shape.cpp \
    test_bridge_pattern.c++

