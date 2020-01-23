#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<double> inputs = {1, 2, 3, 4};
    std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindMedium(inputs) 
                << std::endl;

    return EXIT_SUCCESS;
}