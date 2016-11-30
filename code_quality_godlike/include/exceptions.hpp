/*!
 * @file exceptions.hpp
 * \brief This file contains the exception classes for the Calculation library
 * \author Adam Leon Kleppe
 */
#include <sstream>
#include <exception>

/*!
 * \brief Exception invoked by negative numbers
 *
 * This exception can be used when a negative number is used, where it is not suited.
 */
class negative_number_exception: public std::exception
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
    virtual const char* what() const throw();
};



/*!
 * \brief Exception invoked by invalid arguments
 *
 * This exception can be used when an input argument is invalid
 */
class argument_invalid_exception: public std::exception
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
    virtual const char* what() const throw();
};



/*!
 * \brief Exception invoked by integer overflow
 *
 * This exception can be used when a number is too large.
 */
class overflow_exception: public std::exception
{
    /*!
     * \brief Details the problem which invokes the exception
     * \return A string detailing the exception
     */
    virtual const char* what() const throw();
};
