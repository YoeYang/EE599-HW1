#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AverageShould, ReturnAverage) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  auto actual = solution.FindAverage(inputs);
  auto expected = 2.50;
  EXPECT_DOUBLE_EQ(expected, actual) 
          << "Expected average to be 2.50, but it wasn't, try again~";
}

TEST(AverageShould, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  auto actual = solution.FindAverage(inputs);
  auto expected = -1;
  EXPECT_EQ(expected, actual) 
          << "Expected average to be -1, but it wasn't, try again";
}