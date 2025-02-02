#include <iostream>
using namespace std;

void fillArray (int *&arr, int x){
    for (int i=0;i<x;i++){
        cout<<"Enter array elements= "<<endl;
        cin>>arr[i];
    }
}

void sortAscending (int *&arr, int x){
    for (int i=0;i<x-1;i++){
        for (int j=i+1;j<x;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void sortDescending (int *&arr1, int y){
    for (int i=0;i<y-1;i++){
        for (int j=i+1;j<y;j++){
            if (arr1[i]<arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
}

void mergeArray (int *arr, int *arr1, int *&arr2,int x,int y,int z){
    int a=0;
    int b=y-1;
    int c=0;
    do{
        if (arr[a]<arr1[b]){
            arr2[c]=arr[a];
            c++;
            a++;
            if (a==x){
                do{
                    arr2[c]=arr1[b];
                    b--;
                    c++;
                }
                while(c<z);
            }
        }
        else if (arr[a]>arr1[b]){
            arr2[c]=arr1[b];
            b--;
            c++;
            if (b==-1){
                do{
                    arr2[c]=arr[a];
                    c++;
                    a++;
                }
                while (c<z);
            }
        }
        
        else if (arr[a]==arr1[b]){
            arr2[c]=arr[a];
            c++;
            a++;
            arr2[c]=arr1[b];
            c++;
            b--;
        }
    }
    while (c<z);
    
}

void outputArray (int *arr2, int z){
    cout<<"Merged array ascending order= "<<endl;
    for (int i=0;i<z;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int x,y,z;
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
    sortAscending(arr,x);
    sortDescending(arr1,y);
    mergeArray(arr,arr1,arr2,x,y,z);
    outputArray(arr2,z);
    
    delete [] arr;
    delete [] arr1;
    delete [] arr2;
}
