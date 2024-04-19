#include "ScalarConverter.hpp"
#include <cstdlib>

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
		char c = arg[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return 1;
	return 0;
}

int ScalarConverter::isInt(const std::string &arg){

	// for(size_t i = 0;i < arg.size();++i){
	// 	if(isdigit(arg[i]) || arg[i] == '+' || arg[i] == '-'){
	// 		if(arg.size() == 1)
	// 			return 0;
	// 		continue;
	// 	}
	// }

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
/*
dizenin içinde sadece bir nokta olduğunu ve
 bu noktanın öncesinde ve sonrasında geçerli sayısal karakterlerin olduğunu kontrol eder.
*/
int ScalarConverter::findType(const std::string& arg)
{
	if(arg.size() == 1 && isascii(arg[0]) && !isdigit(arg[0]))
		isChar(arg);
	else if(ft_isdigit(arg))
		isInt(arg);
	else if(ft_float(arg))
		isFloat(arg);
	else if(ft_double(arg))
		isDouble(arg);
	return 1;
}

int ft_isdigit(const std::string &tmp){

	for(int i = 0;tmp[i];i++){
		if(!isdigit(tmp[i]) && !(tmp[i] == '+' || tmp[i] == '-'))
			return 0;
	}
	return 1;
}

int ft_float(const std::string &tmp){
	if (tmp.size() != 1)
    {
        if ((!(tmp[tmp.find('f') + 1]) && isdigit(tmp[tmp.find('f') - 1])) &&  ((tmp.find('.') == std::string::npos) || (tmp.find('.') != std::string::npos && tmp.find('e') == std::string::npos)))
        {
            for (int i = 0; tmp[i];i++)
            {
                if (tmp[i] != 'f' && tmp[i] != '-' && tmp[i] != '+' && tmp[i] != '.' && tmp[i] != 'e' && tmp[i] != 'E'  && !isdigit(tmp[i]))
                    return (0);
            }
            return (1);
        }
    }
    return (0);
}

int ft_double(const std::string &tmp){
	if (tmp.size() != 1)
    {
        if (tmp[tmp.find('.') + 1] && tmp[tmp.find('.') - 1] && tmp.find('f') == std::string::npos)
        {
            for (int i = 0; tmp[i];i++)
            {
                if (tmp[i] != '.' && tmp[i] && tmp[i] != '-' && tmp[i] != '+' && tmp[i] != 'e' && tmp[i] != 'E'  && !isdigit(tmp[i]))
                    return (0);
            }
            return (1);
        }
    }
    return (0);
}
