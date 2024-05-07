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
		
		std::string data_year, data_month, data_day;


		std::string date, value;
	
		if(std::getline(ss, date, ',')){
			
			std::stringstream iss(date);
			std::getline(iss, data_year, '-');
			std::getline(iss, data_month, '-');
			std::getline(iss, data_day, '-');

			int d_year = atoi(data_year.c_str());
			int d_month = atoi(data_month.c_str());
			int d_day = atoi(data_day.c_str());

			// std::cout << d_year << std::endl;
			int data_combined = d_year * 10000 + d_month * 100 + d_day;
				// std::cout << data_combined << std::endl;
			if(std::getline(ss, value)){

				data[data_combined] = atof(value.c_str());
			}
		}

	}
	// printMap(data);
	dataFile.close();
}
bool BitcoinExchange::checkInput(std::string firstPart, double secondPart){
	
	std::istringstream iss(firstPart);
	std::string year_str, month_str, day_str;
	std::getline(iss, year_str, '-');
	std::getline(iss, month_str, '-');
	std::getline(iss, day_str, '-');

	int year = atoi(year_str.c_str());
	int month = atoi(month_str.c_str());
	int day = atoi(day_str.c_str());

	if(year < 2009 || year > 2023){
		std::cout << "Error: bad input => " << firstPart << std::endl;
		return 0;
	}
	if(month < 1 || month > 12){
		std::cout << "Error: bad input => " << firstPart << std::endl;
		return 0;
	}
	if((day < 1 || day > 31) || (year == 2009 && month == 1 && day < 2)){
		std::cout << "Error: bad input => " << firstPart << std::endl;
		return 0;
	}

	// if(!is(secondPart))
	// 	std::cout << "Error: value is not a digit" << std::endl;
	else if(secondPart > 1000){
		std::cout << "Error: too large a number" << std::endl;
		return 0;
	}
	else if(secondPart < 0) {
		std::cout << "Error: not a positive number" << std::endl;
		return 0;
	}


	// std::cout << "Year: " << year << "  ";
    // std::cout << "Month: " << month << "  ";
    // std::cout << "Day: " << day << std::endl;
	// std::cout << std::endl;

	this->combined_date = year * 10000 + month * 100 + day;
	return 1;
	// std::cout << combined_date << std::endl;
}

void BitcoinExchange::readInput(const char* inputFile){
	std::ifstream inputfile(inputFile);
    if(!inputfile.is_open()){
        this->errorHandle("could not open this file");
    }
	std::string input;
	std::getline(inputfile, input);
	if(!(input == "date | value"))
		errorHandle("invalid file format");

	// std::getline(inputfile, input);
	while(std::getline(inputfile, input)){

		std::istringstream iss(input);
		std::string firstPart;
		double secondPart;
		// char separator;

		std::getline(iss, firstPart, '|');
		iss >> secondPart;

		// std::cout << "first part: " << firstPart << "  ";
		// std::cout << "second part: " << secondPart << std::endl;
		bool res = checkInput(firstPart, secondPart);
		if (res)
			compareAndProcess(firstPart,secondPart);
	}

}

void BitcoinExchange::compareAndProcess(std::string firstPart, double secondPart){

	for(dataIterator it = this->data.begin(); it != this->data.end(); ++it){
		if(it->first >= combined_date){
			if(it->first != combined_date){
				double res = (--it)->second * secondPart;
				if(!(res < 0 || res > 1000))
					std::cout << firstPart << " => " << secondPart << " = " << res << std::endl;
			}
			else
				std::cout << firstPart << " => " << secondPart << " = " << it->second * secondPart << std::endl;

			break;

		}
	}
}

void BitcoinExchange::printMap(std::map<int, double> &data){
	dataIterator it;
	for(it = data.begin(); it != data.end(); ++it){
		std::cout << it->first << " = " << it->second << std::endl; 

	}
}

void BitcoinExchange::startBtc(const char* inputFile){
	// (void)inputFile;
	readData();
	readInput(inputFile);
}