#include <iostream>

// Define a simple Data structure
struct Data {
    int value;
    // Constructor
    Data(int val) : value(val) {}
};

// Define a static class Serializer
class Serializer {
public:
    // Method to serialize a pointer to uintptr_t
    static uintptr_t serialize(Data* ptr) {
        return reinterpret_cast<uintptr_t>(ptr);
    }

    // Method to deserialize a uintptr_t to a pointer
    static Data* deserialize(uintptr_t raw) {
        return reinterpret_cast<Data*>(raw);
    }
};

int main() {
    // Create an instance of Data
    Data myData(42);

    // Serialize the pointer to Data
    uintptr_t serializedPtr = Serializer::serialize(&myData);

    // Deserialize the uintptr_t back to a pointer to Data
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserializedPtr == &myData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
