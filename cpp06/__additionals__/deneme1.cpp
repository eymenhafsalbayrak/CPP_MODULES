#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class ScalarConverter {
public:
    static void convert(const std::string& literal) {
        std::istringstream iss(literal);

        char charValue;
        int intValue;
        float floatValue;
        double doubleValue;

        if (iss >> charValue && iss.eof()) {
            // Char literal
            std::cout << "Char: " << charValue << std::endl;
        } else if (iss.clear() && convertToInt(literal, intValue)) {
            // Int literal
            std::cout << "Int: " << intValue << std::endl;
        } else if (iss.clear() && convertToFloat(literal, floatValue)) {
            // Float literal
            std::cout << "Float: " << floatValue << std::endl;
        } else if (iss.clear() && convertToDouble(literal, doubleValue)) {
            // Double literal
            std::cout << "Double: " << doubleValue << std::endl;
        } else {
            std::cout << "Invalid literal!" << std::endl;
        }
    }

private:
    static bool convertToInt(const std::string& str, int& value) {
        try {
            size_t pos;
            value = std::stoi(str, &pos);
            return pos == str.size();
        } catch (const std::exception& e) {
            return false;
        }
    }

    static bool convertToFloat(const std::string& str, float& value) {
        try {
            size_t pos;
            value = std::stof(str, &pos);
            return pos == str.size();
        } catch (const std::exception& e) {
            return false;
        }
    }

    static bool convertToDouble(const std::string& str, double& value) {
        try {
            size_t pos;
            value = std::stod(str, &pos);
            return pos == str.size();
        } catch (const std::exception& e) {
            return false;
        }
    }
};

int main() {
    // Examples
    ScalarConverter::convert("'c'");
    ScalarConverter::convert("42");
    ScalarConverter::convert("4.2f");
    ScalarConverter::convert("4.2");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("nanf");

    return 0;
}
