#include <iostream>
#include <vector>
#include <algorithm> // std::sort

class Span {
private:
    unsigned int N;

public:
    Span();
    Span(unsigned int N);
    ~Span();

    void addNumber(std::vector<int>& vecOfIntArray, unsigned int number);
    void addRange(std::vector<int>& vecOfIntArray, std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int getN() const;
};

Span::Span() {}

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

void Span::addNumber(std::vector<int>& vecOfIntArray, unsigned int number) {
    vecOfIntArray.push_back(number);
    std::sort(vecOfIntArray.begin(), vecOfIntArray.end());
}

void Span::addRange(std::vector<int>& vecOfIntArray, std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    vecOfIntArray.insert(vecOfIntArray.end(), begin, end);
    std::sort(vecOfIntArray.begin(), vecOfIntArray.end());
}

unsigned int Span::getN() const {
    return (this->N);
}

int main() {
    std::vector<int> numbers;

    Span a(5);
    std::vector<int> range = {5, 3, 8, 2};
    a.addRange(numbers, range.begin(), range.end());

    std::cout << "Sorted numbers: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
