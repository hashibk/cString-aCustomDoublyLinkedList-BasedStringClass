#include <iostream>
using namespace std;

void fillArray(int *&arr, int &x, int &num){
    int i=0;
    int count=0;
    do{
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
        if (arr[i]==-1){
            count++;
        }
        i++;
        num++;
        if (i==5){
            int *arr1=new int[x+5];
            
            for (int i=0;i<x;i++){
                arr1[i]=arr[i];
            }
            x+=5;
            delete [] arr;
            arr=arr1;
            arr1=NULL;
        }
    }
    while (count==0);
}

void shrinkArray(int *&arr, int num){
    int *arr2=new int [num]; //if we do not want the "-1" to be a part of the array, then replace this line with "int *arr2=new int [num-1];"
    for (int i=0;i<num;i++){
        arr2[i]=arr[i];
    }
    delete[]arr;
    arr=arr2;
    arr2=NULL;
    
}

void outputArray(int *arr, int num){
    for (int i=num-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int x=5;
    int num=0;
    int *arr=new int[x];
    fillArray(arr,x,num);
    shrinkArray(arr,num);
    outputArray(arr,num);
    delete []arr;

}
