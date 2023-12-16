#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Contact;
class PhoneBook {
	public:
		Contact contacts[8];
		PhoneBook();
		~PhoneBook();
		std::string getPromptInput(const std::string prompt);
		void displaySearch() const;
};