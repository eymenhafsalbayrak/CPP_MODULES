#pragma once

#include <iostream>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>
#include <exception>

typedef std::map<int, double>::iterator dataIterator;

class BitcoinExchange{

    private:
        std::map<int, double> data;
        int combined_date;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange operator=(const BitcoinExchange& copy);
        ~BitcoinExchange();

        void errorHandle(std::string error);

        void readData(); // data.csv
        void readInput(const char* inputFile);
        void printMap(std::map<int, double> &data);
        void startBtc(const char* inputFile);
        bool checkInput(std::string firstPart, double secondPart);

        void compareAndProcess(std::string firstPart, double secondPart);
};