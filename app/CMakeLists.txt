# CMakeLists.txt for the main project
add_executable(${EXECUTABLE_NAME} main.cc)
# link the library
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})
