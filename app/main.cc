#include <iostream>
#include <nlohmann/json.hpp>
#include "my_lib.h"
// include the generated config.hpp file
#include "config.hpp"

int main(int argc, char const *argv[])
{
    /* code */
    // print version
    std::cout << "Project Name: " << project_name << '\n';
    std::cout << "Project Version: " << project_version << '\n';

    std::cout << "JSON Lib Version "
                            << NLOHMANN_JSON_VERSION_MAJOR << "."
                            << NLOHMANN_JSON_VERSION_MINOR << "."
                            << NLOHMANN_JSON_VERSION_PATCH << '\n';
    print_hello_world();
    return 0;
}
