#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	PhoneBook PB;
	int i = 0;
	while(1) {
		std::string userInput = PB.getPromptInput("<> ");
		if (userInput == "ADD"){
			PB.contacts[i].setFname(PB.getPromptInput("first name: "));
			PB.contacts[i].setLname(PB.getPromptInput("last name: "));
			PB.contacts[i].setNname(PB.getPromptInput("nickname: "));
			PB.contacts[i].setPnumber(PB.getPromptInput("phone number: "));
			PB.contacts[i].setdarkestSecret(PB.getPromptInput("darkest secret: "));
			i++;
			i %= 8;
		}
		else if (userInput == "SEARCH"){
			PB.displaySearch();
			std::string userInput = PB.getPromptInput(">< GIVE ME INDEX\n");
			int index = userInput[0] - '0';
			if (userInput.length() > 1 || !(index >= 0 && index < 8))
				std::cout << "This index does not exist, please try again" << std::endl;
			else
				PB.contacts[index].displayIndex();
		}
		else if (userInput == "EXIT") {
			break;
		}
		else
			std::cout << "I don't care I love it" << std::endl;
	}
	return 0;
}