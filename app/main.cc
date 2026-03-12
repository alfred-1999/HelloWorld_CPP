#include <iostream>
#include "my_lib.h"
// include the generated config.hpp file
#include "config.hpp"

int main(int argc, char const *argv[])
{
    /* code */
    // print version
    std::cout << "Project Name: " << project_name << '\n' std::endl;
    std::cout << "\nProject Version: " << project_version << '\n' std::endl;
    print_hello_world();
    return 0;
}
