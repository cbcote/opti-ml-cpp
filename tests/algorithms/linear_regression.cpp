// linear_regression_test.cpp
#include "OptiMLCpp/algorithms/linear_regression.h"
#include <cassert>

int main() {
    OptiMLCpp::LinearRegression lr;
    // Test the LinearRegression methods
    assert(lr.predict({2.0, 3.0}) == 6.0); // Dummy test, replace with actual test logic

    return 0;
}
