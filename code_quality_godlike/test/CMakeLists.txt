find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories (${TEST_SOURCE_DIR}/src)

ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK)
add_library(Calculations ../include/calculations.hpp ../include/exceptions.hpp ../src/calculations.cpp ../src/exceptions.cpp)

add_executable (test_calculations test.cpp)

target_link_libraries(test_calculations
                      Calculations
                      ${Boost_FILESYSTEM_LIBRARY}
                      ${Boost_SYSTEM_LIBRARY}
                      ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                      )

enable_testing()
add_test(UnitTest test)
