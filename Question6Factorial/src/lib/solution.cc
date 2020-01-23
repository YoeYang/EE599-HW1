#include "solution.h"
#include <iostream>
int Solution::Factorial(int n) {
  if (n < 0) {
    return -1;
  }
  int result = 1;
  for (int i = n; i > 0; i--) {
    result = result*i;
  }
  return result;
}

int Solution::FactorialRecursive(int n) {
  if (n < 0) {
    return -1;
  }
  if (n == 0){
    return 1;
  }
  return n * FactorialRecursive( n - 1 );
}


