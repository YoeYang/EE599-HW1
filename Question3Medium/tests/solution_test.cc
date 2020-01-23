#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(MediumShould, OddMediumFound) {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4, 5};
  auto actual = solution.FindMedium(inputs);
  auto expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(MediumShould, EvenMediumFound) {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4};
  auto actual = solution.FindMedium(inputs);
  auto expected = 2.5;
  EXPECT_EQ(expected, actual);
}

TEST(MediumShould, EmptyMediumFound) {
  Solution solution;
  std::vector<double> inputs = {};
  auto actual = solution.FindMedium(inputs);
  auto expected = -1;
  EXPECT_EQ(expected, actual);
}