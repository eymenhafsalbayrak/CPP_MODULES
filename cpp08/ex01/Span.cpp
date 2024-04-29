#include "Span.hpp"


Span::Span() : maxN(0){}

Span::Span(unsigned int N) : maxN(N){}

Span::Span(const Span& copy){
    *this = copy;
}

Span Span::operator=(const Span& copy){
     if (this != &copy){
        this->intArray = copy.intArray;
        maxN = copy.maxN;    
    }
    return *this;
}

Span::~Span(){}


void  Span::addNumber(long long int number){
    if(this->intArray.size() + 1 > maxN)
        throw std::out_of_range("size bigger than N");
    if (INT_MIN > number  || INT_MAX < number)
        throw std::out_of_range("out of integer");
    this->intArray.push_back(number);
    std::sort(this->intArray.begin(), this->intArray.end());

}

int  Span::shortestSpan() const{
// [1,10,12,131]
    if(this->intArray.size() <= 1)
        throw std::logic_error("no enough number");
    int shortSpan = -1;
    for(unsigned int i = 0; i < this->intArray.size() - 1; ++i){
        int tmp = this->intArray[i + 1] - this->intArray[i];
        if(shortSpan == -1 || tmp < shortSpan)
            shortSpan = tmp;
    }
    return (shortSpan);
    
}

int  Span::longestSpan() const{
    if(this->intArray.size() <= 1)
        throw std::logic_error("no enough number");
    long longSpan = this->intArray[this->intArray.size() - 1] - this->intArray[0];  
    return (longSpan);
}


void Span::printNumbers() {
    if(this->intArray.size() <= 1)
        return ;
    std::cout << "Sorted numbers: ";
    for (std::vector<int>::iterator it = intArray.begin(); it != intArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
