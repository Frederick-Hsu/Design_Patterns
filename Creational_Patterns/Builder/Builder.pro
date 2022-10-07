TEMPLATE = app
CONFIG += console c++20
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lgtest -lgmock -lpthread

SOURCES += \
    Composite_Builder/apply_composite_builder.cpp \
    Composite_Builder/person.cpp \
    Composite_Builder/person_address_builder.cpp \
    Composite_Builder/person_builder.cpp \
    Composite_Builder/person_builder_base.cpp \
    Composite_Builder/person_job_builder.cpp \
    Groovy_Style_Builder/Img.cpp \
    Groovy_Style_Builder/paragraph.cpp \
    Groovy_Style_Builder/tag.cpp \
    application.c++ \
    html_builder.cpp \
    html_element.cpp \
    main.cpp \
    utest_builder_pattern.cc


HEADERS += \
    Composite_Builder/apply_composite_builder.hpp \
    Composite_Builder/person.hpp \
    Composite_Builder/person_address_builder.hpp \
    Composite_Builder/person_builder.hpp \
    Composite_Builder/person_builder_base.hpp \
    Composite_Builder/person_job_builder.hpp \
    Groovy_Style_Builder/Img.hpp \
    Groovy_Style_Builder/paragraph.hpp \
    Groovy_Style_Builder/tag.hpp \
    application.h++ \
    html_builder.hpp \
    html_element.hpp

DISTFILES += \
    Composite_Builder/Composite_Builder.Model.Diagram.plantuml \
    Composite_Builder/Composite_Builder.Model.Diagram.png \
    Groovy_Style_Builder/Groovy_Style_Builder.Model.Diagram.plantuml \
    Groovy_Style_Builder/Groovy_Style_Builder.Model.Diagram.png
