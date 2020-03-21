cmake_minimum_required(VERSION 3.7)
project(tp3)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(tp3 main.cpp affichage.cpp ex2.cpp)
target_link_libraries(tp3 Qt5::Widgets)

