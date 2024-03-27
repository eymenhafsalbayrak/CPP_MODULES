#include "RobotomyRequestForm.hpp"
#include <cstdlib> // For rand() function
#include <ctime>   // For srand() function

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("Robotomy Request", 72, 45){
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    /*
    genellikle kendi kendine atamayı önlemek için dahil edilir. 
    Kendini atama, bir nesneyi kendine atamaya çalıştığınızda ortaya çıkar ve 
    istenmeyen davranışlara ve bellek sızıntıları gibi sorunlara yol açabilir.
    */
    if(this != &copy)
        this->target = copy.target;//?
    return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::specificExecute() const {
    srand(time(nullptr));
    bool success = rand() % 2 == 0;

    std::cout << "* DRILLING NOISES *" << std::endl;
    if (success)
        std::cout << target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "ROBOTOMOY " << target << " failed."  << std::endl;
}
