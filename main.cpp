#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size of array= "<<endl;
    cin>>x;
    string *arr=new string [x];
    for (int i=0;i<x;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }

    
    string **arr2=new string *[x];
    for (int i=0;i<x;i++){
        arr2[i]=new string [x];
    }
    
    for (int i=0;i<x;i++){
        arr2[0][i]=arr[i];
    }
    
    int a=1;
    string temp=arr[0];
    for (int h=0;h<x-1;h++){
        for (int i=0;i<x-1;i++){
            temp=arr[0];
            arr2[a][i]=arr[i+1];
        }
        arr2[a][8]=temp;
        temp=arr[0];
        for (int i=0;i<x-1;i++){
            arr[i]=arr[i+1];
        }
        arr[8]=temp;
        a++;
    }
    
    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    string *arr3=new string [x];
    
    int y=0;
    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            if (arr2[i][y]<arr2[j][y]){
                for (int k=0;k<x;k++){
                    arr3[k]=arr2[i][k];
                }
                for (int k=0;k<x;k++){
                    arr2[i][k]=arr2[j][k];
                }
                for (int k=0;k<x;k++){
                    arr2[j][k]=arr3[k];
                }
            }
        }
    }
    
    
    cout<<endl;
    for (int i=0;i<x;i++){
        for (int j=0;j<x;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
}
