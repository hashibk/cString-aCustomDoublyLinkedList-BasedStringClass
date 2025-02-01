#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter array size= "<<endl;
    cin>>size;
    int *a=new int [size];
    for (int i=0; i<size; i++){
        cout<<"Enter array element= "<<endl;
        cin>>a[i];
    }
    int *b=new int[size];
    b[size]={0};
    for (int i=0;i<size;i++){
        if (a[i]%2==0){
            for (int x=0;x<size;x++){
                if (b[x]==0){
                    b[x]=a[i];
                    break;
                }
                else
                    continue;
            }
        }
        else
            for (int x=size-1;x>0;--x){
                if (b[x]==0){
                    b[x]=a[i];
                    break;
                }
                else
                    continue;
            }
    }
    for (int i=0;i<size;i++){
        cout<<b[i]<<" ";
        
    }
    cout<<endl;
    delete [] a;
    delete [] b;
    return 0;
}