cmake_minimum_required(VERSION 3.10)
project(QtLoginApp)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(QtLoginApp
    src/main.cpp
    ui/login.ui
)

target_link_libraries(QtLoginApp Qt5::Widgets)
