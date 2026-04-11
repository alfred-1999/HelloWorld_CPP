#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "my_lib.h"

TEST_CASE("Factorial of 0 is 1", "[factorial]") {
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}
