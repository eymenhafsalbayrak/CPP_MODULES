#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <list>


template<typename T>
class MutantStack : public std::stack<T>{

    public:
        MutantStack(){};
        MutantStack(const MutantStack& copy){
            *this = copy;
        };
        MutantStack operator=(const MutantStack& copy){
            *this->std::stack<T> = std::stack<T>(copy);
        };
        ~MutantStack(){};

        typedef typename std::deque<T>::iterator iterator;
        iterator begin(){
            return(this->c.begin());
        };
        iterator end(){
            return (this->c.end());
        }; 
};

//you have to make std::stack container iterable