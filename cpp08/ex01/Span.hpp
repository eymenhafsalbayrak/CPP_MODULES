#include <iostream>
#include <vector>
#include <cstdlib>

#define len 10000

typedef std::vector<int>::iterator iter;
/*

	int array'de max ve min degerleri bulup (aralarindaki span)
*/

 class Span{
	private:
		unsigned int maxN;
		std::vector<int> intArray;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span operator=(const Span& copy);
		~Span();

		void addNumber(long long int number);
		int shortestSpan() const;
		int longestSpan() const;
		void printNumbers() ;

		void fill(iter begin, iter end);
};