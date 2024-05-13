#include <iostream>
#include <sys/time.h>

void bubbleSort(int arr[], int n) {
    struct timeval start, end;

    // Algoritmanın başlangıç zamanını kaydedin
    gettimeofday(&start, NULL);

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

    // Algoritmanın bitiş zamanını kaydedin
    gettimeofday(&end, NULL);

    // Geçen süreyi hesaplayın
    double elapsed_time = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0;

    std::cout << "Elapsed time: " << elapsed_time << " seconds" << std::endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}
