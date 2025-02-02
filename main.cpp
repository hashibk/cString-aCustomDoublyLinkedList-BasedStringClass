#include <iostream>
using namespace std;

void fillArray (int *&arr,int x){
    for (int i=0;i<x;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
}

void commonElements (int *arr, int *arr1, int *&arr2, int x, int y, int z, int &a){
    int count=0;
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            if (arr[i]==arr1[j]){
                for (int k=0;k<a;k++){
                    if (arr1[j]==arr2[k]){
                        count++;
                    }
                }
                if (count==0){
                    arr2[a]=arr1[j];
                    a++;
                }
                count=0;
            }
        }
    }
    
    int *arr3=new int [a];
    for (int i=0;i<a;i++){
        arr3[i]=arr2[i];
    }
    delete [] arr2;
    arr2=arr3;
    arr3=NULL;
}

void printCommonEle (int *arr2, int a){
    cout<<"Common elements= "<<endl;
    for (int i=0;i<a;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int x,y,z;
    int a=0;
    cout<<"Enter size of first array= "<<endl;
    cin>>x;
    cout<<"Enter size of second array= "<<endl;
    cin>>y;
    z=x+y;
    int *arr=new int[x];
    int *arr1=new int[y];
    int *arr2=new int[z];
    fillArray(arr,x);
    fillArray(arr1,y);
    commonElements(arr,arr1,arr2,x,y,z,a);
    printCommonEle(arr2,a);
   
    delete []arr;
    delete []arr1;
    delete []arr2;
}
