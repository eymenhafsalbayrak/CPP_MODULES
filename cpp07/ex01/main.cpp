#include "iter.hpp"

int main() {

	{
		//int
		int intArr[] = {11, 2, 5, 23, 24};
		size_t array_length = sizeof(intArr) / sizeof(intArr[0]);

		std::cout << "print integer array : ";
		iter(intArr, array_length, printToScreen<int>);
		std::cout << std::endl;
	}

	{
		//double
		double doubleArr[] = {5.3, 6.0, 3.1, 44.2, 1.5};
		size_t array_length = sizeof(doubleArr) / sizeof(doubleArr[0]);

		std::cout << "print double array : ";
		iter(doubleArr, array_length, printToScreen<double>);
		std::cout << std::endl;
	}

	{
		//string
		std::string stringArr[] = {"eymen", "hafsa", "alp", "arda", "yalman"};
		size_t array_length = sizeof(stringArr) / sizeof(stringArr[0]);

		std::cout << "print string array : ";
		iter(stringArr, array_length, printToScreen<std::string>);
		std::cout << std::endl;
	}
	
	return 0;
}