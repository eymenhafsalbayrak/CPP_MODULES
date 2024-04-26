#include "Array.hpp"

int main() 
{
    int * a = new int();
    std::cout << *a << std::endl;
    {
        Array<int> arr1(5);
        for (int i = 1; i < 5; ++i) {
            arr1[i] = i * 11;
        }
        Array<int> arr2;
        arr2 = arr1;


        std::cout << "before arr1[0] = " << arr1[1] << std::endl;
        arr2[1] = 10;

        std::cout << "after arr1[0] = " << arr1[1] << std::endl;

    }
        std::cout << "-----------------------------------" << std::endl;

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