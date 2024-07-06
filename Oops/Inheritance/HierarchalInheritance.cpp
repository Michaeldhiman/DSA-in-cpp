#include<bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    public:
    Human(){
        
    }
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<this->name<<" "<<this->age<<endl;
    }
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
};
class  Teacher:public Human{
    int salary;
    public:
    Teacher(string name, int age, int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    void display(){
        cout<<this->name<<" "<<this->age<<" "<<this->salary<<endl;
    } 


};
int main(){
    // Student A1("Rohit",23,1242,99);
    Teacher A1("Rohit",23,90000);
    A1.display();
    // A1.work();
    // Student A1;
    return 0;
}