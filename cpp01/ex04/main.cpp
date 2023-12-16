#include "Sed.hpp"

int main(int ac, char **av){
	if(ac != 4) {
		std::cout << "use as the following: ./executable <filename> <string1> <string2>" << std::endl;
		return(0);
	}
	else
	{
		std::string filename = av[1];
		std::string string1 = av[2];
		std::string string2 = av[3];
		Sed exercise(filename);
		exercise.file_replace(string1, string2);
	}
}