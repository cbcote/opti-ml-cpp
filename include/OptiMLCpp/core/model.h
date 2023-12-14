// model.h
#pragma once

namespace OptiMLCpp {

class Model {
public:
    virtual ~Model() = default;
    virtual void train() = 0;
    virtual double predict() const = 0;
};

} // namespace OptiMLCpp
