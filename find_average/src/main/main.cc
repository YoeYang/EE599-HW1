#include <iostream>
#include "src/lib/solution.h"

int main(){
    Solution solution ;
    std::vector<int> inputs = {1, 2, 3, 4};
    std::cout << "Average of input is:" << solution.FindAverage(inputs) 
                << std::endl;

    return EXIT_SUCCESS;
}