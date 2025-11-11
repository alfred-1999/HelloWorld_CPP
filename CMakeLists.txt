# ``` 1: Create Source and CMakeLists.txt
# ``` 2: mkdir build
# ``` 3: cd build
# ``` 4: cmake ..     (Generating the build Files/ Configure the projects)
# ``` 5: cmake --build .

cmake_minimum_required(VERSION 3.22)

project(CppProject
        VERSION 1.0.0
        LANGUAGES C CXX)

add_executable(Executable main.cc)
