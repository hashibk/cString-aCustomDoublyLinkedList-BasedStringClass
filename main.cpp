#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int *a = new int[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    // Using a hash set to store elements
    unordered_set<int> seen;
    cout << "Pairs summing to 10:" << endl;
    
    for (int i = 0; i < size; i++) {
        int complement = 10 - a[i];

        // Check if complement exists in the set
        if (a[i] < 10 && seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << a[i] << ", " << complement << ")" << endl;
        }

        // Insert the current element into the set
        seen.insert(a[i]);
    }

    // Free allocated memory
    delete[] a;

    return 0;
}