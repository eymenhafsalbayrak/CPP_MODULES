#pragma once
#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce(void) const;
		void setName(std::string newName);
		std::string getName() const;
};

Zombie* zombieHorde(int N, std::string name);