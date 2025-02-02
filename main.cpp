#include <iostream>
using namespace std;

void fillArray (int **&arr, int x, int y){
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout<<"Enter value for array= "<<endl;
            cin>>arr[i][j];
        }
    }
}

void removeZero(int **arr, int **&arr1, int *arr2, int y, int x){
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    
    do{
        do{
            if (arr[a][b]!=0){
                arr1[a][c]=arr[a][b];
                c++;
                b++;
            }
            else if (arr[a][b]==0){
                b++;
            }
        } while (b<y);
        arr2[d]=c;
        d++;
        a++;
        b=0;
        c=0;
    } while(a<x);
}

void outputArray (int **arr1, int *arr2, int x){
    int e=0;
    int count=0;
    int f=0;
    for (int i=0;i<x;i++){
        do{
            cout<<arr1[i][f]<<" ";
            f++;
            count++;
        }
        while (count<arr2[e]);
        
        cout<<endl;
        count=0;
        e++;
        f=0;
    }
    cout<<endl;
}

int main(){
    int x;
    cout<<"Enter rows= "<<endl;
    cin>>x;
    int y;
    cout<<"Enter columns= "<<endl;
    cin>>y;
    int **arr=new int *[x];
    for (int i=0;i<x;i++){
        arr[i]=new int [y];
    }
    int **arr1=new int*[x];
    for (int i=0;i<x;i++){
        arr1[i]=new int [y];
    }
    int *arr2=new int [x];
    
    fillArray(arr,x,y);
    removeZero(arr,arr1,arr2,y,x);
    outputArray(arr1,arr2,x);
    
}
