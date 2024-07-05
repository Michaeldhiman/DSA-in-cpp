#include<bits/stdc++.h>
using namespace std;
class human{
    string religion,color;
    protected:
    string name;
    int age,weight;
};
class student:private human{
    int roll_no;
    int fees;
    // protected:
    // string name;
    // int age,weight;
    public:
    student(string name,int age, int weight,int roll_no,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display(){
        cout<<name<<endl;
        cout<<weight<<endl;
        cout<<age<<endl;
        cout<<roll_no<<endl;
        cout<<fees<<endl;
    }
    // void fun(string a,int b,int c){
    //     name=a;
    //     age=b;
    //     weight=c;
    // }
    // void display(){
    //     cout<<name<<endl;
    // }
};
int main(){
    student a("rohit",60,23,3342,90000);
    a.display();
    // a.fun("rohit",18,60);
    // a.display();

    return 0;
}