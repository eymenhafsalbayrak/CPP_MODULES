#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Zombozo");
	DiamondTrap b("Samurai Jack");
	DiamondTrap c = a;

	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.attack("Vilgax");
	b.whoAmI();
	b.attack("Aku");
	c.whoAmI();
	return (0);
}