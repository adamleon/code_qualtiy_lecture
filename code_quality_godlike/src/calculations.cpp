#include "../include/calculations.hpp"

void argumentToInteger(char* argument, int &number)
{
      std::stringstream stream(argument);

      if(!(stream >> number))
      {
          // Throw exception if the argument is invalid
          argument_invalid_exception e;
          e.argument = argument;
          throw e;
      }
}

int calculate(int a, int b)
{
    // Check if a is negative
    if(a < 0)
    {
        negative_number_exception e;
        e.value = a;
        throw e;
    }

    // Check if a! will be too large
    if(a > 12)
    {
        overflow_exception e;
        throw e;
    }

    int result = 1;

    // Calculate the factorial
    while(a > 0){
        result *= a;
        a--;
    }

    // Check if the equation is too large
    if (std::numeric_limits<int>::max() - b < result) {
        overflow_exception e;
        throw e;
    }

    result += b;

    return result;
}
