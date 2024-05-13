#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& copy){
    *this = copy;
}
PmergeMe PmergeMe::operator=(const PmergeMe& copy){
    this->vector = copy.vector;
    this->list = copy.list;
    return(*this);
}
PmergeMe::~PmergeMe(){};

void PmergeMe::errorHandle(std::string error) {
	std::cout << "Error: " << error << std::endl;
	exit(1);
}