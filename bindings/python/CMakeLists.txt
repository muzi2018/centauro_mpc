cmake_minimum_required(VERSION 3.5)
find_package(pybind11 QUIET)
add_compile_options(-std=c++14)


message(STATUS "check for pybind11")
if(${pybind11_FOUND})

    message(STATUS "compiling python bindings")

else()
    message(STATUS "pybind not found")
endif()
