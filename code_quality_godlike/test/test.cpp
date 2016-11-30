#define BOOST_TEST_MODULE ProgramTests
#include <boost/test/unit_test.hpp>

#include "../include/calculations.hpp"

// Testing the calculate function
BOOST_AUTO_TEST_SUITE(CalculationTests)

// Testing the negative number exception
BOOST_AUTO_TEST_CASE(TestNegativeNumberException)
{
    BOOST_CHECK_THROW(
        calculate(-1,0);,
        negative_number_exception
    );
}

// Testing overflow exceptions
BOOST_AUTO_TEST_CASE(TestOverflowException1)
{
    BOOST_CHECK_THROW(
        calculate(13,0);,
        overflow_exception
    );
}

BOOST_AUTO_TEST_CASE(TestOverflowException2)
{
    BOOST_CHECK_THROW(
        calculate(12,2100000000);,
        overflow_exception
    );
}

// Passing tests
BOOST_AUTO_TEST_CASE(TestPass1)
{
    BOOST_CHECK_EQUAL(3628810, calculate(10,10));
}


BOOST_AUTO_TEST_CASE(TestPass2)
{
    BOOST_CHECK_EQUAL(1, calculate(0,0));
}

BOOST_AUTO_TEST_CASE(TestPass3)
{
    BOOST_CHECK_EQUAL(127, calculate(5,7));
}

BOOST_AUTO_TEST_SUITE_END()
// End of tests

// Testing the argumentToInteger function
BOOST_AUTO_TEST_SUITE(ArgumentTests)

// Testing invalid arguments exceptions
BOOST_AUTO_TEST_CASE(TestInvalidArgumentException1)
{
    BOOST_CHECK_THROW(
        int a = 0;
        std::string str = "Invalid";
        char *cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        argumentToInteger(cstr,a);
        delete [] cstr,
        argument_invalid_exception
    );
}

BOOST_AUTO_TEST_CASE(TestInvalidArgumentException2)
{
     BOOST_CHECK_THROW(
        int a = 0;
        std::string str = "-z100";
        char *cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        argumentToInteger(cstr,a);
        delete [] cstr,
        argument_invalid_exception
     );
}

// Passing tests
BOOST_AUTO_TEST_CASE(TestPass1)
{
    int a = 0;
    std::string str = "10";
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    argumentToInteger(cstr,a);
    delete [] cstr;

    BOOST_CHECK_EQUAL(a,10);
}

BOOST_AUTO_TEST_CASE(TestPass2)
{
    int a = 0;
    std::string str = "-14";
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    argumentToInteger(cstr,a);
    delete [] cstr;

    BOOST_CHECK_EQUAL(a,-14);
}

BOOST_AUTO_TEST_CASE(TestPass3)
{
    int a = 0;
    std::string str = "4363025";
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    argumentToInteger(cstr,a);
    delete [] cstr;

    BOOST_CHECK_EQUAL(a,4363025);
}

// Is this a wanted outcome?
BOOST_AUTO_TEST_CASE(TestPass4)
{
    int a = 0;
    std::string str = "-100sw";
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    argumentToInteger(cstr,a);
    delete [] cstr;

    BOOST_CHECK_EQUAL(a,-100);
}
BOOST_AUTO_TEST_SUITE_END()
