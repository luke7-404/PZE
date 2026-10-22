#include "test.hpp"

namespace test2 {

  double result = 0.0;

  int add(int a, int b)
  {
    return a + b;
  }

  void test_function()
  {
    result = add(2, 3);
    std::cout << "Result of addition: " << result << std::endl;
  }
}