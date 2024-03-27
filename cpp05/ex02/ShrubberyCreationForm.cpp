#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("Shrubbery Creation", 145, 137), target("Default"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("Shrubbery Creation", 145, 137), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm::AForm("Shrubbery Creation", 145, 137){
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if(this != &copy)
        this->target = copy.target;//?
    return *this; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::specificExecute() const{
    std::ofstream o((target + "_shrubbery").c_str());

    o << "                                                         .\n";
    o << "                                              .         ;  \n";
    o << "                 .              .              ;%     ;;   \n";
    o << "                   ,           ,                :;%  %;   \n";
    o << "                    :         ;                   :;%;'     .,   \n";
    o << "           ,.        %;     %;            ;        %;'    ,;\n";
    o << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    o << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    o << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    o << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    o << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    o << "                    `:%;.  :;bd%;          %;@%;'\n";
    o << "                      `@%:.  :;%.         ;@@%;'   \n";
    o << "                        `@%.  `;@%.      ;@@%;         \n";
    o << "                          `@%%. `@%%    ;@@%;        \n";
    o << "                            ;@%. :@%%  %@@%;       \n";
    o << "                              %@bd%%%bd%%:;     \n";
    o << "                                #@%%%%%:;;\n";
    o << "                                %@@%%%::;\n";
    o << "                                %@@@%(o);  . '         \n";
    o << "                                %@@@o%;:(.,'         \n";
    o << "                            `.. %@@@o%::;         \n";
    o << "                               `)@@@o%::;         \n";
    o << "                                %@@(o)::;        \n";
    o << "                               .%@@@@%::;         \n";
    o << "                               ;%@@@@%::;.          \n";
    o << "                              ;%@@@@%%:;;;. \n";
    o << "                          ...;%@@@@@%%:;;;;,..  \n";

    o.close();
}