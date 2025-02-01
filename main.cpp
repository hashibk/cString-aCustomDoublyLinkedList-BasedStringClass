#include <iostream>
using namespace std;
int *InputFunction(int x){
    int *arr=new int [x];
    for (int i=0;i<x;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
    return arr;
}

int *DeleteFunction(int *arr, int delnum , int x,int &newsize){
    int count=0;
    for (int i=0;i<x;i++){
        if (arr[i]==delnum){
            count++;
        }
    }
    newsize=x-count;
    int *arr2=new int [newsize];
    int a=0;
    int b=0;
    do{
        if (arr[a]!=delnum){
            arr2[b]=arr[a];
            a++;
            b++;
        }
        else{
            a++;
        }
    }
    while (a<x && b<newsize);
    return arr2;
}

int main(){
    int size;
    int del;
    int newsize;
    cout<<"Enter size of array= "<<endl;
    cin>>size;
    int *arr= InputFunction(size);
    cout<<"Enter element that you want to delete= "<<endl;
    cin>>del;
    int *arr2= DeleteFunction(arr,del,size,newsize);
    for (int i=0;i<newsize;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
