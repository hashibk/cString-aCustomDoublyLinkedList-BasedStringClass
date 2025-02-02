#include <iostream>
using namespace std;

int *letterCount(string line){
    int *arr=new int[26];
    for (int i=0;i<26;i++){
        arr[i]=0;
    }
    
    for (int i=0;i<26;i++){
        for (int j=0;j<line.length();j++){
            if (int(line[j])==i+65 || int(line[j])==i+97){
                arr[i]++;
            }
        }
    }
    return arr;
}

void outputFrequency( int *array){
    cout<<"Letter frequency= "<<endl;
    for (int i=0;i<26;i++){
        if (array[i]==0){
            continue;
        }
        else{
            cout<<char(i+97)<<"= "<<array[i];
            cout<<endl;
        }
    }}

int main(){
    string line;
    cout<<"Enter a sentence= "<<endl;
    getline(cin,line);
    int *array=letterCount(line);
    outputFrequency(array);
    
    delete[]array;
}