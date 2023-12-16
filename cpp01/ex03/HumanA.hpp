#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon &weap;
	public:
		HumanA(std::string humanName, Weapon &weaponType);
		~HumanA();
		void attack() const;

};