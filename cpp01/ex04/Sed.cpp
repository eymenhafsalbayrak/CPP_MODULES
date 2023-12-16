#include "Sed.hpp"

Sed::~Sed() {std::cout << "Destructor is called" << std::endl;}
Sed::Sed(std::string &file_name) {
	this->file_name = file_name;
}

void Sed::string_replace(std::string& str, const std::string& s1, const std::string& s2) const{
	size_t size = str.find(s1);

	while(size != std::string::npos){
		str.erase(size, s1.length());
		str.insert(size, s2);
		size = str.find(s1);
	}
}

void Sed::file_replace(std::string s1, std::string s2) const {
	std::string line;
	std::ifstream fileStream(this->file_name);
	std::string new_file = std::string(file_name) + ".replace";

	if(s1.empty())
		std::cout << "There is no source" << std::endl;
	else if(s2.empty())
		std::cout << "There is no target" << std::endl;
	else if (fileStream.is_open()) {
		std::cout << "File name exists and openable" << std::endl;
		if(fileStream.peek() == std::ifstream::traits_type::eof()){
			std::cout << "File is empty" << std::endl;
		}
		while((std::getline(fileStream, line))){
			string_replace(line, s1, s2);
		}
		std::ofstream change_contant(new_file);
		if(!change_contant.is_open()){
			std::cout << "New file not created" << std::endl;
		}
		change_contant << line;
		std::cout << "It's done, check your replace file" << std::endl;
	}
	else {
		std::cout << "Can't open the file" << std::endl;
	}
}