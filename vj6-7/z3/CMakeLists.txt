cmake_minimum_required(VERSION 3.16)
project(z2)

set(CMAKE_CXX_STANDARD 14)

add_executable(z2 main.cpp Game.cpp Game.hpp Player.cpp Player.hpp ComputerPlayer.cpp ComputerPlayer.hpp HumanPlayer.cpp HumanPlayer.hpp)