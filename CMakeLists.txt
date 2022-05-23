cmake_minimum_required(VERSION 3.21)
project(C_Programming C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled Numerical_Analysis/Polysquare_Function.c Numerical_Analysis/RungeKutta_Method.c)
