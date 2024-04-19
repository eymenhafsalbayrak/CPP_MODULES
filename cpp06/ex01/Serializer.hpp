#pragma once

#include <iostream>
#include <stdint.h>

typedef struct Data{
    float a, b;
};

class Serializer{
    private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& copy);
		Serializer &operator=(const Serializer& copy);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};