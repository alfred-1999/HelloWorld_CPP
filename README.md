# HelloWorld_CPP
First project for C/C++ where a I compile main.cc to print hello world

# Basic Projects
 - : Create Source and CMakeLists.txt
 - : mkdir build
 - : cd build
 - : cmake ..     (Generating the build Files/ Configure the projects)
 - : cmake --build .

# Linux Software Installation
- pre-commands
    - sudo apt-get update
    - sudo apt-get upgrade
 
- Mandatory
    - sudo apt-get install gcc g++ gdb
    - sudo apt-get install make cmake
    - sudo apt-get install git
    - sudo apt-get install doxygen
    - sudo apt-get install python3 python3-pip
 
- Optional
    - sudo apt-get install lcov gcovr
    - sudo apt-get install ccache
    - sudo apt-get install cppcheck
    - sudo apt-get install llvm clang-format clang-tidy
    - sudo apt-get install curl zip unzip tar
    - sudo apt-get install graphviz


# Configure TOPIC (/build):
- cmake .. -D COMPILE_EXECUTABLE=ON
- cd app/ && ./Executable
    ```sh
         Project Name: CppProject
         Project Version: 1.0.0
         Hello World 
         This is a C++20 project
