#pragma once
#include <iostream>
#include <string>

class AAnimal{
    protected:
        std::string type; 
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& copy);
        AAnimal &operator=(const AAnimal& copy);

        void setType(std::string newType);
        std::string getType() const;

        virtual void makeSound() const = 0;
};