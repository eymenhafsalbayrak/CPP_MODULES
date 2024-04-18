#include <iostream>
#include <cctype>

bool isInteger(const std::string& arg) {
    if (arg.empty()) // Argüman boş ise tamsayı değil
        return false;

    size_t i = 0;

    // Eğer argümanın ilk karakteri "+" veya "-" ise, bu işaretin yalnızca bir kere geçtiğinden emin olun
    if (arg[i] == '+' || arg[i] == '-') {
        if (arg.size() == 1) // Sadece işaret var, tamsayı değil
            return false;
        ++i; // İlk karakter işaret olduğu için bir sonraki karaktere geç
    }

    // Geri kalan karakterlerin hepsinin sayısal olup olmadığını kontrol edin
    while (i < arg.size()) {
        if (!isdigit(arg[i])) // Karakter sayısal değilse tamsayı değil
            return false;
        ++i; // Sonraki karaktere geç
    }

    return true; // Tüm karakterler sayısal ise tamsayıdır
}

int main() {
    std::string arg = "-12345";
    if (isInteger(arg))
        std::cout << "Argüman bir tamsayıdır." << std::endl;
    else
        std::cout << "Argüman bir tamsayı değildir." << std::endl;

    return 0;
}

/*

for(size_t i = 0;i < arg.size(); ++i){
		if(arg[0] == '+' || arg[0] == '-' || isdigit(arg[i])){
			
		}
	}
*/

{


    for (size_t i = 0; i < arg.size(); ++i) {
        if (isdigit(arg[i]) || (arg[0] == '+' || arg[0] == '-'))
        {
            if (i != 0)
                continue;
        }
        else
            return 0;
    }
    if (IS_IN_INT_RANGE(atoll(arg.c_str())))
    {
        int n = atoi(arg.c_str());
        if (isascii(n))
        {
            if (isprint(n))
                std::cout << "char: '" << static_cast<char>(n) << "'"  << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << n << std::endl;
        std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
        return 1;
    }
    return 0;
}