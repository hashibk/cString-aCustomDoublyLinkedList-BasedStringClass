#include <iostream>
using namespace std;

void fillArray(int **arr, int *arr1, int rows){
    int a=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<arr1[i];j++){
            do{
                cout<<"Enter array element= "<<endl;
                cin>>a;
                if (a<0){
                    cout<<"Enter a positive number. "<<endl;
                }
            }
            while (a<0);
            arr[i][j]=a;
        }
    }
}

int* twoDimToOneDim(int **arr, int *arr1, int rows, int &sum){
    for (int i=0;i<rows;i++){
        sum+=arr1[i];
    }
    int *arr2=new int [sum];
    
    int a=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<arr1[i];j++){
            arr2[a]=arr[i][j];
            a++;
        }
    }
    
    return arr2;
}

void sortArr(int *onedarr,int sum){
    for (int i=0;i<sum-1;i++){
        for (int j=i+1;j<sum;j++){
            if (onedarr[i]>onedarr[j]){
                int temp=onedarr[i];
                onedarr[i]=onedarr[j];
                onedarr[j]=temp;
            }
        }
    }
}

void showArr(int *onedarr, int sum){
    for (int i=0;i<sum;i++){
        cout<<onedarr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int sum=0;
    int x,y;
    cout<<"Enter number of rows= "<<endl;
    cin>>x;
    int **arr=new int *[x];
    int *arr1=new int[x];
    for (int i=0;i<x;i++){
        cout<<"Enter columns for rows "<<i+1<<"= "<<endl;
        cin>>y;
        arr[i]=new int [y];
        arr1[i]=y;
    }
    
    fillArray(arr,arr1,x);
    
    //i have not written a seperate function to output the original array given by the user because this was not required in the question//
    cout<<endl;
    for (int i=0;i<x;i++){
        for (int j=0;j<arr1[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int *onedimarr=twoDimToOneDim(arr,arr1,x,sum);
    sortArr(onedimarr,sum);
    showArr(onedimarr,sum);
    
    delete [] onedimarr;
    for (int i=0;i<x;i++){
        delete [] arr[i];
    }
    delete [] arr;
    
}