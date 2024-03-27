#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
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

int Bureaucrat::getGrade() const{
    return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Careful, grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Careful, grade is too low!");
}

void Bureaucrat::incrementGrade(){
    setGrade(getGrade() - 1);
}

void Bureaucrat::decrementGrade(){
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

void Bureaucrat::signAForm(AForm& form){
    try
    {
        if(form.beSigned(*this)){
            std::cout << this->getName() << " signed " << form.getName() << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const & form) {
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't executed form , because " << e.what() << std::endl;
    }
    
}