#include <iostream>
using namespace std;

class person{
private:
    string name;
    int age;
public:
    person(){
        name="";
        age=0;
    }
    
    void setnameage(string n, int a){
        name=n;
        age=a;
    }
    
    void getname(){
        cout<<name;
    }
    
    void getage(){
        cout<<age;
    }
    
    virtual void getdata(){}
    virtual void putdata(){}
    
    ~person(){}
    
};

class professor:public person{
private:
    int pblic;
public:
    professor(){
        pblic=0;
    }
    
    void getdata() override{
        string a;
        int b;
        cout<<"Enter name= "<<endl;
        cin>>a;
        cout<<"Enter age= "<<endl;
        cin>>b;
        setnameage(a,b);
        cout<<"Enter publications= "<<endl;
        cin>>pblic;
    }
    
    void putdata() override{
        getname();
        cout<<" ";
        getage();
        cout<<" ";
        cout<<pblic<<" ";
        cout<<"1"<<endl;
    }
};

class student:public person{
private:
    int* marks;
    int numsubs;
public:
    student(){
        marks=nullptr;
        numsubs=0;
    }
    
    void getdata(int i){
        string a;
        int b;
        cout<<"Enter name= "<<endl;
        cin>>a;
        cout<<"Enter age= "<<endl;
        cin>>b;
        setnameage(a,b);
        cout<<"Enter number of subjects= "<<endl;
        cin>>numsubs;
        marks=new int[numsubs];
        for (int i=0;i<numsubs;i++){
            cout<<"Enter marks= "<<endl;
            cin>>marks[i];
        }
    }
    
    void putdata() override {
        int total=0;
        getname();
        cout<<" ";
        getage();
        cout<<" ";
        for (int i=0;i!=numsubs;i++){
            total+=marks[i];
        }
        cout<<total<<" ";
        cout<<"2"<<endl;
    }
};

int main(){
    professor prof;
    student stu;
    prof.getdata();
    prof.putdata();
    stu.getdata(2);
    stu.putdata();
}