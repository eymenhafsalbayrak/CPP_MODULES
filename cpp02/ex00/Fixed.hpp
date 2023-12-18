#pragma once
#include <iostream>
#include <string>

class Fixed{
    private:
        int fixedValue;
        static const int fractionalBits = 8;
    public:
        Fixed(); //default constructor
        Fixed(const Fixed& copy); //copy constructor
        Fixed& operator=(const Fixed& fixed);
        ~Fixed(); //destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);

};