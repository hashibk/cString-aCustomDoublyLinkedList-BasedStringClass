#include <iostream>
#include <algorithm> // For sorting
using namespace std;

int main() {
    int size;
    cout << "Enter size of element: ";
    cin >> size;

    int *a = new int[size];
    int *b = new int[size];
    int *c = new int[size];

    // Input arrays
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < size; i++) cin >> a[i];

    cout << "Enter elements of array 2: ";
    for (int i = 0; i < size; i++) cin >> b[i];

    cout << "Enter elements of array 3: ";
    for (int i = 0; i < size; i++) cin >> c[i];

    // Sorting all three arrays
    sort(a, a + size);
    sort(b, b + size);
    sort(c, c + size);

    // Printing sorted arrays
    cout << "Elements of array a: ";
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;

    cout << "Elements of array b: ";
    for (int i = 0; i < size; i++) cout << b[i] << " ";
    cout << endl;

    cout << "Elements of array c: ";
    for (int i = 0; i < size; i++) cout << c[i] << " ";
    cout << endl;

    // Finding common elements using three-pointer technique
    int i = 0, j = 0, k = 0;
    cout << "Common elements: ";
    while (i < size && j < size && k < size) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++; j++; k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    cout << endl;

    // Free allocated memory
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}