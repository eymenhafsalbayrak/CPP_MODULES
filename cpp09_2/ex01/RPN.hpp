#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>



class RPN{

	private:
		std::stack<int> myStack;
	public:
		RPN();
		RPN(const RPN& copy);
		RPN operator=(const RPN& copy);
		~RPN();

		void process(char* arg);
		void showStack();
		void errorHandle(std::string error);
};

#endif