#include <iostream>
#include <string>

int main(){


	std::string speakString = "HI THIS IS BRAIN";

	std::string* stringPTR = &speakString;

	const std::string& stringREF = speakString;

	std::cout << "Memory address of speakString: " << &speakString << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR<< std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "speakString: " << speakString << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return 0;
}