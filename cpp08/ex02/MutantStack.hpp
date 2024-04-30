#pragma once

#include <iostream>


class MutantStack{

    public:
        MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack operator=(const MutantStack& copy);
        ~MutantStack();
};