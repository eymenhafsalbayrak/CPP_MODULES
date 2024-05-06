#pragma once

#include <iostream>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>

typedef std::map<std::string, double>::iterator dataIterator;

class BitcoinExchange{

    private:
        std::map<std::string, double> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange operator=(const BitcoinExchange& copy);
        ~BitcoinExchange();

        void errorHandle(std::string error);

        void readData(); // data.csv
        void printMap(std::map<std::string, double> &data);
};