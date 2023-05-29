# File name		: Makefile
# Description	: This script tells how to build current project.
#
#


PROJECT = verify_gtest

CXX = g++
CXXFLAGS = -g -Wall -std=c++2a
INCLUDES = 
LIBS = -lgtest -lpthread

SRC_EXTENSIONS = .c .cpp .c++ .cxx .cc
HDR_EXTENSIONS = .h .hpp .h++ .hxx .hh

CUR_DIR = .
DIRS = $(shell find $(CUR_DIR) -maxdepth 5 -type d)
SOURCES = $(foreach dir, $(DIRS), $(wildcard $(addprefix $(dir)/*, $(SRC_EXTENSIONS))))
HEADERS = $(foreach dir, $(DIRS), $(wildcard $(addprefix $(dir)/*, $(HDR_EXTENSIONS))))
OBJECTS = $(addsuffix .o, $(basename $(SOURCES)))

.PHONY : all clean rebuild show

all : $(PROJECT)

$(PROJECT) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LIBS)


%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean :
	-rm -frv $(OBJECTS)
	-rm -frv $(PROJECT)
	-rm -frv *.out

rebuild : clean all

show :
	@echo "Project = " $(PROJECT)
	@echo "SOURCES = " $(SOURCES)
	@echo "HEADERS = " $(HEADERS)
	@echo "OBJECTS = " $(OBJECTS)