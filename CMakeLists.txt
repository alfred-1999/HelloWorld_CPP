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

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
# set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY https://github.com/jarro2783/cxxopts
        GIT_TAG v3.0.0
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(cxxopts)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
        GIT_TAG v2.13.9
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(Catch2)

include(AddGitSubmodule)

add_git_submodule(external/json)

add_subdirectory(configured)
# add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(tests)

if (COMPILE_EXECUTABLE)
        add_subdirectory(app)
else()
        message(STATUS "Executable will not be compiled. Set COMPILE_EXECUTABLE to ON to compile it.")
endif()
