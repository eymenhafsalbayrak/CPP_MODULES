#pragma once
#include <iostream>
#include <exception>
#include <stdbool.h>

class Bureaucrat;

class AForm {

	private:
		const std::string name;//const dolayisiyla setlenemez
		bool sign;
		const int grade_sign;
		const int grade_exec;

	public:
		AForm();
		virtual ~AForm();
		AForm(const std::string name, const int grade_sign, const int grade_exec);
		AForm(const AForm& copy);
		AForm &operator=(const AForm& copy);

		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSign() const;

		void setSign(bool sign);

		class GradeTooHighException : public std::exception{
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
		class FormNotSignedException: public std::exception {
            const char* what() const throw();
        };

		bool beSigned(Bureaucrat& b_type);
		void execute(Bureaucrat const & executor) const;
		virtual void specificExecute(void) const = 0;
};


std::ostream &operator<<(std::ostream& o, const AForm& f);