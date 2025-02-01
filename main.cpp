#include <iostream>
using namespace std;
int main(){
    int size, largeint=0;
    cout<<"Enter array size= "<<endl;
    cin>>size;
    int *large=new int [size];
    int *a=new int [size];
    for ( int i=0;i<size;++i){
        cout<<"Enter array element= "<<endl;
        cin>>a[i];
    }
    int *count=new int [size];
    for (int i=0; i<size;i++){
        for (int j=0;j<size;j++){
            if (a[i]==a[j]){
                count[i]++;
            }
        }
    }
    for (int i=0;i<size;i++){
        cout<<count[i]<<" ";
    }
    
    cout<<endl;
    for (int i=0;i<size;i++){
        if (count[i]>largeint){
            largeint=count[i];
        }
    }
    cout<<"Number of times of occurence= "<<largeint<<endl; //sab say ziada occurance
    
    for (int i=0;i<size;i++){
        if (count[i]==largeint){
            large[i]=a[i];
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    int *fi=new int [size];
    int i=0,j=0;
    int temp=0;
    do{
        int k=j;
        do{
            if (large[i]==fi[k]){
                temp++;
                k--;
            }
        }
        while (j>=0);
        if(temp>0){
            continue;
        }
        else
            fi[j]=large[i];
        j++;
        i++;
    }
    while (i<size && j<size);
    for (int q=0;q<size;q++){
        cout<<fi[q]<<" ";
    }
    cout<<endl;
}
    
