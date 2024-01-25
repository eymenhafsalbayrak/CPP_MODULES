#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog& copy);
        Dog &operator=(const Dog& copy);

        void makeSound() const;
        Brain *getBrain() const;
};