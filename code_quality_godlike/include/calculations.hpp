/*!
 * @file calculations.hpp
 * \brief This file contains global functions for the Calculation library
 * \author Adam Leon Kleppe
 */
#include <sstream>
#include <limits>
#include "../include/exceptions.hpp"

/*!
 * \brief Function converting a string to an integer
 *
 * Converts a string opf any length to an integer if the string represents a valid integer.
 * \throws argument_invalid_execption if the argument is not a valid integer.
 * \param argument The argument which is supposed to converted.
 * \param number The output number of the conversion
 */
void argumentToInteger(char* argument, int &number);

/*!
 * \brief Calculates a!+b
 *
 * Calculates the equation a! + b
 * \throws negative_number_execption if a is negative
 * \throws overflow_execption if either a or the result is larger than INT_MAX
 * \param a Integer which will be factorialized
 * \param b Integer which will be added
 * \return The result of the equation a!+b
 */
int calculate(int a, int b);
