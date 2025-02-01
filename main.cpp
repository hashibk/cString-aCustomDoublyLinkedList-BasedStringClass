#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int *a = new int[size];
    int *b = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter array element: ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            b[i] = a[i] * a[1] * a[size - 1];
        } else if (i == size - 1) {
            b[i] = a[i] * a[0] * a[size - 2];
        } else {
            b[i] = a[i - 1] * a[i + 1] * a[i];
        }
    }

    cout << "Your new array is: ";
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}