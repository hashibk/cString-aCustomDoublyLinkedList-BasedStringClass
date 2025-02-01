#include <iostream>
using namespace std;

void Removing (string **arr, int &rows, int &col, int &found){
    int y=0;
    do{
        
        for (int i=0;i<col;i++){
            for (int j=i+1;j<col;j++){
                found=0;
                if (arr[y][i]==arr[y][j]){
                    found++;
                    for (int a=j;a<col-1;a++){
                        arr[y][a]=arr[y][a+1];
                    }
                }
            }
        }
        y++;
    }
    
    while (y<rows);
}
int main(){
    int found=0;
    int rows;
    cout<<"Enter rows of array= "<<endl;
    cin>>rows;
    int col;
    cout<<"Enter columns of array= "<<endl;
    cin>>col;
    string **arr= new string *[rows];
    for (int i=0;i<rows;i++){
        arr[i]=new string [col];
    }
    
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
            cout<<"Enter array element= "<<endl;
            cin>>arr[i][j];
        }
    }
    
    Removing(arr,rows,col,found);
    col-=found;
    for (int i=0;i<rows;i++){
        for (int j=0;j<col-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
