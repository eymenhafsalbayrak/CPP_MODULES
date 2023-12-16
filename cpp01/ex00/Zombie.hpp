#pragma once
#include <iostream>
#include <string> 

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string zombieName);
		~Zombie();
		void announce(void) const;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);