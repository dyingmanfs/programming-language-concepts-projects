cmake_minimum_required(VERSION 3.25)
project(as2)

set(CMAKE_CXX_STANDARD 17)

add_executable(as2 main.cpp Classroom.cpp Classroom.h Room.cpp Room.h Building.cpp Building.h Office.cpp Office.h University.cpp University.h)
