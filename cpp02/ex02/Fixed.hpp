#pragma once
#include <iostream>

class Fixed{
    private:
        int fixedValue;
        static const int fractionalBits = 8;
    public:
        Fixed(); //default constructor
        Fixed(const Fixed& copy); //copy constructor
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed& operator=(const Fixed& copy);
        ~Fixed(); //destructor
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const; // converts the fixed-point value to a floating-point value
        int toInt(void) const;

        bool operator>(const Fixed& fixed) const;
        bool operator<(const Fixed& fixed) const;
        bool operator>=(const Fixed& fixed) const;
        bool operator<=(const Fixed& fixed) const;
        bool operator==(const Fixed& fixed) const;
        bool operator!=(const Fixed& fixed) const;

        Fixed operator+(const Fixed& fixed) const;
        Fixed operator-(const Fixed& fixed) const;
        Fixed operator*(const Fixed& fixed) const;
        Fixed operator/(const Fixed& fixed) const;

        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed& max(Fixed &a, Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
		const static Fixed& min(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);