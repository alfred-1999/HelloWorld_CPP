# CMakeLists.txt for the main project
add_executable(Executable main.cc)
# link the library
target_link_libraries(Executable PUBLIC Library)
