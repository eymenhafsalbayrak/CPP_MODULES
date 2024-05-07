#include <iostream>
#include <string>
#include <sstream>
#include <fstream> // Dosya işlemleri için gerekli olan kütüphane

int main(int argc, char *argv[]) { // Main fonksiyonuna argc ve argv parametrelerini ekliyoruz
    if (argc != 2) { // Eğer dosya adı argüman olarak verilmezse
        std::cerr << "Kullanım: " << argv[0] << " <dosya_adı>\n"; // Hata mesajı yazdırılır
        return 1; // Program hata durumunda 1 ile sonlanır
    }

    std::ifstream dosya(argv[1]); // Argüman olarak verilen dosya adını açar
    if (!dosya.is_open()) { // Dosyanın açılıp açılmadığını kontrol eder
        std::cerr << "Dosya açılamadı.\n"; // Hata mesajı yazdırılır
        return 1; // Program hata durumunda 1 ile sonlanır
    }

    std::string input;
    std::getline(dosya, input); // Dosyadan bir satır okur

    dosya.close(); // Dosyayı kapatır

    std::istringstream iss(input);
    std::string firstPart;
    int secondPart;
    char separator;

    std::getline(iss, firstPart, '|');
    iss >> secondPart;

    std::cout << "first part: " << firstPart << std::endl;
    std::cout << "second part: " << secondPart << std::endl;

    return 0;
}
