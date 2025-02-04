cmake_minimum_required(VERSION 3.29)
project(LMSprogram)

set(CMAKE_CXX_STANDARD 20)

add_executable(LMSprogram main.cpp
        Student.h
        Course.h
        LMS.h)
