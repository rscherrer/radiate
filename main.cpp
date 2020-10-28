#include "Simul.h"
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char * argv[])
{

    // Convert arguments into a vector of strings
    const std::vector<std::string> args(argv, argv + argc);

    // Run the program
    return simulate(args);

}
