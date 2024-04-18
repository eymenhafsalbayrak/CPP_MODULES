// #include <iostream>
// #include <cctype>

// bool isFloat(const std::string& arg) {
//     if (arg.empty()) // Argüman boş ise float değil
//         return false;

//     size_t dotCount = 0;
//     size_t i = 0;

//     // Eğer argümanın ilk karakteri "+" veya "-" ise, bu işaretin yalnızca bir kere geçtiğinden emin olun
//     if (arg[i] == '+' || arg[i] == '-') {
//         if (arg.size() == 1) // Sadece işaret var, float değil
//             return false;
//         ++i; // İlk karakter işaret olduğu için bir sonraki karaktere geç
//     }

//     // Geri kalan karakterlerin hepsinin sayısal veya nokta ('.') olup olmadığını kontrol edin
//     while (i < arg.size()) {
//         if (!isdigit(arg[i])) {
//             if (arg[i] == '.') {
//                 ++dotCount;
//                 if (dotCount > 1) // Birden fazla nokta var, float değil
//                     return false;
//             } else { // Karakter sayısal veya nokta değilse float değil
//                 return false;
//             }
//         }
//         ++i; // Sonraki karaktere geç
//     }

//     // Noktanın yalnızca bir kere geçtiğinden ve noktadan önce ve sonra en az bir sayısal karakter olduğundan emin olun
//     if (dotCount == 1 && isdigit(arg[0]) && isdigit(arg[arg.size() - 1]))
//         return true;

//     return false;
// }

// int main(int ac, char **av) {

//     isFloat(av[1]);
//     return 0;
// }


 float a = atof(tmp.c_str());
        long long b = a;
        if (isprint(a))
            std::cout << "char: '" << static_cast<char>(a) <<"'" << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
        if (INT_MAX < b || INT_MIN > b)
            std::cout << "int: " << "impossible" << std::endl;
        else
            std::cout << "int : " << static_cast<int>(a) << std::endl;
        if (b - a != 0)
        {
            std::cout << "float: " << a <<  "f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) <<std::endl;
        }
        else
        {
            std::cout << "float: " << a <<  ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) << ".0" <<std::endl;
        }