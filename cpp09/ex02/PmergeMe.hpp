#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>


class PmergeMe{

    private:
        std::vector<int> vector;
        std::list<int> list;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe operator=(const PmergeMe& copy);
        ~PmergeMe();

        void errorHandle(std::string error);
};

#endif