#include <iostream>

int main() {
    std::string a = "2022-05-11";

    int y,m,d;
    y = atof(&a[0]);
    m = atof(&a[5]);
    d = atof(&a[8]);
    std::cout<<y<< " " << m<< " "<< d << std::endl;
    int tot = y * 10000;
    tot += m * 100;
    tot += d;
    std::cout << tot<< std::endl;
}