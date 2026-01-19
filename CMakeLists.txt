cmake_minimum_required(VERSION 3.22)
project(CppProject
        VERSION 1.0.0
        LANGUAGES C CXX)
# add library
add_library(Library STATIC my_lib.cc)


add_executable(Executable main.cc)

# link the library
target_link_libraries(Executable PUBLIC Library)