#include <iostream>
using namespace std;

void Set(int *data, int *set, int &x, int &z) {
    set[0] = data[0]; 
    int a = 1;  
    int b = 1;  
    int count = 0;  

    while (b < x) { 
        count = 0;

        for (int i = 0; i < a; i++) {
            if (set[i] == data[b]) {
                count++;  
                break;
            }
        }

        if (count == 0) {
            set[a] = data[b];
            a++;
        }
        b++;
    }

    z = a;
}

void Input(int &x, int &z) {
    cout << "Enter size of array: ";
    cin >> x;
    int *data = new int[x];
    int *set = new int[x];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < x; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < x; i++) {
        set[i] = -1;  
    }

    Set(data, set, x, z);

    cout << "Set: ";
    for (int i = 0; i < z; i++) {
        cout << set[i] << " ";
    }
    cout << endl;

    delete[] data;  
    delete[] set;   
}

int main() {
    int ans = 1;
    int x, z = 0;

    while (ans == 1) {
        Input(x, z);
        cout << "Do you want to enter data again (enter 1 for yes)? ";
        cin >> ans;
    }

    return 0;
}
