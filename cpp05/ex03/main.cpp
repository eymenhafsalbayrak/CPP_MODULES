#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern intern;
    AForm* form1 = intern.makeForm("RobotomyRequestForm", "John");
    AForm* form2 = intern.makeForm("NonExistentForm", "Jane");

        Bureaucrat bureaucrat("Alice", 50);
        try {
            form1->execute(bureaucrat);
        } catch (const std::exception& e) {
            std::cerr << "Exception occurred: " << e.what() << std::endl;
        }
        delete form1; // Don't forget to free memory

        delete form2; // Don't forget to free memory

    return 0;
}

// int main() {
//     Intern i;
//     AForm* rrf;

//     rrf = i.makeForm("robotomy request", "Bender");
// }