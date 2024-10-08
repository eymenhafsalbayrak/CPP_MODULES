#pragma once
#include <string>
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap& copy);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setHitPoints(int amount);
		void setEnergyPoints(int amount);
		void setAttackDamage(int amount);
		void setName(std::string newName);
		
		std::string getName() const;
		int	getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};