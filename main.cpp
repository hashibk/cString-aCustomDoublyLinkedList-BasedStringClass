#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size of array= "<<endl;
    cin>>x;
    int *arr=new int [x];
    for (int i=0;i<x;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
    int a,b;
    int low=0;
    int up=0;
    for (int i=1;i<x-1;i++){
        a=0;
        b=i+1;
        do{
            low+=arr[a];
            a++;
            }
        while (a<i);
        
        do{
            up+=arr[b];
            b++;
        }
        while (b<x);
        
        if (low==up){
            cout<<"Equilibrium index is= "<<i<<endl;
            break;
        }
        up=0;
        low=0;
    }
    
}
