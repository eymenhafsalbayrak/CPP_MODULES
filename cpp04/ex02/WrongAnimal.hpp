#pragma once
#include <string>
#include <iostream>

class WrongAnimal{

    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal &operator=(const WrongAnimal& copy);

        void setType(std::string newType);
        std::string getType() const;

        virtual void makeSound() const;
};