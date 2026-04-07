cmake_minimum_required(VERSION 3.16)

project(text_editor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(text_editor
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(text_editor
    PRIVATE Qt6::Widgets
)