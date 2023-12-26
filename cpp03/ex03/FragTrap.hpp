#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const ClapTrap& copy);
        ~FragTrap();

        void highFivesGuys(void);
};