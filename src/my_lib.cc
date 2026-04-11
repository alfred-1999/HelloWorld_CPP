#include <iostream>

void print_hello_world (){
    std::cout << "Hello World\n";
    std::cout << "This is a C++20 project\n";
}


std::uint32_t factorial(std::uint32_t n){
    // if (n <= 1)
        // return 1;
    // return n * factorial(n - 1);
    // method 2
    return n <= 1 ? 1 : n * factorial(n - 1);
}
