#include <iostream>
using namespace std;

void availability (int arr[][8], int &rows, int &col, int &type){
    int res=0;
    int count=0;
    cout<<"Enter 1 for business class and 2 for economy class. "<<endl;
    cin>>type;
    if (type==1){
        for (int i=0;i<2;i++){
            for (int j=0;j<col;j++){
                if (arr[i][j]==0){
                    cout<<"Room no. "<<j<<" is free on "<<i<<" floor, do you want to reserve it? Press 1 for yes. "<<endl;
                    cin>>res;
                    if (res==1){
                        arr[i][j]=1;
                        for (int i=0;i<rows;i++){
                            for (int j=0;j<col;j++){
                                cout<<arr[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<endl;
                        count++;
                        break;
                    }
                }
            }
            if (count!=0){
                break;
            }
        }
        if (count==0){
            cout<<"No available rooms. "<<endl;
        }
    }
    
    
    if (type==2){
        for (int i=2;i<rows;i++){
            for (int j=0;j<col;j++){
                if (arr[i][j]==0){
                    cout<<"Room no. "<<j<<" is free on "<<i<<" floor, do you want to reserve it? Press 1 for yes. "<<endl;
                    cin>>res;
                    if (res==1){
                        arr[i][j]=1;
                        for (int i=0;i<rows;i++){
                            for (int j=0;j<col;j++){
                                cout<<arr[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<endl;
                        count++;
                        break;
                    }
                }
            }
            if (count!=0){
                break;
            }
        }
        if (count==0){
            cout<<"No available rooms. "<<endl;
        }

    }
    }

int main(){
    int rows=8;
    int col=8;
    int arr[8][8]={0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0};
    
    int ans=1;
    int type=0;
    
    while (ans==1){
        availability (arr,rows,col,type);
        cout<<"Do you want to reserve another room? Press 1 for yes. "<<endl;
        cin>>ans;
    }
    
}
