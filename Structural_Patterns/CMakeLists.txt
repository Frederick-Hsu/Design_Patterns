cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(Structural_Patterns)

list(APPEND COMMON_COMPILE_OPTIONS
    "-Wall"
    "-Werror")

enable_testing()

add_subdirectory(Adapter)
add_subdirectory(Bridge)
add_subdirectory(Composite)
add_subdirectory(Decorator)
add_subdirectory(Facade)
add_subdirectory(Flyweight)
add_subdirectory(Proxy)