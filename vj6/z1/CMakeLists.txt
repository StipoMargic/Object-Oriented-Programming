cmake_minimum_required(VERSION 3.16)
project(z1)

set(CMAKE_CXX_STANDARD 14)

add_executable(z1 main.cpp Book.hpp HardCopyBook.hpp EBook.hpp Library.cpp Library.hpp)