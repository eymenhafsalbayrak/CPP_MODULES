#include <iostream>
#include <string>
#include <cctype>

bool isNumeric(const std::string& s) {
    // Verilen stringin her bir karakterini kontrol et
    for (std::string::size_type i = 0; i < s.length(); ++i) {
        // Eğer herhangi bir karakter sayısal değilse, false döndür
        if (!std::isdigit(s[i])) {
            return false;
        }
    }
    // Tüm karakterler sayısal ise, true döndür
    return true;
}

int main() {
    std::string input = "2011-03-23 asd | 5"; // Örnek input

    // Boru karakterinden önceki bölümü al
    std::string partBeforePipe = input.substr(0, input.find('|'));

    // Eğer bu bölüm sadece sayısal karakterler içeriyorsa
    if (isNumeric(partBeforePipe)) {
        std::cout << "Before pipe contains only numeric characters." << std::endl;
    } else {
        std::cout << "Before pipe contains non-numeric characters." << std::endl;
    }

    return 0;
}
