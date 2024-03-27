#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    {
        ShrubberyCreationForm s;
        s.specificExecute();

        RobotomyRequestForm r;
        r.specificExecute();

        Bureaucrat b("Martini", 25);
        Bureaucrat c("Jay", 1);

        AForm *f = new RobotomyRequestForm("Marvin");
        PresidentialPardonForm puf("Camelot");

        b.signAForm(*f);
        b.signAForm(puf);

        b.executeForm(*f);
        b.executeForm(puf);

        c.executeForm(puf);

        delete f;
    }
}

