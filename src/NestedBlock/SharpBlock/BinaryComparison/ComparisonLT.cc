#include <string>
#include <stdexcept>
#include <algorithm>
#include "NestedBlock/SharpBlock/BinaryComparison/ComparisonLT.h"

bool ComparisonLT::getBool() const
{
    try {
        return std::stod(left->getValue()) < std::stod(right->getValue());
    } catch (std::invalid_argument& e) {
        return left->getValue() < right->getValue();
    }
}
