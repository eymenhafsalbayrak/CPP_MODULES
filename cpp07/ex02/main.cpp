#include "Array.hpp"

int main() 
{
    {
        try{
        
            Array<int> myArray(11);
            for (unsigned int i = 0; i < myArray.size(); i++)
                myArray[i] = i * 11;

            for (unsigned int i = 0; i < myArray.size(); i++) 
                std::cout << myArray[i] << " " ;
            
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        try{
            
            Array<std::string> myArray(4);
            std::string tmp[] = {"eymen", "hafsa", "alp", "arda"};

            for (unsigned int i = 0; i < myArray.size(); i++)
                myArray[i] = tmp[i];

            for (unsigned int i = 0; i < myArray.size(); i++) 
                std::cout << myArray[i] << " " ;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        try{
            
            Array<std::string> myArray(4);

            std::cout << myArray[10000] << std::endl;

        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

}   