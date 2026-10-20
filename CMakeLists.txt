cmake_minimum_required(VERSION 3.21)
project(DynamicDemo VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

geode_mod(dynamic_demo SOURCES main.cpp)