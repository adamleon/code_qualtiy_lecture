/*!
 * @file code_quality_godlike.cpp
 * \author Adam Leon Kleppe
 */

/*! \mainpage Equation Calculation Project
 *
 * \section intro_sec Introduction
 *
 * This project is used to demonstrate how to do real documentation and unit testing
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Set up build folder
 * If this folder is not present, run the command
 *
 * \code{.sh}
 * mkdir build
 * \endcode
 *
 * When you have a build folder run
 *
 * \code{.sh}
 * cd build
 * \endcode
 *
 * \subsection step2 Step 2: Build
 * Run the command
 *
 * \code{.sh}
 * cmake .. && make
 * \endcode
 *
 * \subsection Run the program
 * In order to run the program run this command from the build folder
 *
 * \code{.sh}
 * ./code_quality_godlike [parameter a] [parameter b]
 * \endcode
 *
 * Where parametere a and b are numbers. a can range from 0 to 12.
 */

#include <iostream>
#include "include/calculations.hpp"


/*!
 * \brief Main function
 *
 * Takes in two arguments which are numbers a and b, and outputs the result of the equation a! + b.
 * \param argc The number of arguments
 * \param argv Array containing all the arguments.
 * \return 0 if the computation was successful, and -1 if it failed.
 */
int main(int argc, char *argv[])
{
    // Check if there are enough arguments
    if(argc < 3) {
        std::cout << "Usage: ./code_quality_correct [number a] [number b]" << std::endl;
        std::cout << "Returns a! + b." << std::endl;
        return -1;
    }

    int a = 0, b = 0;

    // Convert the arguments to integers
    try
    {
        argumentToInteger(argv[1], a);
        argumentToInteger(argv[2], b);
    }
    catch (std::exception& e)
    {
         std::cout << "Argument Exception - " << e.what() << std::endl;
         return -1;
    }

    // Calculate a! + b
    int result = 0;
    try
    {
        result = calculate(a, b);
    }
    catch(std::exception& e)
    {
         std::cout << "Calculation exception: " << e.what() << std::endl;
         return -1;
    }

    std::cout << a << "! + " << b << " = " << result << std::endl;

    return 0;
}
