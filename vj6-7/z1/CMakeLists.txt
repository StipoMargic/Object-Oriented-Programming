cmake_minimum_required(VERSION 3.16)
project(z1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(z1
        Book.hpp
        EBook.hpp
        HardCopyBook.hpp
        Library.cpp
        Library.hpp
        main.cpp)
