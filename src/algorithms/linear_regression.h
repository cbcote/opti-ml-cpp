// linear_regression.cpp
#include "OptiMLCpp/algorithms/linear_regression.h"
#include <numeric>

namespace OptiMLCpp {

LinearRegression::LinearRegression() : coef_(0), intercept_(0) {}

void LinearRegression::train(const std::vector<double>& X, const std::vector<double>& y) {
    // Implement your training algorithm here
}

double LinearRegression::predict(const std::vector<double>& x) const {
    // Implement your prediction logic here
    return std::inner_product(x.begin(), x.end(), coef_) + intercept_;
}

double LinearRegression::coefficient() const {
    return coef_;
}

double LinearRegression::intercept() const {
    return intercept_;
}

} // namespace OptiMLCpp
