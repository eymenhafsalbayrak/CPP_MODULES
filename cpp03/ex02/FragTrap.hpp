#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const ClapTrap& copy);
        ~FragTrap();

        void highFivesGuys(void);
};