#include<bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    public:
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<this->name<<" "<<this->age<<endl;
    }
    // Human(){
    //     cout<<"Hello Human"<<endl;
    // }
    // ~Human(){
    //     cout<<"Hello Human Destructor"<<endl;
    // }
    // void work(){
    //     cout<<"I am Working\n";
    // }
};
class Student:public Human{
    int roll_no;
    int fees;
    public:
    Student(string name,int age,int roll_no,int fees):Human(name,age){
        this->name=name;
        this->age=age;
        this->fees=fees;
        this->roll_no=roll_no;
    }
    void display(){
        cout<<this->name<<" "<<this->age<<" "<<this->fees<<endl;
    }
    // Student(){
    //     cout<<"hello Student"<<endl;
    // }
    // ~Student(){
    //     cout<<"hello Student Destructor"<<endl;
    // }
};
int main(){
    Student A1("Rohit",23,1242,99);
    A1.display();
    // A1.work();
    // Student A1;
    return 0;
}