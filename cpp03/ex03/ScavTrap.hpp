#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ClapTrap& copy);
        ~ScavTrap();
        
        void attack(const std::string& target);

        void guardGate();
};