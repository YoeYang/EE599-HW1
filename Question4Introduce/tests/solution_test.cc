#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyself();
  std::string expected = "**** My ID card ****\nName: Yueyi Yang\nMajor: Electronic Engineering\nExpertise: Machine Learning and Computer Vision\nConstellation: Gemini\nFavorite Vegetable: Lotus Root\nFavorite Movies: Call Me By Your Name, Atonement...\nTBA";
  EXPECT_EQ(expected, actual);
}