#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream> // std::istringstream için

void dosyadanOkuVeEkle(const std::string& dosyaAdi, std::map<std::string, int>& veri) {
    std::ifstream dosya(dosyaAdi);

    if (!dosya.is_open()) {
        std::cerr << "Dosya açılamadı!" << std::endl;
        return;
    }

    std::string satir;

    while (std::getline(dosya, satir)) {
        std::istringstream ss(satir); // Satırı virgülle parçalamak için bir istringstream kullan
        std::string anahtar;
        std::string degerStr;

        // Virgülle ayrılmış satırı parçala
        if (std::getline(ss, anahtar, ',')) {
            if (std::getline(ss, degerStr)) {
                // Değeri string olarak aldık, integera dönüştürelim
                try {
                    int deger = std::stoi(degerStr);
                    // Anahtar-değer çiftini ekle
                    veri[anahtar] = deger;
                } catch (std::invalid_argument const& e) {
                    std::cerr << "Hatalı değer: " << degerStr << std::endl;
                } catch (std::out_of_range const& e) {
                    std::cerr << "Aralık dışı değer: " << degerStr << std::endl;
                }
            }
        }
    }

    dosya.close();
}

int main() {
    std::string dosyaAdi = "metinDosyasi.txt";
    std::map<std::string, int> veri;

    dosyadanOkuVeEkle(dosyaAdi, veri);

    // Haritadaki tüm anahtar-değer çiftlerini yazdır
    for(it = data.begin(); it != data.end(); ++it){
		std::cout << it->first << " = " << it->second << std::endl; 
	}

    return 0;
}
