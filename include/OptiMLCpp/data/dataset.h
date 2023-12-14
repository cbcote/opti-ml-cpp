// dataset.h
#pragma once
#include <vector>

namespace OptiMLCpp {

template <typename T>
class Dataset {
public:
    Dataset(const std::vector<T>& features, const std::vector<T>& labels);
    // Accessors and other dataset-related functionality

private:
    std::vector<T> features_;
    std::vector<T> labels_;
};

} // namespace OptiMLCpp
