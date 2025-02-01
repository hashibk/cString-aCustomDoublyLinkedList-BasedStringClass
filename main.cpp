#include <iostream>
#include <cstring> // For memset
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *a = new int[size];
    int *array = new int[size];
    memset(array, 0, size * sizeof(int)); // Initialize array with 0s

    // Input array
    for (int i = 0; i < size; i++) {
        cout << "Enter array element: ";
        cin >> a[i];
    }

    // Bubble Sort (Ascending Order)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // Alternating Placement
    int oddIndex = 1, evenIndex = 0;
    for (int i = size - 1; i >= size / 2; i--) {
        array[oddIndex] = a[i];
        oddIndex += 2;
    }
    for (int i = 0; i < size / 2; i++) {
        array[evenIndex] = a[i];
        evenIndex += 2;
    }

    // Output Final Array
    cout << "Final array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] a;
    delete[] array;

    return 0;
}