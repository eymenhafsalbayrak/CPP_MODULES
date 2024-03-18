#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:
        MateriaSource();
        ~MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource &operator=(const MateriaSource& copy);

        void learnMateria(AMateria);
        AMateria* createMateria(std::string const &type);

};