#include "solution.h"


double Solution::FindMedium(std::vector<double> &inputs){
  int s = inputs.size();
  if (s == 0){
    return -1;
  }
  if (s % 2 != 0) {
    return inputs[s/2];
  }
  else{
    return (inputs[s/2] + inputs[s/2 - 1])/2;
  }
}

