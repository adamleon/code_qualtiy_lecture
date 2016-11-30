/*!
 * @file code_quality_professional.cpp
 * \author Adam Leon Kleppe
 */
#include <iostream>
#include <sstream>
#include <assert.h>
#include <exception>
#include <limits>

/*!
 * \brief Exception invoked by negative numbers
 *
 * This exception can be used when a negative number is used, where it is not suited.
 */
class negative_number_execption: public std::exception
{
public:
    /*!
     * \brief Used to store the negative number which invoked the exception
     */
    int value;

    /*!
     * \brief Details the problem which invokes the exception
     * \return A string detailing the exception
     */
    virtual const char* what() const throw()
    {
        std::stringstream ss;

        ss << "The number is negative";
        if(this->value < 0)
        {
            ss << ": " << this->value;
        }

        return ss.str().c_str();
    }
};

/*!
 * \brief Exception invoked by invalid arguments
 *
 * This exception can be used when an input argument is invalid
 */
class argument_invalid_execption: public std::exception
{
public:
    /*!
     * \brief Used to store the argument which is invalid
     */
    char* argument;

    /*!
     * \brief Details the problem which invokes the exception
     * \return A string detailing the exception
     */
    virtual const char* what() const throw()
    {
        std::stringstream ss;

        ss << "Argument is invalid";
        if(this->argument != NULL)
        {
            ss << ": " << this->argument;
        }

        return ss.str().c_str();
    }
};

/*!
 * \brief Exception invoked by integer overflow
 *
 * This exception can be used when a number is too large.
 */
class overflow_execption: public std::exception
{
    /*!
     * \brief Details the problem which invokes the exception
     * \return A string detailing the exception
     */
    virtual const char* what() const throw()
    {
        return "The number is too big";
    }
};

/*!
 * \brief Function converting a string to an integer
 *
 * Converts a string opf any length to an integer if the string represents a valid integer.
 * \throws argument_invalid_execption if the argument is not a valid integer.
 * \param argument The argument which is supposed to converted.
 * \param number The output number of the conversion
 */
void argumentToInteger (const char* argument, int &number)
{
      std::stringstream stream(argument);

      if (!(stream >> number))
      {
          // Throw exception if the argument is invalid
          argument_invalid_execption e;
          e.argument = argument;
          throw e;
      }
}

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
int calculate (const int a, const int b)
{
    // Check if a is negative
    if (a < 0)
    {
        negative_number_execption e;
        e.value = a;
        throw e;
    }

    // Check if a! will be too large
    if (a > 12)
    {
        overflow_execption e;
        throw e;
    }

    int result = 1;

    // Calculate the factorial
    while (a > 0)
    {
        result *= a;
        --a;
    }

    // Check if the equation is too large
    if (std::numeric_limits<int>::max() - b < result) 
    {
        overflow_execption e;
        throw e;
    }

    result += b;

    return result;
}

/*!
 * \brief Main function
 *
 * Takes in two arguments which are numbers a and b, and outputs the result of the equation a! + b.
 * \param argc The number of arguments
 * \param argv Array containing all the arguments.
 * \return 0 if the computation was successful, and -1 if it failed.
 */
int main (int argc, char *argv[])
{
    // Check if there are enough arguments
    if (argc < 3)
    {
        std::cout << "Usage: ./code_quality_correct <number a> <number b>." << std::endl;
        std::cout << "Returns a! + b." << std::endl;
        return -1;
    }

    int a = 0;
    int b = 0;

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
    catch (std::exception& e)
    {
         std::cout << "Calculation exception: " << e.what() << std::endl;
         return -1;
    }

    std::cout << a << "! + " << b << " = " << result << std::endl;

    return 0;
}
