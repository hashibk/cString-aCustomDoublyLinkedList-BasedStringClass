#include <iostream>
using namespace std;

int *InputArray(int &size){
    int *arr=new int [size];
    for (int i=0;i<size;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
    return arr;
}

int *SubArrays (int &size, int arr[], int size2){
    int *arr2=new int[size2];
    int sum=0;
    int count=0;
    int a=0;
    for (int i=0;i<size;i++){
        for (int j=i;j<size;j++){
            cout<<count<<". ";
            for (int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            arr2[a]=sum;
            a++;
            sum=0;
            count++;
            cout<<endl;
        }
    }
    return arr2;
}

void MaximumSum (int arr[], int arr2[], int size, int size2){
    int count=0;
    for (int i=0;i<size2;i++){
        for (int j=0;j<size2;j++){
            if (arr2[i]==arr[j]){
                for (int k=0;k<size;k++){
                    for (int l=k;l<size;l++){
                        if (count==j){
                        }
                    }
                }
            }
        }
    }
}
void SortingArray (int size2, int arr2[]){
    int max=0;
    int temp=0;
    for (int i=0;i<size2;i++){
        for (int j=i+1;j<size2;j++){
            if (arr2[j]>arr2[i]){
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
}

    int main(){
        int size;
        cout<<"Enter size of array= "<<endl;
        cin>>size;
        int size2= size*(size+1)/2;
        int *arr=InputArray(size);
        int *arr2=SubArrays(size,arr,size2);
        for (int i=0;i<size2;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        SortingArray(size2,arr2);
        for (int i=0;i<size2;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }


