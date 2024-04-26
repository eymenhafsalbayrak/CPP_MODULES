#include <iostream>
#include <string>

template <typename T>

    T mamax(T x, T y){
        return (x > y)? x: y;
    } 

int main() {

    std::cout << "for int : " << mamax<int>(3, 7) << std::endl;
    std::cout << "for char: " << mamax<char>('a', 'g') << std::endl;
    std::cout << "for double: " << mamax<double>(4.91, 4.9) << std::endl;
    return 0;
}
