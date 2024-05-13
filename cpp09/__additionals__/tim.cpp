#include <iostream>
#include <ctime>

void bubbleSort(int arr[], int n) {
    clock_t start_time = clock(); // Algoritmanın başlangıç zamanını kaydedin

    // Kabarcık sıralaması
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    clock_t end_time = clock(); // Algoritmanın bitiş zamanını kaydedin

    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC; // Geçen süreyi hesaplayın

    std::cout << "Elapsed time: " << elapsed_time << " seconds" << std::endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}
