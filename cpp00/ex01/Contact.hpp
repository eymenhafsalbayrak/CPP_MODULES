#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string Fname;
		std::string Lname;
		std::string Nname;
		std::string Pnumber;
		std::string darkestSecret;
	public:
		Contact();
		void setFname(std::string firstName);
		void setLname(std::string lastName);
		void setNname(std::string nickName);
		void setPnumber(std::string phoneNumber);
		void setdarkestSecret(std::string darkestSecret);
		void displayContacts(int i) const;
		std::string moreOrDot(const std::string& str, size_t width) const;
		void displayIndex() const;

		std::string getFname() const;
		std::string getLname() const;
		std::string getNname() const;
		std::string getPnumber() const;
		std::string getdarkestSecret() const;
	
};
