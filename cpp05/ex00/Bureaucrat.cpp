#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, size_t grade) : name(name){
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.getName()){
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy){
    if(this == &copy)
        return (*this);
    grade = copy.grade;
    return (*this);
}

std::string Bureaucrat::getName() const{
    return (this->name);
}

size_t Bureaucrat::getGrade() const{
    return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade Too Low");
}

void Bureaucrat::increaseGrade(){
    setGrade(getGrade() - 1);
}

void Bureaucrat::decreaseGrade(){
    setGrade(getGrade() + 1);
}

void Bureaucrat::setGrade(int number){
    if(number < 1)
        throw GradeTooHighException();
    else if(number > 150)
        throw GradeTooLowException();
    this->grade = number;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}
