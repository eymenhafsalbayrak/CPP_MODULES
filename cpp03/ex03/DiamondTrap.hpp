#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap &operator=(const DiamondTrap& copy);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();

        void whoAmI();
};