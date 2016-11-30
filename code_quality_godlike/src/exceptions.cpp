#include "../include/exceptions.hpp"


const char* negative_number_exception::what() const throw()
{
    std::stringstream ss;

    ss << "The number is negative";
    if (this->value < 0)
    {
        ss << ": " << this->value;
    }

    return ss.str().c_str();
}

const char* argument_invalid_exception::what() const throw()
{
    std::stringstream ss;

    ss << "Argument is invalid";
    if(this->argument != NULL)
    {
        ss << ": " << this->argument;
    }

    return ss.str().c_str();
}

const char* overflow_exception::what() const throw()
{
    return "The number is too big";
}
