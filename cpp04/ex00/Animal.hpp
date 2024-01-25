#pragma once
#include <iostream>
#include <string>

class Animal{
    protected:
        std::string type; 
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal &operator=(const Animal& copy);

        void setType(std::string newType);
        std::string getType() const;

        virtual void makeSound() const;
};