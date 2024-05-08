#pragma once

#include <iostream>
#include <stack>

class RPN{

    public:
        RPN();
        RPN(const RPN& copy);
        RPN operator=(const RPN& copy);
        ~RPN();
};