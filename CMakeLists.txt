cmake_minimum_required(VERSION 3.22)
project(CppProject
        VERSION 1.0.0
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS        OFF)

set (LIBRARY_NAME Library)
set (EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Compile the executable" OFF)

add_subdirectory(src)
if (COMPILE_EXECUTABLE)
        add_subdirectory(app)
else()
        message(STATUS "Executable will not be compiled. Set COMPILE_EXECUTABLE to ON to compile it.")
endif()
