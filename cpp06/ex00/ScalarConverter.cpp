#include "ScalarConverter.hpp"
#include <cstdlib>


ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& copy){
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& copy){
   if (this != &copy)
		*this = copy;//??
   return *this;
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(const std::string& arg){
	if(checkPseudoLiteralsDouble(arg) || checkPseudoLiteralsFloat(arg))
		return ;
	if(!findType(arg)){
		printLiterals("impossible", "impossible", "impossible", "impossible");
	}
}

void ScalarConverter::printLiterals(const std::string &_char,
					const std::string &_int,
					const std::string _float,
					const std::string _double)
{
	std::cout << "char: " << _char << std::endl;
	std::cout << "int: " << _int << std::endl;
	std::cout << "float: " << _float << std::endl;
	std::cout << "double: " << _double << std::endl;
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
	for (size_t i = 0; i < arg.size(); ++i) {
        if (isdigit(arg[i]) || ((arg[i] == '+' || arg[i] == '-') && i == 0))
        {
            if (i != 0)
                continue;
        }
        else
            return 0;
    }
	if(IS_IN_INT_RANGE(atoll(arg.c_str()))){
		int inumber = atoi(arg.c_str());
		if(isascii(inumber)){
			if(isprint(inumber))
				std::cout << "char: '" << static_cast<char>(inumber) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << inumber << std::endl;
		std::cout << "float: " << static_cast<float>(inumber)<< ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(inumber) << ".0" << std::endl;
		return 1;
	}
	return 0;	
}

int ScalarConverter::isFloat(const std::string &arg){
	if(arg[arg.size() - 1] == 'f')
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
		return 1;

	}
	return 0;

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
	return 1;

}

int ScalarConverter::findType(const std::string& arg)
{
	if (isChar(arg))
		return 1;

	// arg.find('.') eger true is yani icinde varsa bana oranin indexini vericek. yoksan npos dondurecek.
	if (arg.find('.') != std::string::npos || arg.find('e') != std::string::npos || arg.find('E') != std::string::npos)
	{
		if (arg.find('.') == std::string::npos)//nokta yoksa
		{
			for (size_t i = 0; i < arg.size() ; ++i) {
				if ((i == 0 && (arg[0] == '+' && arg[0] == '-')) || (i == arg.size() - 1 && arg[i] == 'f'))
					continue;
				if ((isdigit(arg[i]))
				|| (((arg[i] == 'E' || arg[i] == 'e') && (arg[i + 1] == '-' || arg[i + 1] == '+')) && (isdigit(arg[i + 2]))))
				{
					if ((arg[i] == 'E' || arg[i] == 'e'))
						i += 2;
					else
						continue;
				}
				else
					return 0;
			}
		}
		else // noktadan sonrasi
		{
			for (size_t i = 0; i < arg.find('.'); ++i) {
				if ((i == 0 && (arg[0] == '+' || arg[0] == '-')) || isdigit(arg[i]))
					continue;
				else
					return 0;
			}
			for (size_t i = arg.find('.') + 1; i < arg.size() ; ++i) {
				if ((i == 0 && (arg[0] == '+' && arg[0] == '-')) || (i == arg.size() - 1 && arg[i] == 'f'))
					continue;
				if ((isdigit(arg[i]))
				|| (((arg[i] == 'E' || arg[i] == 'e') && (arg[i + 1] == '-' || arg[i + 1] == '+')) && (isdigit(arg[i + 2]))))
				{
					if ((arg[i] == 'E' || arg[i] == 'e'))
						i += 2;
					else
						continue;
				}
				else
					return 0;
			}
		}
		if ((isFloat(arg) || isDouble(arg)))
			return 1;
	}
	else if (isInt(arg))
		return 1;
	return 0;
}

