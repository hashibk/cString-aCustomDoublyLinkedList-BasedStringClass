#include <iostream>
using namespace std;

int** AllocateMemory(int& rows, int& cols){
    cout<<"Enter rows= "<<endl;
    cin>>rows;
    cout<<"Enter columns= "<<endl;
    cin>>cols;
    int **array=new int *[rows];
    for (int i=0;i<rows;i++){
        array[i]=new int [cols];
    }
    return array;
}

void InitializeMatrix(int** matrix, const int& rows, const int& cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            matrix[i][j]=0;
        }
    }
}

void DisplayMatrix(int** matrix, const int& rows, const int& cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void DeallocateMemory(int** matrix, const int& rows){
    for (int i=0;i<rows;i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}

int main(){
    int x,y;
    int **arr=AllocateMemory(x,y);
    InitializeMatrix(arr,x,y);
    DisplayMatrix(arr,x,y);

}