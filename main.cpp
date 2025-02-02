#include <iostream>
using namespace std;

void fillArray (int *&arr, int x){
    cout << "Enter array elements: "<<endl;
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
}

void compressArray (int *arr, int *&arr1, int &y, int x){
    arr1[0]=arr[0];
    for (int i = 1; i < x; i++) {
        if ( arr[i] != arr[i - 1]) {
            arr1[y] = arr[i];
            y++;
        }
    }
}

void shrinkArray (int *&arr1, int y){
    int*arr2=new int [y];
    for (int i=0;i<y;i++){
        arr2[i]=arr1[i];
    }
    delete []arr1;
    arr1=arr2;
    arr2=NULL;
}

void displayArray(int *arr1,int y){
    cout << "Array with consecutive duplicates removed: ";
    for (int i = 0; i < y; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main() {
    int x;
    cout << "Enter number of elements: ";
    cin >> x;
    int *arr = new int[x];
    int *arr1 = new int[x];
    int y = 1;
    fillArray(arr,x);
    compressArray(arr,arr1,y,x);
    shrinkArray(arr1,y);
    displayArray(arr1,y);
    
    delete[] arr;
    delete[] arr1;
    
    return 0;
}
