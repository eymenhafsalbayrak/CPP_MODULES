#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = copy;
}

BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange& copy) {
	(void)copy; 
	return *this; 
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::errorHandle(std::string error) {
	std::cout << "Error: " << error << std::endl;
	exit(1);
}

void BitcoinExchange::readData() {

	std::ifstream dataFile("data.csv");
	if (!dataFile) {
		errorHandle("the file doesn't exist");
	}

	std::string dataLine;

	std::getline(dataFile, dataLine);//date,exchange_rate
	while (std::getline(dataFile, dataLine)) {
		std::istringstream ss(dataLine);

		std::string date, value;
	
		if(std::getline(ss, date, ',')){
			if(std::getline(ss, value)){
				data[date] = atof(value.c_str());
			}
		}

	}
	printMap(data);
	dataFile.close();
}

void BitcoinExchange::printMap(std::map<std::string, double> &data){
	dataIterator it;
	for(it = data.begin(); it != data.end(); ++it){
		std::cout << it->first << " = " << it->second << std::endl; 

	}
}