#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {

    private:
        const std::string name;
        int grade;
        void setGrade(int number);
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& copy);
        
        std::string getName() const;
        int getGrade() const;
        
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception{
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, const Bureaucrat& b);