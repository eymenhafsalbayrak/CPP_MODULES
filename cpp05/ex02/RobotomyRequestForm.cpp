#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("Robotomy Request", 72, 45), target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("Robotomy Request", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm::AForm("Robotomy Request", 72, 45){
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    target = copy.target;//?
    return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm(){}