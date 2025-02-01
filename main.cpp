//
//  main.cpp
//  Lab 6 Q1
//
//  Created by Syed Hashim Mustafa on 3/9/23.
//

#include <iostream>
using namespace std;
int main(){
    
    int *a, large=0, seclarge=0, thirdlarge=0,size;
    cout<<"Enter array size= "<<endl;
    cin>>size;
    a=new int [size];
    for (int i=0;i<size;i++){
        cout<<"enter element= "<<endl;
        cin>>a[i];
    }
    for (int i=0;i<size;i++){
        if (a[i]>large){
            large=a[i];
        }
    }
    for (int i=0;i<size;i++){
        if (a[i]>seclarge &&a[i]<large){
            seclarge=a[i];
        }
    }
    for (int i=0;i<size;i++){
        if (a[i]>thirdlarge && a[i]<seclarge){
            thirdlarge=a[i];
        }
    }

    cout<<"Largest element is= "<<large<<endl;
    cout<<"Second Largest element is= "<<seclarge<<endl;
    cout<<"Third Largest element is= "<<thirdlarge<<endl;
    return 0;
}
