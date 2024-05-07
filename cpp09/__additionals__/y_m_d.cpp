// #include <iostream>
// #include <string>
// #include <sstream>

// int main() {
//     std::string date_string = "2022-11-04";
//     std::istringstream iss(date_string);
//     static std::string y_m_d;

//     // '-' karakterine göre ayır ve parçaları ilgili değişkenlere atayın
//     std::getline(iss, y_m_d, '-');
//     std::getline(iss, y_m_d, '-');
//     std::getline(iss, y_m_d);

//     // Parçaları int değerlere dönüştür
//     int fulldate = atoi(y_m_d.c_str());

//     std::cout << "full date: " << fulldate << std::endl;

//     return 0;
// }
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string date_string = "2022-11-04";
    std::istringstream iss(date_string);
    int year, month, day;

    // '-' karakterine göre ayır ve parçaları ilgili değişkenlere atayın
    char delimiter;
    iss >> year >> delimiter >> month >> delimiter >> day;

    // Yıl, ay ve gün bilgilerini birleştirerek tek bir sayı oluştur
    int combined_date = year * 10000 + month * 100 + day;

    std::cout << "Combined Date: " << combined_date << std::endl;

    return 0;
}
