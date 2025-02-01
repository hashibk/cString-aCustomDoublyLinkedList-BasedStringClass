#include <iostream>
#include <algorithm> // For sorting
using namespace std;

class StackADT {
    int size1, count1, size2, count2;
    int* arr1;
    int* arr2;

public:
    StackADT() {
        size1 = 5;
        count1 = 0;
        size2 = 5;
        count2 = 0;
        arr1 = new int[size1];
        arr2 = new int[size2];
    }

    ~StackADT() { // Destructor to free memory
        delete[] arr1;
        delete[] arr2;
    }

    void addElement(int val, int access) {
        int*& arr = (access == 1) ? arr1 : arr2;
        int& count = (access == 1) ? count1 : count2;
        int& size = (access == 1) ? size1 : size2;

        if (count >= size) { 
            size += 5;
            int* tempArr = new int[size];
            copy(arr, arr + count, tempArr);
            delete[] arr;
            arr = tempArr;
        }
        arr[count++] = val;
    }

    void deleteVal(int val, int access) {
        int*& arr = (access == 1) ? arr1 : arr2;
        int& count = (access == 1) ? count1 : count2;
        bool found = false;

        for (int i = 0; i < count; i++) {
            if (arr[i] == val) {
                found = true;
                for (int j = i; j < count - 1; j++)
                    arr[j] = arr[j + 1];
                count--;
                i--;
            }
        }
        if (!found)
            cout << "Element not found." << endl;
    }

    void merge() {
        int* mergeArr = new int[count1 + count2];
        copy(arr1, arr1 + count1, mergeArr);
        copy(arr2, arr2 + count2, mergeArr + count1);

        cout << "\nMerged Array:\n";
        for (int i = 0; i < count1 + count2; i++)
            cout << mergeArr[i] << " ";
        cout << endl;

        delete[] mergeArr;
    }

    void findElement(int val) {
        bool found = false;
        for (int i = 0; i < count1; i++)
            if (arr1[i] == val) { cout << "Found in Array 1 at index " << i << endl; found = true; }

        for (int i = 0; i < count2; i++)
            if (arr2[i] == val) { cout << "Found in Array 2 at index " << i << endl; found = true; }

        if (!found) cout << "Element not found." << endl;
    }

    void sortArray() {
        sort(arr1, arr1 + count1);
        sort(arr2, arr2 + count2);
    }

    void duplicateRemoval() {
        count1 = unique(arr1, arr1 + count1) - arr1;
        count2 = unique(arr2, arr2 + count2) - arr2;
    }

    void print() {
        cout << "Array 1: ";
        for (int i = 0; i < count1; i++)
            cout << arr1[i] << " ";
        cout << "\nArray 2: ";
        for (int i = 0; i < count2; i++)
            cout << arr2[i] << " ";
        cout << endl;
    }
};

int main() {
    int val, access, delVal;
    StackADT s;

    for (int i = 0; i < 4; i++) {
        cout << "Enter value for Array 1: ";
        cin >> val;
        s.addElement(val, 1);
    }
    for (int i = 0; i < 6; i++) {
        cout << "Enter value for Array 2: ";
        cin >> val;
        s.addElement(val, 2);
    }

    while (true) {
        cout << "Enter 1 for Array 1, 2 for Array 2, or any other key to exit deletion: ";
        cin >> access;
        if (access != 1 && access != 2) break;
        
        cout << "Enter value to delete: ";
        cin >> delVal;
        s.deleteVal(delVal, access);
    }

    s.print();

    cout << "Enter value to find: ";
    cin >> val;
    s.findElement(val);

    s.merge();

    cout << "Sorted and Duplicates Removed:\n";
    s.sortArray();
    s.duplicateRemoval();
    s.print();

    return 0;
}