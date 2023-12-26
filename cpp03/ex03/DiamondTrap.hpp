#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap &operator=(const ClapTrap& copy);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();

        void whoAmI();
};