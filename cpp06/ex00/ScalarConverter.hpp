#pragma once

#include <iostream>
#include <string>

#define IS_IN_INT_RANGE(value) ((value >= -2147483647 - 1) && (value <= 2147483647))

class ScalarConverter{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter &operator=(const ScalarConverter& copy);
	public:

		static void convert(const std::string& arg);

		static int findType(const std::string& arg);
		static int isChar(const std::string& arg);
		static int isInt(const std::string& arg);
		static int isFloat(const std::string& arg);
		static int isDouble(const std::string& arg);

		static void printLiterals(const std::string &_char,
								  const std::string &_int,
								  const std::string _float,
								  const std::string _double);
		
		static int checkPseudoLiteralsFloat(const std::string& arg);
		static int checkPseudoLiteralsDouble(const std::string& arg);
		

};