#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *weap;
		int haswep;
	public:
		HumanB(std::string humanName);
		HumanB(std::string humanName, Weapon *weaponType);
		~HumanB();
		void attack() const;
		void setType(Weapon& newtype);
};