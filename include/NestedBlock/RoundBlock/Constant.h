#pragma once

#include <string>
#include "NestedBlock/RoundBlock/RoundBlock.h"

class Constant : public RoundBlock
{
public:
    std::string getValue() const override;
    Constant(std::string v);
private:
    const std::string val;
};