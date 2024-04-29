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
    unsigned int getN() const;
};

Span::Span() {}

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

void Span::addNumber(std::vector<int>& vecOfIntArray, unsigned int number) {
    vecOfIntArray.push_back(number);
    std::sort(vecOfIntArray.begin(), vecOfIntArray.end());
}

unsigned int Span::getN() const {
    return (this->N);
}

int main() {
    std::vector<int> numbers;
    std::vector<int> sortedNumbers;

    Span a(5);
    a.addNumber(numbers, 5);
    a.addNumber(numbers, 3);
    a.addNumber(numbers, 8);
    a.addNumber(numbers, 2);

    // Copy sorted numbers to another vector
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        sortedNumbers.push_back(*it);
    }

    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    std::cout << "Original numbers: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted numbers: ";
    for (std::vector<int>::iterator it = sortedNumbers.begin(); it != sortedNumbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
