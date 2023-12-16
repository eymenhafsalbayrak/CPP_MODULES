#include "Contact.hpp"

Contact::Contact(){}

void Contact::setFname(std::string firstName){
	if(!firstName.empty())
		this->Fname = firstName;
	else	
		std::cout << "Error: This line cannot be left blank." << std::endl;
}
void Contact::setLname(std::string lastName){
	if(!lastName.empty())
		this->Lname = lastName;
	else	
		std::cout << "Error: This line cannot be left blank." << std::endl;
}
void Contact::setNname(std::string nickName){
	if(!nickName.empty())
		this->Nname = nickName;
	else	
		std::cout << "Error: This line cannot be left blank." << std::endl;
}
void Contact::setPnumber(std::string phoneNumber){
	if(!phoneNumber.empty())
		this->Pnumber = phoneNumber;
	else	
		std::cout << "Error: This line cannot be left blank." << std::endl;
}
void Contact::setdarkestSecret(std::string darkestSecret){
	if(!darkestSecret.empty())
		this->darkestSecret = darkestSecret;
	else	
		std::cout << "Error: This line cannot be left blank." << std::endl;
}


std::string Contact::getFname() const{
	return(this->Fname);
}
std::string Contact::getLname() const{
	return(this->Lname);
}
std::string Contact::getNname() const{
	return(this->Nname);
}
std::string Contact::getPnumber() const{
	return(this->Pnumber);
}
std::string Contact::getdarkestSecret() const{
	return(this->darkestSecret);
}

std::string Contact::moreOrDot(const std::string& str, size_t width) const{
	if (str.length() <= width) {
		return str;
	}else {
		return str.substr(0, width - 1) + ".";
	}
}

void Contact::displayContacts(int i) const {
	std::cout << std::setw(10) << i << "|"
			  << std::setw(10) << moreOrDot(this->getFname(), 10) << "|"
			  << std::setw(10) << moreOrDot(this->getLname(), 10)<< "|"
			  << std::setw(10) << moreOrDot(this->getNname(), 10)<< std::endl;
}

void Contact::displayIndex() const {
	std::cout << "First Name: " << this->getFname() << std::endl;
	std::cout << "Last Name: " << this->getLname() << std::endl;
	std::cout << "Nickname: " << this->getNname() << std::endl;
	std::cout << "Phone Number: " << this->getPnumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getdarkestSecret() << std::endl;
}