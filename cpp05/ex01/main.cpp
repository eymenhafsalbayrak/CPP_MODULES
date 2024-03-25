#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        Form form("Mush", 54, 3);
        
        bureaucrat.signForm(form);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
