TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lgtest -lgmock -lpthread

SOURCES += \
        Builder/Composite_Builder/apply_composite_builder.cpp \
        Builder/Composite_Builder/person.cpp \
        Builder/Composite_Builder/person_address_builder.cpp \
        Builder/Composite_Builder/person_builder.cpp \
        Builder/Composite_Builder/person_builder_base.cpp \
        Builder/Composite_Builder/person_job_builder.cpp \
        Builder/Groovy_Style_Builder/Img.cpp \
        Builder/Groovy_Style_Builder/paragraph.cpp \
        Builder/Groovy_Style_Builder/tag.cpp \
        Builder/application.c++ \
        Builder/html_builder.cpp \
        Builder/html_element.cpp \
        Builder/utest_builder_pattern.cc \
        main.cpp

HEADERS += \
    Builder/Composite_Builder/apply_composite_builder.hpp \
    Builder/Composite_Builder/person.hpp \
    Builder/Composite_Builder/person_address_builder.hpp \
    Builder/Composite_Builder/person_builder.hpp \
    Builder/Composite_Builder/person_builder_base.hpp \
    Builder/Composite_Builder/person_job_builder.hpp \
    Builder/Groovy_Style_Builder/Img.hpp \
    Builder/Groovy_Style_Builder/paragraph.hpp \
    Builder/Groovy_Style_Builder/tag.hpp \
    Builder/application.h++ \
    Builder/html_builder.hpp \
    Builder/html_element.hpp

DISTFILES += \
    Makefile
