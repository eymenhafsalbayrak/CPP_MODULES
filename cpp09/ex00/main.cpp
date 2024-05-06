#include "BitcoinExchange.hpp"

int main(int ac, char** av){

    (void)av;
    BitcoinExchange bitcoin;
    if(ac != 2){
        bitcoin.errorHandle("this program takes 2 argument");
    }

    bitcoin.readData();


    return 0;
}