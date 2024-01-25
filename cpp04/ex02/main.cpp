#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){

    // AAnimal test;

    {
        const AAnimal* j = new Dog(); //The address of the dynamically allocated Dog object is assigned to the pointer j, which is of type const Animal* due to polymorphism.
        const AAnimal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        j->makeSound();
        i->makeSound();
        
        delete j;
        delete i;
        
        std::cout << std::endl;

        const int numAnimals = 4;
        AAnimal* animals[numAnimals];//is declared to hold pointers to both 'Dog' and 'Cat' objects

        for (int i = 0; i < numAnimals / 2; ++i) {
            animals[i] = new Dog(); // 'Brain' objects are created for each 'Dog' and 'Cat'
        }
        for (int i = numAnimals / 2; i < numAnimals; ++i) {
            animals[i] = new Cat();
        }
        /*
        Polymorphism is demonstrated here. Since makeSound() is a virtual function, 
        the appropriate makeSound() function for each object type (Dog or Cat) is called.
        */
        for (int i = 0; i < numAnimals; ++i) {
            animals[i]->makeSound();
        }

        for (int i = 0; i < numAnimals; ++i) {
            delete animals[i];
        }
    }
    return 0;
}
