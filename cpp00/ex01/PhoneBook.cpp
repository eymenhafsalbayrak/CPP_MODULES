#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::getPromptInput(const std::string prompt) {
    std::string userInput;
    do {
        std::cout << prompt;
        std::getline(std::cin, userInput);
    } while (userInput.empty());

    return userInput;
 }

void PhoneBook::displaySearch() const {
	std::cout << std::setw(10) << "INDEX" << "|"
              << std::setw(10) << "FIRST NAME" << "|"
              << std::setw(10) << "LAST NAME" << "|"
              << std::setw(10) << "NICKNAME" << std::endl;
	for(int j = 0;!this->contacts[j].getFname().empty() && j < 8;j++) {
		this->contacts[j].displayContacts(j);
	}
}