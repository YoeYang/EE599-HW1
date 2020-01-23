#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialValue, HandlesFactorial) {
  Solution solution;
  int n = 5;
  int expected = 120;
  EXPECT_EQ(expected, solution.Factorial(n));
  EXPECT_EQ(expected, solution.FactorialRecursive(n));
}

TEST(FactorialValue, NegFactorial) {
  Solution solution;
  int n = -100;
  int expected = -1;
  EXPECT_EQ(expected, solution.Factorial(n));
  EXPECT_EQ(expected, solution.FactorialRecursive(n));
}

TEST(FactorialValue, ZeroFactorial) {
  Solution solution;
  int n = 0;
  int expected = 1;
  EXPECT_EQ(expected, solution.Factorial(n));
  EXPECT_EQ(expected, solution.FactorialRecursive(n));
}

