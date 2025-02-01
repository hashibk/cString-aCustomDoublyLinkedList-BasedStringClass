// N*(N+1)/2 (formula for number of subarrays taken from google
#include <iostream>
using namespace std;
int *InputArray (int &size){
    int *arr=new int [size];
    for (int i=0;i<size;i++){
        cout<<"Enter array element= "<<endl;
        cin>>arr[i];
    }
    return arr;
}

int *SubArrays (int &size, int arr[], int &count, int &total, int &k, int &size2, int &target){
    //displays list of all possible subarrays
    int *arr2=new int [size2];
    for (int i=0;i<size;i++){
        for (int j=i;j<size;j++){
            cout<<count<<". ";
            count++;
            for (int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                total+=arr[k];
            }
            cout<<endl;
            arr2[k]=total;
            k++;
            total=0;
        }
    }
    return arr2;
}

void LargestSum (int &size,int arr[],int arr2[],int &target){
    //displays subarray with largest sum
    for (int i=0;i<size;i++){
        int sum=0;
        for (int j=i;j<size;j++){
            for (int k=i;k<=j;k++){
                sum+=arr[k];
            }
             if (sum==arr2[target]){
                 cout<<"Subarray with maximum sum= "<<endl;
                            for (int a=i;a<=j;a++){
                                cout<<arr[a]<<" ";
                            }
            }
            sum=0;
            }
        }
}
int main(){
    int count=0;
    int largest=0;
    int size;
    int total=0;
    int k=0;
    cout<<"Enter size of array= "<<endl;
    cin>>size;
    int *arr= InputArray(size);
    int target = arr[0];
    int size2=size*(size+1)/2;
    int *arr2=SubArrays(size,arr,count,total,k,size2,target);
        

    for (int i=0;i<(size*(size+1))/2;i++){
        if (arr2[i]>=largest){
            largest=arr2[i];
        }
    }
    for (int i=0;i<(size*(size+1))/2;i++){
        if (arr2[i]==largest){
            target=i;
        }
    }
    
    LargestSum(size,arr,arr2,target);
    
    cout<<endl;
    return 0;
}
