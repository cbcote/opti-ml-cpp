// linear_regression.h
#pragma once
#include <vector>

namespace OptiMLCpp {

class LinearRegression {
public:
    LinearRegression();
    void train(const std::vector<double>& X, const std::vector<double>& y);
    double predict(const std::vector<double>& x) const;
    double coefficient() const;
    double intercept() const;

private:
    double coef_;
    double intercept_;
};

} // namespace OptiMLCpp
