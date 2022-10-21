cmake_minimum_required(VERSION 3.16)
project(Gmessage)

set(CMAKE_CXX_STANDARD 20)

add_executable(Gmessage main.cpp GMessage.cpp GMessage.h Console.cpp Console.h Message.cpp Message.h)