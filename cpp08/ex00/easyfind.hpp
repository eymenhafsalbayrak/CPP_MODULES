#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class NumberNotFound: public std::exception{
    const char *what() const throw(){
        return "Number not found in the contanier.";
    }
};

template<typename T>
int easyfind(T container, int number)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw NumberNotFound();
    int j = 0;
    for (std::vector<int>::iterator i = container.begin(); i != container.end(); ++i, j++) {
        if (*i == number) {
            return j;
        }
    }
    return true;
}