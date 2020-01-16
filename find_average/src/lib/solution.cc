#include "solution.h"


double Solution::FindAverage(std::vector<int> &inputs){
  if (inputs.size() == 0) {
    return -1;
  }
  double result = 0;
  for (auto n : inputs) {
    result = result + n;
  }

  return result / inputs.size();
}

