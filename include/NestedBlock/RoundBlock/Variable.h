#pragma once

#include <string>
#include "NestedBlock/RoundBlock/RoundBlock.h"

class Variable : public RoundBlock
{
public:
    std::string getValue() const override;
    void setValue(std::string v);
    Variable(std::string v);
    Variable();
private:
    std::string val;
};
