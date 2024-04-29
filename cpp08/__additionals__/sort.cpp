#include <iostream>
#include <vector>
#include <cstdlib> // qsort için gerekli

// qsort için karşılaştırma fonksiyonu
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void addAndSort(std::vector<int>& vec, int num) {
    vec.push_back(num);
    std::qsort(&vec[0], vec.size(), sizeof(int), compare);
}

int main() {
    std::vector<int> numbers;

    addAndSort(numbers, 5);
    addAndSort(numbers, 3);
    addAndSort(numbers, 8);
    addAndSort(numbers, 2);

    std::cout << "Sorted numbers: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
