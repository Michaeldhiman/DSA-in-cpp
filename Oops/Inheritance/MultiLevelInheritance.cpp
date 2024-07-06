#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void introduce(){
        cout<<"Hello my name is:"<<name<<endl;
    }
};
class Employee:public Person{ 
    protected:
    int salary;
    int employee_id;
    public:
    void monthly_salary(){
        cout<<"My Monthly salary is:"<<salary<<endl;
    }
};
class Manager:public Employee{
    public:
    string department;
    Manager(string name,int age,int salary,int employee_id,string department){
        this->department=department;
        this->employee_id=employee_id;
        this->salary=salary;
        this->name=name;
        this->age=age;
    };
    void work(){
        cout<<"I am leading the department:"<<department<<endl;
    }
};
int main(){
    Manager A1("Rohit",23,90000,1902,"Research");
    A1.work();
    A1.monthly_salary();
    A1.introduce();
    return 0;
}