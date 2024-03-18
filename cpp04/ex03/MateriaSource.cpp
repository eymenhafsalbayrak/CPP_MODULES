#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource Default Constructor" << std::endl;
    for(int i = 0;i < 4; i++)
        this->inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy){
    std::cout << "MateriaSource Copy Constructor" << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& copy){
    std::cout << "MateriaSource Copy Assignment Operator" << std::endl;
    for(int i = 0;i < 4;i++)
        this->inventory[i] = copy.inventory[i];
    return (*this);
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource Destructor" << std::endl;
    for(int i = 0;i < 4;i++){
        if(this->inventory[i])
            delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    int i = 0;
    if(!m){
        std::cout << "Tried to learn but Materia is empty" << std::endl;
        return ;
    }
    while(this->inventory[i] != 0){
        i++;
    }
    if(i > 3){
        std::cout << "have no space for learn Materia" << std::endl;
        return ;
    }
    this->inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const& type){
    for(int i = 0;i < 4; i++){
        if(this->inventory[i]->getType() == type)
            return (this->inventory[i]->clone());
    }
    return NULL;
}