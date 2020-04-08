cmake_minimum_required(VERSION 3.15)
project(zad1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zad1
        Card.cpp
        Card.hpp
        Deck.cpp
        Deck.hpp
        Headers.cpp
        Headers.hpp
        main.cpp
        Player.cpp
        Player.hpp)
