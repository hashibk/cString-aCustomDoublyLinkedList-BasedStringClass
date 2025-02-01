#include <iostream>
using namespace std;
int main(){
    int size, seclarge=0, large=0;
    cout<<"Enter size of array= "<<endl;
    cin>>size;
    int *arr= new int [size];
    for (int i=0;i<size; i++){
        cout<<"Enter element= "<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<size;i++){
        if (arr[i]>large){
            large=arr[i];
        }
    }
    for (int i=0;i<size;i++){
        if (arr[i]>seclarge && arr[i]<large){
            seclarge=arr[i];
        }
    }
    cout<<"Second largest element is= "<<seclarge<<endl;
    return 0;
    
}
