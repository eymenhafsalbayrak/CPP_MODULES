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

		// typedef typename std::deque<T>::iterator iterator;
		// iterator begin(){
		//     return(this->c.begin());
		// }
		// iterator end(){
		//     return (this->c.end());
		// }

		// iterator
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		//const iterator
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator cbegin() const{return this->c.cbegin();}
		const_iterator cend() const{return this->c.cend();}

		//reverse iterator
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin(){return this->c.rbegin();}
		reverse_iterator rend(){return this->c.rend();}

		//const reverse iterator
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator crbegin() const{return this->c.crbegin();}
		const_reverse_iterator crend() const{return this->c.crend();}
};

//you have to make std::stack container iterable