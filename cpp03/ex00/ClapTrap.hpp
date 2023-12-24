#pragma once
#include <string>
#include <iostream>

class ClapTrap{
    private:
        std::string name;
        int hitPoint;
        int energyPoint;
        int attackDamage;
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& copy);
        ~ClapTrap();

        void setEnergyPoints(int amount);
		void setAttackDamage(int amount);
		std::string getName() const;
		int	getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};