#pragma once
#include <iostream>
#include <string>

class ICharacter; // what is it??

class AMateria{

	protected:
		std::string type;
	public:
		AMateria();//default constructor;
		virtual ~AMateria();//destructor;//why are we using a virtual keyword, you know the reason but search deeply
		AMateria(std::string const & type);//parameterized;
		AMateria(const AMateria& copy);//copy const;
		AMateria &operator=(const AMateria& copy);//copy assignment operator;
		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};