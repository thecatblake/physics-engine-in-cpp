cmake_minimum_required(VERSION 3.26)
project(physics_engine_in_cpp)

set(CMAKE_CXX_STANDARD 20)

add_library(physics_engine_in_cpp
        Vector3.cpp
        Vector3.h
        Math.cpp
        Math.h
        Particle.cpp
        Particle.h)
