#include "ScalarConverter.hpp"
#include <cstdlib>

void ScalarConverter::convert(const std::string& arg){
	if(checkPseudoLiteralsDouble(arg) || checkPseudoLiteralsFloat(arg))
		return ;
	// if(!findType(arg))
	// 	printLiterals("impossible", "impossible", "impossible", "impossible");
}

void ScalarConverter::printLiterals(const std::string &_char_,
					const std::string &_int_,
					const std::string _float_,
					const std::string _double_)
{
	std::cout << "char: " << _char_ << std::endl;
	std::cout << "int: " << _int_ << std::endl;
	std::cout << "float: " << _float_ << std::endl;
	std::cout << "double: " << _double_ << std::endl;
}

int ScalarConverter::checkPseudoLiteralsFloat(const std::string& arg){
	if (arg == "-inff" || arg == "+inff" || arg == "inff" || arg == "nanf")
	{
		printLiterals("impossible", "impossible", arg, arg.substr(0, arg.size() - 1));
		return 1;
	}
	return 0;
}
int ScalarConverter::checkPseudoLiteralsDouble(const std::string& arg){
	if (arg == "-inf" || arg == "+inf" || arg == "inf" || arg == "nan")
	{
		printLiterals("impossible", "impossible", arg + "f", arg);
		return 1;
	}
	return 0;
}

int ScalarConverter::isChar(const std::string &arg){
	if(arg.size() == 1 && isascii(arg[0]) && !isdigit(arg[0])){
		char c = arg[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return 1;
	}
	return 0;
}

int ScalarConverter::isInt(const std::string &arg){

	for(size_t i = 0;i < arg.size();++i){
		if(arg[i] == '+' || arg[i] == '-'){
			if(arg.size() == 1)
				return 0;
			continue;
		}
	}

	if(IS_IN_INT_RANGE(atoll(arg.c_str()))){
		int inumber = atoi(arg.c_str());
		if(isascii(inumber)){
			if(isprint(inumber))
				std::cout << "char: '" << static_cast<char>(inumber) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << inumber << std::endl;
			std::cout << "float: " << static_cast<float>(inumber)<< ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(inumber) << ".0" << std::endl;
			return 1;
		}
	}
	return 0;	
}

int ScalarConverter::isFloat(const std::string &arg){
	if(arg[arg.size() - 1] == 'f') // argumanin sonuna bakiliyor 2.0f
	{

		float fnumber = atof(arg.c_str());
		if(isascii(fnumber)){
			if(isprint(fnumber))
				std::cout << "char: '" << static_cast<char>(fnumber) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
		long long tmp = fnumber;
		if(IS_IN_INT_RANGE(tmp))
			std::cout << "int: " << static_cast<int>(fnumber)<< std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		if(tmp - fnumber != 0){
			std::cout << "float: " << fnumber << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(fnumber) << std::endl;

		}
		else{
			std::cout << "float: " << fnumber << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(fnumber) << ".0" << std::endl;
		}
		return true;

	}
	return false;

}

int ScalarConverter::isDouble(const std::string &arg){
	double dnumber = atof(arg.c_str());
	if(isascii(dnumber)){
		if(isprint(dnumber))
			std::cout << "char: '" << static_cast<char>(dnumber) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	long long tmp = dnumber;

	if(IS_IN_INT_RANGE(tmp))
		std::cout << "int: " << static_cast<int>(dnumber)<< std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if(tmp - dnumber != 0){
		std::cout << "float: " << static_cast<float>(dnumber) << "f" << std::endl;
		std::cout << "double: " << dnumber << std::endl;
	}
	else{
		std::cout << "float: " << static_cast<float>(dnumber) << ".0f" << std::endl;
		std::cout << "double: " << dnumber << ".0" << std::endl;
	}
	return true;

}
// int ScalarConverter::findType(const std::string& arg){

// }

