#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& copy);

        void makeSound() const;
        Brain *getBrain() const;

};