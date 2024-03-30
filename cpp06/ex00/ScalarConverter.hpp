#pragma once

#include <iostream>
#include <string>

class ScalarConverter{

    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter &operator=(const ScalarConverter& copy);

        static void convert(const std::string& arg);

        static int findType(const std::string& arg);
        static int isChar(const std::string& arg);
        static int isInt(const std::string& arg);
        static int isFloat(const std::string& arg);
        static int isDouble(const std::string& arg);
        

};