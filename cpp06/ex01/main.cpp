#include "Serializer.hpp"

int main(){

    Data *data = new Data;
    data->a = 11;
    std::cout << data << std::endl;
    
    uintptr_t rawPtr = Serializer::serialize(data);
    
    std::cout << rawPtr << std::endl;
    
    Data *tmp = NULL;
    tmp = Serializer::deserialize(rawPtr);
    std::cout << tmp << std::endl << tmp->a  << std::endl;
    
    delete data;
}