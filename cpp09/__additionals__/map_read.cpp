#include <iostream>
#include <fstream>
#include <map>
#include <string>

// Dosyadan gelen verileri okuyup std::map container'ına atayan fonksiyon
bool readDataFromFile(const std::string& filename, std::map<std::string, int>& dataMap) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Dosya acilamadi: " << filename << std::endl;
        return false;
    }

    std::string key;
    int value;
    while (inputFile >> key >> value) {
        dataMap[key] = value;
    }

    inputFile.close();
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Kullanim: " << argv[0] << " <dosya_adi>" << std::endl;
        return 1;
    }

    std::map<std::string, int> dataMap;
    if (!readDataFromFile(argv[1], dataMap)) {
        return 1;
    }

    // Verileri ekrana yazdırma
    std::cout << "Dosyadan okunan veriler:" << std::endl;
    for (std::map<std::string, int>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
