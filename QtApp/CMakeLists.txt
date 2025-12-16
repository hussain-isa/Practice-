cmake_minimum_required(VERSION 3.5)
project(QtApp)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(QtApp main.cpp)
target_link_libraries(QtApp Qt5::Widgets)
