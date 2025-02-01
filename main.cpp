#include <iostream>
using namespace std;

int *InputArray (int &size){
    int *arr=new int [size];
    for (int i=0;i<size;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
    return arr;
}

int *SortingArray (int &size,int arr[]){
    int *arr2=new int [size];
    int i=0;
    int j=size-1;
    int k=0;
    do{
        if (arr[k]%2==0){
            arr2[i]=arr[k];
            i++;
            k++;
        }
        else{
            arr2[j]=arr[k];
            j--;
            k++;
        }
    }
    while (i<size && k<size && j>0);
    return arr2;
}

int main(){
    int size;
    cout<<"Enter size of array= "<<endl;
    cin>>size;
    int *arr=InputArray(size);
    int *arr2=SortingArray(size,arr);
    for (int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
    
