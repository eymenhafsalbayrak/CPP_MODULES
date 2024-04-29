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

template <typename T> 
int easyfind(T &type, int number){ // find index in container

	int find = 0;

	for(typename T::iterator i = type.begin(); i != type.end(); ++i, find++){
		
		if(*i == number)
			return (find);
	}
	throw NumberNotFound();
}