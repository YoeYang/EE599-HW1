#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  int n = 3;
  std::cout << "inputs: 3, non-recursive output: " << solution.Factorial(n)
            << std::endl;
  std::cout << "inputs: 3, recursive output: " << solution.FactorialRecursive(n)
            << std::endl;

  return 0;
}