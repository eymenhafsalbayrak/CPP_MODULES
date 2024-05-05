#pragma once

#include <iostream>
#include <stdlib.h>

class BitcoinExchange{

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange operator=(const BitcoinExchange& copy);
        ~BitcoinExchange();

        void errorHandle(std::string error);

        void printZimbirti(std::string zimbirti);
};