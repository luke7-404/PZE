#include "test.h"
#include <stdio.h>

double result = 0.0;

int add(int a, int b)
{
  return a + b;
}

void test_function()
{
  result = add(2, 3);
  printf("Result of addition: %f\n", result);
}