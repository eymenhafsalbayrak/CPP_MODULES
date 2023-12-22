#pragma once
#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixedValue;
        static const int fractionalBits = 8;
    public:
        Fixed(); //default constructor
        Fixed(const Fixed& copy); //copy constructor
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed& operator=(const Fixed& fixed);
        ~Fixed(); //destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const; // converts the fixed-point value to a floating-point value
        int toInt(void) const; // converts the fixed-point value to an integer value
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // nesneyi ekrana yazdirabilmek icin << cikis operatorunu overload eder
