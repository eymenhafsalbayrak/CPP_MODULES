#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy){
    *this = copy;
}
BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange& copy){
    (void)copy; 
    return *this; 
}
BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::errorHandle(std::string error){
    std::cout << "Error: " << error << std::endl;
    exit(1);
}

void BitcoinExchange::printZimbirti(std::string zimbirti){
    std::cout << "zimbirti" << zimbirti << std::endl;
}