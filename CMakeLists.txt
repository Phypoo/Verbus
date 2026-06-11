cmake_minimum_required(VERSION 3.16)

project(customapp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(customapp
        src/verbus.cpp
        src/MainWindow.cpp
        src/MainWindow.h
)

target_link_libraries(customapp Qt6::Widgets)