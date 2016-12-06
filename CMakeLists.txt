cmake_minimum_required(VERSION 3.6)
project(Aircraft_Carrier)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp F16.cpp F16.h F35.cpp F35.h Aircraft.cpp Aircraft.h tostring.cpp tostring.h Carrier.cpp Carrier.h)
add_executable(Aircraft_Carrier ${SOURCE_FILES})