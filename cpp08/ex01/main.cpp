#include "Span.hpp"

int main(){

	std::vector<int> numbers;
	std::vector<int> copySortedNumbers;

	try
	{
	   
		Span a(5);
		a.addNumber(4);
		a.addNumber(20);
		a.addNumber(11);
		a.addNumber(9);
		a.addNumber(7);

		a.printNumbers();

		std::cout << "Shortest span : "<<  a.shortestSpan() << std::endl;

		std::cout << "Longest span : " <<  a.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "-"<< std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}