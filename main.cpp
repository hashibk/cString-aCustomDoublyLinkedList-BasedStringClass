#include <iostream>
using namespace std;

int *MIX(int a[],int b[],int size1,int size2){
    int size3=size1+size2;
    int *c=new int [size3];
    int i=0;
    //
    int j=0;
    //
    int k=size3-1;
    do {
        if (a[i]%2==0){
            c[j]=a[i];
            i++;
            j++;
        }
        else{
            c[k]=a[i];
            i++;
            k--;
        }
    }
    while (i<size1 && j<size3 && k>=0);
    
    int l=0;
    do {
        if (b[l]%2==0){
            c[j]=b[l];
            j++;
            l++;
        }
        else{
            c[k]=b[l];
            l++;
            k--;
        }
    }
    while (l<size2 && j<size3 && k>=0);
    return c;
}

int main(){
    int size1, size2;
    cout<<"Enter size of first array= "<<endl;
    cin>>size1;
    cout<<"Enter size of second array= "<<endl;
    cin>>size2;
    int *a=new int[size1];
    int *b=new int[size2];
    for (int i=0;i<size1;i++){
        cout<<"Enter array element of first array= "<<endl;
        cin>>a[i];
    }
    for (int i=0;i<size2;i++){
        cout<<"Enter array element of second array= "<<endl;
        cin>>b[i];
    }
    
    int *c=MIX(a,b,size1,size2);
    
    for (int i=0;i<size1+size2;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}
