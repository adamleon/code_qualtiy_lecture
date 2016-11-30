#include <iostream>
#include <sstream>
#include <assert.h>
#include <exception>
#include <limits>

class negative_number_execption: public std::exception
{
public:
    int value;

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

class argument_invalid_execption: public std::exception
{
public:
    char* argument;

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

class overflow_execption: public std::exception
{
    virtual const char* what() const throw()
    {
        return "The number is too big";
    }
};

void argumentToInteger(char* argument, int &number)
{
      std::stringstream stream(argument);

      if(!(stream >> number))
      {
          argument_invalid_execption e;
          e.argument = argument;
          throw e;
      }
}

int calculate(int a, int b)
{
    if(a < 0)
    {
        negative_number_execption e;
        e.value = a;
        throw e;
    }

    if(a > 12)
    {
        overflow_execption e;
        throw e;
    }

    int result = 1;

    while(a > 0){
        result *= a;
        a--;
    }

    if (std::numeric_limits<int>::max() - b < result) {
        overflow_execption e;
        throw e;
    }

    result += b;

    return result;
}

int main(int argc, char *argv[])
{
    if(argc < 3) {
        std::cout << "Usage: ./code_quality_correct <number a> <number b>." << std::endl;
        std::cout << "Returns a! + b." << std::endl;
        return -1;
    }

    int a = 0, b = 0;

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
