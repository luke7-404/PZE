#include "test.h"
#include "test.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    test_function();
    test2::test_function();
    return 0;
}