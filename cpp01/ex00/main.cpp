#include "Zombie.hpp"

int main(){

	Zombie myZombie("arda");
	myZombie.announce();
	Zombie myZombie2 = Zombie("arda2");
	myZombie2.announce();
    {
		Zombie ie("Bala");
		ie.announce();
	}
	randomChump("Eyms");
	Zombie *a = newZombie("kelesh");
	a->announce();
	delete a;
}