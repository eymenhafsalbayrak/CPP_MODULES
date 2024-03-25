/*
bureaucrat
throw
std::exception
try-catch
*/


#include "Bureaucrat.hpp"

/*int main()
{

    {
        Bureaucrat a("Amalfi", 5);
        try {
            for (size_t i = 0; i < 5; ++i) {
                std::cout << a << std::endl;
                a.incrementGrade();
            }
            std::cout << a << std::endl;
            for (size_t i = 0; i < 150; --i) {
                a.incrementGrade();
                std::cout << a << std::endl;
            }
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << a << std::endl;
    }

}*/

int main() {
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;
        
        bureaucrat.incrementGrade();
        std::cout << "After increment: " << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << "After decrement: " << bureaucrat << std::endl;

        // Trying to create a bureaucrat with an invalid grade
        Bureaucrat invalidBureaucrat("Invalid", 160); // This should throw GradeTooLowException
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
