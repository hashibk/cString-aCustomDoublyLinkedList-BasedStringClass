//finds pattern horizontally right, horizontally left, vertically down,
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number of rows= "<<endl;
    cin>>x;
    cout<<"Enter number of columns= "<<endl;
    cin>>y;
    
    char **arr=new char *[x];
    for (int i=0;i<x;i++){
        arr[i]=new char [y];
    }
    
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout<<"Enter array element= "<<endl;
            cin>>arr[i][j];
        }
    }
    
    int z;
    cout<<"Enter size of word= "<<endl;
    cin>>z;
    char *word= new char [z];
    for (int i=0;i<z;i++){
        cout<<"Enter character= "<<endl;
        cin>>word[i];
    }
    
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    int a2=0;
    int b2=0;
    int a4=0;
    int b4=0;
    int right=0;
    int up=z-1;
    int ddleft=0;
    
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            if (arr[i][j]==word[right]){
                right++;
                if (right==z){
                    cout<<"Pattern found horizontally right at row= "<<i<<" and column= "<<j-z+1<<endl;
                }
            }
            else {
                right=0;
            }
            if (j==y-1){
                right=0;
            }
        }
    }
    
    do{
        if (arr[a2][b2]==word[up]){
            up--;
            if (up==-1){
                cout<<"Pattern found vertically up starting from row= "<<a2<<" and column= "<<b2<<endl;
            }
            a2++;
        }
        else{
            b2++;
            if (b2==y-1){
                b2=0;
                a2++;
            }
            up=z-1;
        }
    }
    while (a2<x);
    
    do{
               if (arr[a4][b4]==word[ddleft]){
                   a4++;
                   b4--;
                   ddleft++;
                   if (ddleft==z-1){
                       cout<<"Pattern found diagonally left down starting from row "<<a4-ddleft<<" and column "<<b4+ddleft<<endl;
                   }
               }
               else {
                   if (b4==y-1){
                       a4++;
                       b4=0;
                   }
                   b4++;
               }
           }
           while (a4>=0 || a4<x || b4>=0 || b4<y);
}


 
