#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ScavTrap& copy);
        ~ScavTrap();
        
        void attack(const std::string& target);

        void guardGate();
};