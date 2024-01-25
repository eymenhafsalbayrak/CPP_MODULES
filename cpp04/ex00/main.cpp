#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     return 0;
// }


int main() {
    {  
       const Animal* meta = new Animal();
       const Animal* j = new Dog();
       const Animal* i = new Cat();

       std::cout << j->getType() << " " << std::endl;
       std::cout << i->getType() << " " << std::endl;

       i->makeSound();  // will output the cat sound!
       j->makeSound();
       meta->makeSound();
       delete meta;
       delete j;
       delete i;
    }
    std::cout << std::endl;
    // Using WrongCat and WrongAnimal
    {
        const WrongAnimal* wrongMeta = new WrongAnimal();
        const WrongAnimal* wrongI = new WrongCat();

        const WrongCat* wrong = new WrongCat();

        std::cout << wrongI->getType() << " " << std::endl;
        wrongI->makeSound();
        wrongMeta->makeSound();
        wrong->makeSound();

        delete wrongMeta;
        delete wrongI;
        delete wrong;
    }   
    return 0;
}