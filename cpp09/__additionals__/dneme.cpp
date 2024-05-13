// #include <iostream>
// #include <vector>
// using namespace std;

// const int K = 5;

// void insertionSort(int A[], int p, int q) {
//     for (int i = p; i <= q; i++) {
//         int tempVal = A[i];
//         int j = i;
//         while (j > p && A[j - 1] > tempVal) {
//             A[j] = A[j - 1];
//             j--;
//         }
//         A[j] = tempVal;
//     }
//     for (int i = p; i <= q; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;
// }

// void merge(int A[], int p, int q, int r) {
//     int n1 = q - p + 1;
//     int n2 = r - q;
//     vector<int> LA(A + p, A + q + 1);
//     vector<int> RA(A + q + 1, A + r + 1);
//     int RIDX = 0;
//     int LIDX = 0;
//     for (int i = p; i <= r; i++) {
//         if (RIDX == n2) {
//             A[i] = LA[LIDX];
//             LIDX++;
//         } else if (LIDX == n1) {
//             A[i] = RA[RIDX];
//             RIDX++;
//         } else if (RA[RIDX] > LA[LIDX]) {
//             A[i] = LA[LIDX];
//             LIDX++;
//         } else {
//             A[i] = RA[RIDX];
//             RIDX++;
//         }
//     }
// }

// void sort(int A[], int p, int r) {
//     if (r - p > K) {
//         int q = (p + r) / 2;
//         sort(A, p, q);
//         sort(A, q + 1, r);
//         merge(A, p, q, r);
//     } else {
//         insertionSort(A, p, r);
//     }
// }

// int main() {
//     int A[] = {2, 5, 1, 6, 7, 3, 8, 4, 9};
//     int n = sizeof(A) / sizeof(A[0]);
//     sort(A, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << A[i] << " ";
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

const int INSERTION_SORT_THRESHOLD = 5;

void insertionSort(int array[], int start, int end) {
    for (int i = start; i <= end; i++) {
        int currentValue = array[i];
        int j = i;
        while (j > start && array[j - 1] > currentValue) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = currentValue;
    }
    for (int i = start; i <= end; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void merge(int array[], int start, int mid, int end) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;
    vector<int> leftArray(array + start, array + mid + 1);
    vector<int> rightArray(array + mid + 1, array + end + 1);
    int rightIndex = 0;
    int leftIndex = 0;
    for (int i = start; i <= end; i++) {
        if (rightIndex == rightSize) {
            array[i] = leftArray[leftIndex];
            leftIndex++;
        } else if (leftIndex == leftSize) {
            array[i] = rightArray[rightIndex];
            rightIndex++;
        } else if (rightArray[rightIndex] > leftArray[leftIndex]) {
            array[i] = leftArray[leftIndex];
            leftIndex++;
        } else {
            array[i] = rightArray[rightIndex];
            rightIndex++;
        }
    }
}

void mergeSort(int array[], int start, int end) {
    if (end - start > INSERTION_SORT_THRESHOLD) {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    } else {
        insertionSort(array, start, end);
    }
}

int main() {
    int array[] = {2, 5, 1, 6, 7, 3, 8, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
