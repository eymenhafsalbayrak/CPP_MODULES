/*
printliterals ++
float and double literals++
isint ++
ischar ++
isfloat ++
isdouble ++
find type
convert++
*/

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2)
		std::cout << "you have to enter an input" << std::endl;
	ScalarConverter::convert(av[1]);

	return 0;

}